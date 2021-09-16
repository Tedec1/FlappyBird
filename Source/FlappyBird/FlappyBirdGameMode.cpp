// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlappyBirdGameMode.h"
#include "FlappyBirdCharacter.h"

AFlappyBirdGameMode::AFlappyBirdGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AFlappyBirdCharacter::StaticClass();	
}
