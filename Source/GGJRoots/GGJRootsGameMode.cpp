// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJRootsGameMode.h"
#include "GGJRootsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJRootsGameMode::AGGJRootsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
