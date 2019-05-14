// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SneakyBeakyLike.h"
#include "SneakyBeakyLikeGameMode.h"
#include "SneakyBeakyLikeHUD.h"
#include "SneakyBeakyLikeCharacter.h"

ASneakyBeakyLikeGameMode::ASneakyBeakyLikeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASneakyBeakyLikeHUD::StaticClass();
}
