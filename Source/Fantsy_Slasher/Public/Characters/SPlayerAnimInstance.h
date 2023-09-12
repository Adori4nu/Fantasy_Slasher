// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterTypes.h"
#include "SPlayerAnimInstance.generated.h"

class APlayerCharacter;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class FANTSY_SLASHER_API USPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
		TObjectPtr<APlayerCharacter> SlasherCharacter;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		TObjectPtr<UCharacterMovementComponent> SlasherCharacterMovement;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		bool IsFalling;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		ECharacterState CharacterState;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		EActionState ActionState;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
		TEnumAsByte<EDeathPose> DeathPose;

};
