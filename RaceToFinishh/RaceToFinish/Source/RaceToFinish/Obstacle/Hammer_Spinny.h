// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RotaryHammer.h"
#include "GameFramework/Actor.h"
#include "Hammer_Spinny.generated.h"

UCLASS()
class RACETOFINISH_API AHammer_Spinny : public ARotaryHammer
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHammer_Spinny();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
