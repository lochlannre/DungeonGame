// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct DUNGEON_2_API FRoomInfo
{
	GENERATED_BODY()

public:
	FRoomInfo();
	FRoomInfo(int32 Pos);

	void Occupy();
	bool IsOccupied() const;
	int GetPos() const;
	const TArray<bool>& GetWalls() const;
	void AddWall(bool newWall);

private:
	int32 Pos;
	bool BIsOccupied = false;
	TArray<bool> Walls;	//True = Door, False = Wall
};
