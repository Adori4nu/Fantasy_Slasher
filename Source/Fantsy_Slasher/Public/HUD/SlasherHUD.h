// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SlasherHUD.generated.h"

class USlasherOverlay;

/**
 * 
 */
UCLASS()
class FANTSY_SLASHER_API ASlasherHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditDefaultsOnly, Category = Slasher)
		TSubclassOf<USlasherOverlay> SlasherOverlayClass;

	UPROPERTY()
		TObjectPtr<USlasherOverlay> SlasherOverlay;
public:
	FORCEINLINE TObjectPtr<USlasherOverlay> GetSlashOverlay() const { return SlasherOverlay; }
};
