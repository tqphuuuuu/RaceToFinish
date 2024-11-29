// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle_Column.h"


// Sets default values
AObstacle_Column::AObstacle_Column()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AObstacle_Column::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle_Column::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

