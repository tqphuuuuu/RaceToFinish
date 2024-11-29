// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaceToFinishCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

ARaceToFinishCharacter::ARaceToFinishCharacter()
{
	bReplicates = true;

	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = true; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ARaceToFinishCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	FVector Velocity = GetVelocity();
	if (Velocity.SizeSquared() > 0.0f) // Kiểm tra xem nhân vật có di chuyển hay không
	{
		FRotator NewRotation = Velocity.Rotation(); // Chuyển hướng di chuyển thành góc quay
		SetActorRotation(NewRotation); // Cập nhật lại hướng quay của nhân vật
	}
	
	Velocity.Z = 0; // Loại bỏ thành phần Z để giữ cho camera quay trong mặt phẳng 2D

	// Nếu có chuyển động
	if (!Velocity.IsNearlyZero())
	{
		// Tính toán góc quay từ vector vận tốc
		FRotator NewRotation = Velocity.Rotation();

		// Giới hạn Pitch của camera để không bị quá thấp hoặc quá cao
		const float MinPitch = -30.0f;  // Giới hạn dưới
		const float MaxPitch = 30.0f;   // Giới hạn trên

		// Giới hạn Pitch trong khoảng từ MinPitch đến MaxPitch
		NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch, MinPitch, MaxPitch);

		// Lấy góc quay hiện tại của camera
		FRotator CurrentRotation = CameraBoom->GetComponentRotation(); // CameraBoom là Spring Arm của camera

		// Lưu nguyên giá trị Pitch của camera nhưng cập nhật Yaw (hoặc Roll) từ hướng di chuyển
		NewRotation.Pitch = CurrentRotation.Pitch;  // Giữ nguyên Pitch của camera
		// Nếu bạn muốn mượt mà hóa góc quay:
		NewRotation.Yaw = FMath::Lerp(CurrentRotation.Yaw, NewRotation.Yaw, 0.1f); // Thay đổi Yaw một cách mượt mà

		// Cập nhật lại góc quay cho Camera Boom (Spring Arm)
		CameraBoom->SetWorldRotation(NewRotation); // Cập nhật hướng quay của camera
	}


}

void ARaceToFinishCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ARaceToFinishCharacter, Mouse);

}
