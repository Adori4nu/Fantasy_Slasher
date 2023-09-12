// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SlasherOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void USlasherOverlay::SetHealthBarPercent(float Percent)
{
	if (HealthBar) HealthBar->SetPercent(Percent);
}

void USlasherOverlay::SetStaminaBarPercent(float Percent)
{
	if (StaminaBar) StaminaBar->SetPercent(Percent);
}

void USlasherOverlay::SetGold(int32 Gold)
{
	if (GoldText)
	{
		const FString String = FString::Printf(TEXT("%d"), Gold);
		const FText Text = FText::FromString(String);
		GoldText->SetText(Text);
	}
}

void USlasherOverlay::SetSouls(int32 Souls)
{
	if (GoldText)
	{
		const FString String = FString::Printf(TEXT("%d"), Souls);
		const FText Text = FText::FromString(String);
		SoulsText->SetText(Text);
	}
}
