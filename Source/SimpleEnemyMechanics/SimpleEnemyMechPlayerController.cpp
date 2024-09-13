// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleEnemyMechPlayerController.h"
#include "GameFramework/Pawn.h"

void ASimpleEnemyMechPlayerController::SetPlayerEnabledState(bool bPlayerEnabled)
{
	if (bPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
	}
	else
	{
		GetPawn()->DisableInput(this);
	}
	bShowMouseCursor  = bPlayerEnabled;
}