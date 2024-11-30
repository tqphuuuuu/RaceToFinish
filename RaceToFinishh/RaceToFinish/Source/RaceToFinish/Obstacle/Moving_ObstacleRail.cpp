// Fill out your copyright notice in the Description page of Project Settings.


#include "Moving_ObstacleRail.h"


// Sets default values
AMoving_ObstacleRail::AMoving_ObstacleRail()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMoving_ObstacleRail::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoving_ObstacleRail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

