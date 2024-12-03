// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Trampoline.generated.h"


UCLASS()
class RACETOFINISH_API ATrampoline : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ATrampoline();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function to handle overlap
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Box collision component for the trampoline
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComp;

	// The force applied to the character when hit
	UPROPERTY(EditAnywhere)
	float LaunchStrength = 1000.f;
};
