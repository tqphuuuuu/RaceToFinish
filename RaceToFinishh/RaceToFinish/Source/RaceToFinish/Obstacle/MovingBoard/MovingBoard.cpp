// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingBoard.h"

#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AMovingBoard::AMovingBoard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveSpeed = 200.f; // Tốc độ di chuyển
	MoveTime = 0.f;
	bMoveForward = true;
	Distance = 1000.f;
}

// Called when the game starts or when spawned
void AMovingBoard::BeginPlay()
{
	Super::BeginPlay();
	// Lấy vị trí ban đầu và điểm kết thúc
	StartLocation = GetActorLocation();
	EndLocation = StartLocation + FVector(0.f, Distance, 0.f); // 1000 đơn vị di chuyển theo trục X
	
}

// Called every frame
void AMovingBoard::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	MoveTime += DeltaTime;

	// Nếu đang di chuyển về phía trước
	
}
void AMovingBoard::MoveBoard_Implementation()
{
	UKismetSystemLibrary::PrintString(this,"Tick");
	if (bMoveForward)
	{
		// Di chuyển tấm ván về phía điểm kết thúc
		SetActorLocation(FMath::Lerp(StartLocation, EndLocation, MoveTime * MoveSpeed / FVector::Distance(StartLocation, EndLocation)));
		
		// Kiểm tra nếu đã tới điểm kết thúc
		if (MoveTime * MoveSpeed >= FVector::Distance(StartLocation, EndLocation))
		{
			// Đổi hướng di chuyển
			bMoveForward = false;
			MoveTime = 0.f; // Reset thời gian
		}
	}
	else
	{
		// Di chuyển tấm ván về phía điểm bắt đầu
		SetActorLocation(FMath::Lerp(EndLocation, StartLocation, MoveTime * MoveSpeed / FVector::Distance(StartLocation, EndLocation)));
		
		// Kiểm tra nếu đã về đến vị trí ban đầu
		if (MoveTime * MoveSpeed >= FVector::Distance(StartLocation, EndLocation))
		{
			// Đổi hướng di chuyển
			bMoveForward = true;
			MoveTime = 0.f; // Reset thời gian
		}
	}
}

