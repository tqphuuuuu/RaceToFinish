// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RotatyHammerPink.h"
#include "GameFramework/Actor.h"
#include "Rotaty_HammerCylinder.generated.h"

UCLASS()
class RACETOFINISH_API ARotaty_HammerCylinder : public ARotatyHammerPink
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARotaty_HammerCylinder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
