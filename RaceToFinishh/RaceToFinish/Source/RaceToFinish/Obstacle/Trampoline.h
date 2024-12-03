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

	
	// Components
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* SpringMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	class USphereComponent* CollisionBox;


	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	// Adjustable launch power
	UPROPERTY(EditAnywhere, Category="Spring Settings")
	float LaunchPower;

	// Function to handle overlap


};
