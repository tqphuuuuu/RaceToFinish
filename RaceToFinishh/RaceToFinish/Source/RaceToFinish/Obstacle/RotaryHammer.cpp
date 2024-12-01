#include "RotaryHammer.h"

// Sets default values
ARotaryHammer::ARotaryHammer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default values
	RotationSpeed = 100.0f;       // Default rotation speed
	RotationDirection = 1;       // Default direction (clockwise)
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

	// Rotate based on speed and direction
	RotateAroundAxis();
}

void ARotaryHammer::RotateAroundAxis()
{
	// Ensure rotation direction is either 1 or -1
	RotationDirection = FMath::Clamp(RotationDirection, -1, 1);

	// Apply rotation
	FRotator RotationDelta(0.f, RotationDirection * RotationSpeed * GetWorld()->DeltaTimeSeconds, 0.f);
	AddActorLocalRotation(RotationDelta);
}
