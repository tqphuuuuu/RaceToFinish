#include "SwingHammer.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASwingHammer::ASwingHammer()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	SetReplicateMovement(true);
	CurrentRotation = 0.0f;
}

void ASwingHammer::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority()) // Chỉ server mới quản lý Timer
	{
		// Set timer để gọi server mỗi 0.0167 giây (60 FPS)
		GetWorldTimerManager().SetTimer(
			RotationTimerHandle,
			this,
			&ASwingHammer::ServerRotateHammer,
			0.0167f, // Khoảng thời gian 1/60 giây cho 60 FPS
			true
		);
	}
}

void ASwingHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Server thực hiện logic xoay
void ASwingHammer::ServerRotateHammer_Implementation()
{
	if (HasAuthority()) // Server mới thực hiện logic xoay
	{
		RotateHammer();
	}
}

// Kiểm tra tính hợp lệ của Server RPC
bool ASwingHammer::ServerRotateHammer_Validate()
{
	return true;
}

// Hàm thực hiện logic xoay
void ASwingHammer::RotateHammer()
{
	CurrentRotation += RotationSpeed * RotationDirection * 0.0167f; // Timer gọi mỗi 0.0167 giây

	if (CurrentRotation >= MaxRotation || CurrentRotation <= MinRotation)
	{
		RotationDirection *= -1; // Đảo ngược hướng nếu đạt góc tối đa hoặc tối thiểu
	}

	FRotator NewRotation = FRotator(CurrentRotation, 90.0f, 0.0f); 
	SetActorRotation(NewRotation);
}

void ASwingHammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASwingHammer, CurrentRotation);
}
