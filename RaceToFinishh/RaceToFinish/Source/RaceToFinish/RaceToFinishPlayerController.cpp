// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaceToFinishPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "RaceToFinishCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/KismetSystemLibrary.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ARaceToFinishPlayerController::ARaceToFinishPlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void ARaceToFinishPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ARaceToFinishPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!HasAuthority())
	{
		FHitResult HitResult;
		GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, HitResult);
		FVector MouseLocation = HitResult.Location;

		Server_Test(MouseLocation);
		
	}
}

void ARaceToFinishPlayerController::Server_Test_Implementation(FVector MouseLocation)
{

	ARaceToFinishCharacter* CharacterPlayer = Cast<ARaceToFinishCharacter>(GetPawn());
	if(IsValid(CharacterPlayer))
	{
		CharacterPlayer->Mouse = MouseLocation;
	
	}
}
void ARaceToFinishPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ARaceToFinishPlayerController::OnSetDestinationTriggered);

		// Move Action
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ARaceToFinishPlayerController::OnMoveAction);

	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ARaceToFinishPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void ARaceToFinishPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
}

void ARaceToFinishPlayerController::OnMoveAction(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();

			if (this != nullptr)
			{
				// find out which way is forward
				const FRotator Rotation = GetControlRotation();
				const FRotator YawRotation(0, Rotation.Yaw, 0);

				// get forward vector
				const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
				// get right vector .
				const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

				// add movement 
				GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
				GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
			}
}


