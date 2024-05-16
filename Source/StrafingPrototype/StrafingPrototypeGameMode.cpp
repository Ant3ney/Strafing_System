// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrafingPrototypeGameMode.h"
#include "StrafingPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrafingPrototypeGameMode::AStrafingPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
