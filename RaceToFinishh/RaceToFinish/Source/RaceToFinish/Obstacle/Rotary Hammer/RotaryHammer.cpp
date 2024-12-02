#include "RotaryHammer.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ARotaryHammer::ARotaryHammer()
{
	PrimaryActorTick.bCanEverTick = true;

	// Initialize default values
	RotationSpeed = 100.0f;
	KnockbackForce = 1000.0f;

	// Create and configure the collision box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Overlap);

	// Bind the overlap event
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ARotaryHammer::OnHammerOverlapBegin);
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

	// Rotate the hammer
	RotateAroundAxis(RotationSpeed);
}

void ARotaryHammer::RotateAroundAxis(float Speed)
{
	FRotator RotationDelta(0.f, Speed * GetWorld()->DeltaTimeSeconds, 0.f);
	AddActorLocalRotation(RotationDelta);
}

void ARotaryHammer::OnHammerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character && Character->GetCharacterMovement())
	{
		// Calculate knockback direction
		FVector HammerLocation = GetActorLocation();
		FVector CharacterLocation = Character->GetActorLocation();
		FVector KnockbackDirection = (CharacterLocation - HammerLocation).GetSafeNormal();

		// Apply knockback force
		Character->LaunchCharacter(KnockbackDirection * KnockbackForce, true, true);
	}
}
