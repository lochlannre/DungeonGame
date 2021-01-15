// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dungeon_2GameModeBase.h"
#include "DungeonCharacter.h"
#include "DungeonGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEON_2_API ADungeonGameMode : public ADungeon_2GameModeBase
{
	GENERATED_BODY()

public:

	ADungeonGameMode();
	void EndGame();
	void LevelComplete();
	void LoadNextLevel();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setup")
		TSubclassOf<ADungeonCharacter> DefaultLevelCharacter;



private:
	void BeginPlay();

	APlayerController* Controller;
};
