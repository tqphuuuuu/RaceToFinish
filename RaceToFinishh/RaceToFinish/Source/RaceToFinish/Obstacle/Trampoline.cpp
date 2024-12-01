// Fill out your copyright notice in the Description page of Project Settings.


#include "Trampoline.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
ATrampoline::ATrampoline()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpringMesh"));
	RootComponent = SpringMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(RootComponent);

	// Set default launch power
	LaunchPower = 1000.0f;

	// Enable overlap events
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	// Bind overlap event
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATrampoline::OnOverlapBegin);
}


// Called when the game starts or when spawned
void ATrampoline::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrampoline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 
}

void ATrampoline::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
								   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
								   bool bFromSweep, const FHitResult& SweepResult)
{
	UKismetSystemLibrary::PrintString(this,"OnOverlapBegin");

	// Check if the overlapping actor is a character
	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character)
	{
		UKismetSystemLibrary::PrintString(this,"Character");
		// Apply upward launch force
		FVector LaunchVelocity = FVector(0, 0, LaunchPower);
		Character->LaunchCharacter(LaunchVelocity, true, true);
	}
}

