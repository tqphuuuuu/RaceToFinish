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
	bReplicates = true;
	SetReplicateMovement(true);    

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

// Called every frame
void ARotaryHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Rotate the hammer
	RotateAroundAxis(RotationSpeed);
}

void ARotaryHammer::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority()) // Chỉ server mới đặt Timer
	{
		GetWorldTimerManager().SetTimer(
			RotationTimerHandle,
			this,
			&ARotaryHammer::ClientRequestRotation,
			0.0167f, 
			true
		);
	}
}

// Client RPC: Yêu cầu xoay
void ARotaryHammer::ClientRequestRotation_Implementation()
{
	if (!HasAuthority())
	{
		ServerRotateHammer();
	}
}

// Server RPC: Xoay búa
void ARotaryHammer::ServerRotateHammer_Implementation()
{
	if (HasAuthority())
	{
		RotateAroundAxis(RotationSpeed);
	}
}

// Logic xoay
void ARotaryHammer::RotateAroundAxis(float Speed)
{
	
	float FixedDeltaTime = 0.1f; // Khoảng thời gian cố định cho mỗi lần gọi Timer
	FRotator RotationDelta(0.f, Speed * FixedDeltaTime, 0.f);
	AddActorLocalRotation(RotationDelta);
}

void ARotaryHammer::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
}

void ARotaryHammer::OnHammerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character && Character->GetCharacterMovement())
	{
		FVector HammerLocation = GetActorLocation();
		FVector CharacterLocation = Character->GetActorLocation();
		FVector KnockbackDirection = (CharacterLocation - HammerLocation).GetSafeNormal();
		Character->LaunchCharacter(KnockbackDirection * KnockbackForce, true, true);
	}
}
