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

	// Timer handle
	FTimerHandle RotationTimerHandle;

	// Client gọi Server thực hiện việc xoay

	// Server thực hiện xoay
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerRotateHammer();

	void RotateHammer();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float RotationSpeed = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float MaxRotation = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Swing Hammer")
	float MinRotation = -90.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwingHammer")
	int32 RotationDirection = 1;

private:
	UPROPERTY(Replicated)
	float CurrentRotation;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
