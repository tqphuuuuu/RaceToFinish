// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingHammer.h"


// Sets default values
ASwingHammer::ASwingHammer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASwingHammer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwingHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

