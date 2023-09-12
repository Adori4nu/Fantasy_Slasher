// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SlasherHUD.h"
#include "HUD/SlasherOverlay.h"

void ASlasherHUD::BeginPlay()
{
	Super::BeginPlay();

	if (UWorld* World = GetWorld(); World)
	{
		if (APlayerController* Controller = World->GetFirstPlayerController();
			Controller && SlasherOverlayClass)
		{
			SlasherOverlay = CreateWidget<USlasherOverlay>(Controller, SlasherOverlayClass);
			SlasherOverlay->AddToViewport();
		}
	}
}
