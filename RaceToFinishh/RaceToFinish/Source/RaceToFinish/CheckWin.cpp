// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckWin.h"


// Sets default values
ACheckWin::ACheckWin()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACheckWin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckWin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

