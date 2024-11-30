// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovingBoard.h"
#include "GameFramework/Actor.h"
#include "Moving_ObstacleRail.generated.h"

UCLASS()
class RACETOFINISH_API AMoving_ObstacleRail : public AMovingBoard
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMoving_ObstacleRail();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
