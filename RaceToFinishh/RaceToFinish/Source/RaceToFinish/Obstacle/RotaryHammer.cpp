// Fill out your copyright notice in the Description page of Project Settings.


#include "RotaryHammer.h"


// Sets default values
ARotaryHammer::ARotaryHammer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RotationSpeed = 100.0f;
}


// Called when the game starts or when spawned
void ARotaryHammer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotaryHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotateAroundAxis(RotationSpeed);
}


void ARotaryHammer::RotateAroundAxis(float Speed)
{
	FRotator RotationDelta(0.f, Speed * GetWorld()->DeltaTimeSeconds, 0.f);
    
	AddActorLocalRotation(RotationDelta);
}