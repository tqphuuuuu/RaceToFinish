// Fill out your copyright notice in the Description page of Project Settings.


#include "Hammer_Spinny.h"


// Sets default values
AHammer_Spinny::AHammer_Spinny()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHammer_Spinny::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHammer_Spinny::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

