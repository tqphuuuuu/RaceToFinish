// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingHammer.h"


// Sets default values
ASwingHammer::ASwingHammer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentRotation = 0.0f;

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
	 // Update the current rotation based on the direction
        CurrentRotation += RotationSpeed * RotationDirection * DeltaTime;
    
        // Clamp rotation to avoid overshooting max/min angles
        if (CurrentRotation >= MaxRotation || CurrentRotation <= MinRotation)
        {
            // Reverse the direction if max or min rotation is reached
            RotationDirection *= -1;
        }
    
        // Apply the rotation to the actor
        FRotator NewRotation = FRotator(CurrentRotation, 90.0f, 0.0f);  // Assuming we rotate around Yaw (Y-axis)
        SetActorRotation(NewRotation);
}

