// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpleEnemyMechanicsGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEENEMYMECHANICS_API ASimpleEnemyMechanicsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void ActorDied(AActor* DeadActor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool bWonGame);

private: 
	class ATank* Tank;
	class ASimpleEnemyMechPlayerController* SimpleEnemyMechPlayerController;

	float StartDelay = 3.f;

	void HandleGameStart();

	int32 TargetTowers = 0;

	int32 GetTargetTowerCount() const;
};
