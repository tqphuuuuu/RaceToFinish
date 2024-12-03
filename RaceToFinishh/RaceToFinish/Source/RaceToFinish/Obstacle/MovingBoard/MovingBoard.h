// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingBoard.generated.h"

UCLASS()
class RACETOFINISH_API AMovingBoard : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingBoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Vị trí ban đầu và điểm kết thúc cho tấm ván trượt
	FVector StartLocation;
	FVector EndLocation;

	// Tốc độ di chuyển
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Speed")
	float MoveSpeed;

	// Thời gian chuyển động
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Time Move",Replicated)
	float MoveTime;

	UPROPERTY(Replicated)
	FVector CurrentLocation;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Move",Replicated)
	bool bMoveForward;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Distance")
	float Distance;

	UFUNCTION(Server,unreliable	)
	void MoveBoard();

	FTimerHandle MoveTimerHandle;
	float TimerInterval = 0.0167f;

	UFUNCTION(Client,Unreliable)
	void ClientMoveBoard();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
};

