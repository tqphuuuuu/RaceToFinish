// SwingHammer.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwingHammer.generated.h"

UCLASS()
class RACETOFINISH_API ASwingHammer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwingHammer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Rotation speed and limits
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float RotationSpeed = 45.0f; // Rotation speed in degrees per second

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float MaxRotation = 90.0f; // Max rotation angle

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float MinRotation = -90.0f; // Min rotation angle

private:
	// The current rotation of the hammer
	UPROPERTY(Replicated)
	float CurrentRotation;

	// Direction of rotation (1 for clockwise, -1 for counter-clockwise)
	UPROPERTY()
	int32 RotationDirection = 1;


	// Network function to replicate CurrentRotation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
