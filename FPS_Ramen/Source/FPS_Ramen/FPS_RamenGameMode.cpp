// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_RamenGameMode.h"
#include "FPS_RamenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_RamenGameMode::AFPS_RamenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
