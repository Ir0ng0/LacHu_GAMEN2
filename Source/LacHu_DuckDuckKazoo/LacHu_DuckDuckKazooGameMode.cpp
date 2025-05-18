// Copyright Epic Games, Inc. All Rights Reserved.

#include "LacHu_DuckDuckKazooGameMode.h"
#include "LacHu_DuckDuckKazooCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALacHu_DuckDuckKazooGameMode::ALacHu_DuckDuckKazooGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
