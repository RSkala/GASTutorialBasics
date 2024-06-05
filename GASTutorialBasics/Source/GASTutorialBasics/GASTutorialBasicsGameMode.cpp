// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASTutorialBasicsGameMode.h"
#include "GASTutorialBasicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASTutorialBasicsGameMode::AGASTutorialBasicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
