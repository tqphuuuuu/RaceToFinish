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
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

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

	FVector Location = GetActorLocation();
	FRotator Temp =  UKismetMathLibrary::FindLookAtRotation(Location , Mouse);
	Temp.Roll = GetActorRotation().Roll;
	Temp.Pitch = GetActorRotation().Pitch;
	SetActorRotation(Temp);
	/*FString MouseString = FString::Printf(TEXT("Mouse Position - X: %f, Y: %f, Z: %f"), Mouse.X, Mouse.Y, Mouse.Z);

	// In ra trên màn hình
	UKismetSystemLibrary::PrintString(this, MouseString, true, true, FLinearColor::Green, 5.0f);*/

	// Lấy vector vận tốc của nhân vật
	FVector Velocity = GetVelocity();
	Velocity.Z = 0; // Loại bỏ thành phần Z để giữ cho camera quay trong mặt phẳng 2D

	// Nếu có chuyển động
	if (!Velocity.IsNearlyZero())
	{
		// Tính toán góc quay từ vector vận tốc
		FRotator NewRotation = Velocity.Rotation();

		// Cập nhật hướng quay của camera
		FRotator CurrentRotation = CameraBoom->GetComponentRotation(); // CameraBoom là Spring Arm của camera

		// Tạo một giá trị quay mới để hướng camera về phía di chuyển
		CameraBoom->SetWorldRotation(FRotator(0, NewRotation.Yaw, 0)); // Yaw là góc quay quanh trục Z
	}

}

void ARaceToFinishCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ARaceToFinishCharacter, Mouse);

}
