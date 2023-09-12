// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlasherOverlay.generated.h"

class UProgressBar;
class UTextBlock;

/**
 * 
 */
UCLASS()
class FANTSY_SLASHER_API USlasherOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetHealthBarPercent(float Percent);
	void SetStaminaBarPercent(float Percent);
	void SetGold(int32 Gold);
	void SetSouls(int32 Souls);

private:
	UPROPERTY(meta = (BindWidget))
		TObjectPtr<UProgressBar> HealthBar;

	UPROPERTY(meta = (BindWidget))
		TObjectPtr<UProgressBar> StaminaBar;

	UPROPERTY(meta = (BindWidget))
		TObjectPtr<UTextBlock> GoldText;

	UPROPERTY(meta = (BindWidget))
		TObjectPtr<UTextBlock> SoulsText;
};
