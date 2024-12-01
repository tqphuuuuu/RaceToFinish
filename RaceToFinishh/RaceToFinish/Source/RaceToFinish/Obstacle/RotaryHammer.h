#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotaryHammer.generated.h"

UCLASS()
class RACETOFINISH_API ARotaryHammer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARotaryHammer();

	void RotateAroundAxis();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Speed of rotation, editable in the editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation Settings")
	float RotationSpeed;

	// Direction of rotation: 1 for clockwise, -1 for counter-clockwise
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation Settings")
	int32 RotationDirection;
};
