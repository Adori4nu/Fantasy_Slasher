// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Characters/CharacterTypes.h"
#include "BaseCharacter.generated.h"

class AWeapon;
class UAttributeComponent;
class UAnimMontage;

UCLASS()
class FANTSY_SLASHER_API ABaseCharacter : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;
	virtual void Attack();

	UFUNCTION(BlueprintNativeEvent)
		void Die();

	void DirectionalHitReact(const FVector& ImpactPoint);
	virtual void HandleDamage(float DamageAmount);
	void PlayHitSound(const FVector& ImpactPoint);
	void SpawnHitParticles(const FVector& ImpactPoint);
	void DisableCapsule();
	virtual bool CanAttack();
	bool IsAlive();
	void DisableMeshCollision();

	/* Anim Montages */
	void PlayHitReactMontage(const FName& SectionName);
	virtual int32 PlayAttackMontage();
	virtual int32 PlayDeathMontage();
	virtual void PlayDogeMontage();
	void StopAttackMontage();

	UFUNCTION(BlueprintCallable)
		FVector GetTranslationWarpTarget();
	
	UFUNCTION(BlueprintCallable)
		FVector GetRotationWarpTarget();

	UFUNCTION(BlueprintCallable)
		virtual void AttackEnd();

	UFUNCTION(BlueprintCallable)
		virtual void DodgeEnd();

	UFUNCTION(BlueprintCallable)
		void SetWeaponCollisonEnabled(ECollisionEnabled::Type CollisionEnabled);

	UPROPERTY(VisibleAnywhere, Category = Weapon)
		TObjectPtr<AWeapon> EquippedWeapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		TObjectPtr<UAttributeComponent> Attributes;

	UPROPERTY(BlueprintReadOnly, Category = Combat)
		TObjectPtr<AActor> CombatTarget;

	UPROPERTY(BlueprintReadOnly, Category = Combat)
		double WarpTargetDistance = 75.f;

	UPROPERTY(BlueprintReadOnly)
		TEnumAsByte<EDeathPose> DeathPose;

private:
	void PlayMontageSection(UAnimMontage* Montage, const FName& SectionName);
	int32 PlayRandomMontageSection(UAnimMontage* Montage, const TArray<FName>& SectionNames);

	UPROPERTY(EditAnywhere, Category = Combat)
		TObjectPtr<USoundBase> HitSound;

	UPROPERTY(EditAnywhere, Category = Combat)
		TObjectPtr<UParticleSystem> HitParticles;

	UPROPERTY(EditDefaultsOnly, Category = Combat)
		TObjectPtr<UAnimMontage> AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = Combat)
		TObjectPtr<UAnimMontage> HitReactMontage;

	UPROPERTY(EditDefaultsOnly, Category = Combat)
		TObjectPtr<UAnimMontage> DeathMontage;

	UPROPERTY(EditDefaultsOnly, Category = Combat)
		TObjectPtr<UAnimMontage> DodgeMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
		TArray<FName> AttackMontageSections;

	UPROPERTY(EditAnywhere, Category = Combat)
		TArray<FName> DeathMontageSections;

public:
	FORCEINLINE TEnumAsByte<EDeathPose> GetDeathPose() const { return DeathPose; }
};
