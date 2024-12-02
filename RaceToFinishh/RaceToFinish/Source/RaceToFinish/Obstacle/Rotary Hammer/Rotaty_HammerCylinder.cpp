// Fill out your copyright notice in the Description page of Project Settings.


#include "Rotaty_HammerCylinder.h"


// Sets default values
ARotaty_HammerCylinder::ARotaty_HammerCylinder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARotaty_HammerCylinder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotaty_HammerCylinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

