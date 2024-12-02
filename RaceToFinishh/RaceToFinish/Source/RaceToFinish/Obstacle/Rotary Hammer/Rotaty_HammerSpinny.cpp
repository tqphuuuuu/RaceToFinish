// Fill out your copyright notice in the Description page of Project Settings.


#include "Rotaty_HammerSpinny.h"


// Sets default values
ARotaty_HammerSpinny::ARotaty_HammerSpinny()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARotaty_HammerSpinny::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotaty_HammerSpinny::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

