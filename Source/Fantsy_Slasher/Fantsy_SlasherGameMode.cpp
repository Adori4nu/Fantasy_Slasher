// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fantsy_SlasherGameMode.h"
#include "Fantsy_SlasherCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFantsy_SlasherGameMode::AFantsy_SlasherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
