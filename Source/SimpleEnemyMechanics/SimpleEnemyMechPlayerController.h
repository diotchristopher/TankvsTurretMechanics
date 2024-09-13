// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SimpleEnemyMechPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEENEMYMECHANICS_API ASimpleEnemyMechPlayerController : public APlayerController
{
	GENERATED_BODY()

public: 
	void SetPlayerEnabledState(bool bPlayerEnabled);
	
};
