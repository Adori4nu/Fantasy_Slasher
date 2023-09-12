// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SPlayerAnimInstance.h"
#include "Characters/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void USPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (SlasherCharacter = Cast<APlayerCharacter>(TryGetPawnOwner()); SlasherCharacter)
	{
		SlasherCharacterMovement = SlasherCharacter->GetCharacterMovement();
	}
}

void USPlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (SlasherCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(SlasherCharacterMovement->Velocity);
		IsFalling = SlasherCharacterMovement->IsFalling();
		CharacterState = SlasherCharacter->GetCharacterState();
		ActionState = SlasherCharacter->GetActionState();
		DeathPose = SlasherCharacter->GetDeathPose();
	}
}
