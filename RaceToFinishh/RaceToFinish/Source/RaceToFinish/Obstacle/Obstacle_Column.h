// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hammer.h"
#include "GameFramework/Actor.h"
#include "Obstacle_Column.generated.h"

UCLASS()
class RACETOFINISH_API AObstacle_Column : public AHammer
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AObstacle_Column();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
