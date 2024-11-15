// Copyright Epic Games, Inc. All Rights Reserved.

#include "NamelessSpiritGameMode.h"
#include "NamelessSpiritCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANamelessSpiritGameMode::ANamelessSpiritGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
