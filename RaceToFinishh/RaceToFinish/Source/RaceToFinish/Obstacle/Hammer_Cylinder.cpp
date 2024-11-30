// Fill out your copyright notice in the Description page of Project Settings.


#include "Hammer_Cylinder.h"


// Sets default values
AHammer_Cylinder::AHammer_Cylinder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHammer_Cylinder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHammer_Cylinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

