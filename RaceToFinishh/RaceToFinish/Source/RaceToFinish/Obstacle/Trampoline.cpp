// Fill out your copyright notice in the Description page of Project Settings.


#include "Trampoline.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
ATrampoline::ATrampoline()
{
	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	// Create and initialize the box collision component
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComp;
	CollisionComp->InitBoxExtent(FVector(100.f, 100.f, 20.f));  // Kích thước box
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	// Bind the overlap function
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ATrampoline::OnOverlapBegin);
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

// Handle collision and apply launch force
void ATrampoline::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		ACharacter* Character = Cast<ACharacter>(OtherActor);
		if (Character)
		{
			FVector LaunchDirection = FVector(0, 0, 1); // Direction upwards
			Character->LaunchCharacter(LaunchDirection * LaunchStrength, true,true);
		}
	}
}

