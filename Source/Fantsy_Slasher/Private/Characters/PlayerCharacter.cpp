// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/AttributeComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GroomComponent.h"
#include "Items/Item.h"
#include "Items/Soul.h"
#include "Items/Treasure.h"
#include "Items/Weapons/Weapon.h"
#include "Animation/AnimMontage.h"
#include "HUD/SlasherHUD.h"
#include "HUD/SlasherOverlay.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);


}

void APlayerCharacter::Tick(float DeltaTime)
{
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
}

void APlayerCharacter::Jump()
{
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return 0.0f;
}

void APlayerCharacter::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
}

void APlayerCharacter::SetOverlappingItem(AItem* Item)
{
}

void APlayerCharacter::AddSouls(ASoul* Soul)
{
}

void APlayerCharacter::AddGold(ATreasure* Treasure)
{
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::MoveForward(float Value)
{
}

void APlayerCharacter::MoveRight(float Value)
{
}

void APlayerCharacter::Turn(float Value)
{
}

void APlayerCharacter::LookUp(float Value)
{
}

void APlayerCharacter::EKeyPressed()
{
}

void APlayerCharacter::Attack()
{
}

void APlayerCharacter::Dodge()
{
}

void APlayerCharacter::EquipWeapon(AWeapon* Weapon)
{
}

void APlayerCharacter::AttackEnd()
{
}

void APlayerCharacter::DodgeEnd()
{
}

bool APlayerCharacter::CanAttack()
{
	return false;
}

bool APlayerCharacter::CanDisarm()
{
	return false;
}

bool APlayerCharacter::CanArm()
{
	return false;
}

void APlayerCharacter::Disarm()
{
}

void APlayerCharacter::Arm()
{
}

void APlayerCharacter::PlayEquipMontage(const FName& SectionName)
{
}

void APlayerCharacter::Die_Implementation()
{
}

bool APlayerCharacter::HasEnoughStamina()
{
	return false;
}

bool APlayerCharacter::IsOccupied()
{
	return false;
}

void APlayerCharacter::AttachWeaponToBack()
{
}

void APlayerCharacter::AttachWeaponToHand()
{
}

void APlayerCharacter::FinishEquipping()
{
}

void APlayerCharacter::HitReactEnd()
{
}

bool APlayerCharacter::IsUnoccupied()
{
	return false;
}

void APlayerCharacter::InitializeSlashOverlay()
{
}

void APlayerCharacter::SetHUDHealth()
{
}
