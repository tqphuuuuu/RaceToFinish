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


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Speed of rotation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation Settings")
	float RotationSpeed;

	// Timer để gọi Client RPC
	FTimerHandle RotationTimerHandle;

	// Hàm client được gọi từ Timer
	UFUNCTION(Client, Unreliable)
	void ClientRequestRotation();

	// Hàm server thực hiện xoay
	UFUNCTION(Server, Unreliable)
	void ServerRotateHammer();

	// Logic xoay
	void RotateAroundAxis(float Speed);

	// Knockback force
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback Settings")
	float KnockbackForce;

	// Collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	class UBoxComponent* CollisionBox;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

private:
	// Handle overlap events
	UFUNCTION()
	void OnHammerOverlapBegin(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
