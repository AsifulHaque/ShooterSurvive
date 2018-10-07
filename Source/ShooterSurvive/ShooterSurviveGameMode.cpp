// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShooterSurviveGameMode.h"
#include "ShooterSurviveHUD.h"
#include "ShooterSurviveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterSurviveGameMode::AShooterSurviveGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterSurviveHUD::StaticClass();
}
