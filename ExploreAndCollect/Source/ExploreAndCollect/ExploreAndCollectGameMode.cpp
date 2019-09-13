// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ExploreAndCollectGameMode.h"
#include "ExploreAndCollectHUD.h"
#include "ExploreAndCollectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExploreAndCollectGameMode::AExploreAndCollectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AExploreAndCollectHUD::StaticClass();
}
