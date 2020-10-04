// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutoGameMode.h"
#include "TutoHUD.h"
#include "TutoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutoGameMode::ATutoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATutoHUD::StaticClass();
}
