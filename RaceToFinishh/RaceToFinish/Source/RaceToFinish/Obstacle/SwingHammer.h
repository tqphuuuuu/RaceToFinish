// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovingBoard.h"
#include "GameFramework/Actor.h"
#include "SwingHammer.generated.h"

UCLASS()
class RACETOFINISH_API ASwingHammer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASwingHammer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Speed")
	float RotationSpeed = 45.0f; // Degrees per second

	// Rotation Direction: 1 for increasing, -1 for decreasing
	int RotationDirection = 1;

	// Maximum and Minimum rotation angles
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MaxRotation")
	float MaxRotation = 45.0f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MinRotation")
	float MinRotation = -45.0f;

	// Current rotation value
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="CurrentRotation")
	float CurrentRotation;
};
