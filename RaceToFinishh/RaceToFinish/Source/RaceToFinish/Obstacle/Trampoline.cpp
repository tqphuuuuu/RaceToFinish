// Fill out your copyright notice in the Description page of Project Settings.


#include "Trampoline.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
ATrampoline::ATrampoline()
{
	// Set this actor to call Tick() ádasdevery frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionBox = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SetRootComponent(CollisionBox);

	SpringMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	SpringMesh->SetupAttachment(CollisionBox);

	// Set default launch power
	LaunchPower = 1000.0f;

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

void ATrampoline::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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

