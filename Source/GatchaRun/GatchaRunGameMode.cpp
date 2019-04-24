// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GatchaRunGameMode.h"
#include "GatchaRunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGatchaRunGameMode::AGatchaRunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
