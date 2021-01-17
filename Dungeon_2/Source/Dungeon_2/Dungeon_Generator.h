// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomInfo.h"
#include "Containers/Queue.h"
#include "Kismet/KismetMathLibrary.h"
#include "RoomGenerator.h"
#include "Dungeon_Generator.generated.h"

UCLASS()
class DUNGEON_2_API ADungeon_Generator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADungeon_Generator();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> ARoom;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FRoomInfo> Map;
	


	UPROPERTY(EditAnywhere)
		int32 MaxSize = 99;	//Basically a 10x10 grid

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 noRoomsToGenerate;	//Number of rooms for this maze

	UPROPERTY(BlueprintReadWrite)
		int32 roomsGenerated = 1;	//Value is 1 since started room is always generated

	UFUNCTION(BlueprintCallable)
		void GenerateDungeon();

	UFUNCTION(BlueprintCallable)
		void SpawnMap();

private:
	void SetupMap();
	void GetNeighbours(FRoomInfo* room, TArray<FRoomInfo*>& outNeighboursArray);
	void SetupRoomDoors(FRoomInfo* room, const TArray<FRoomInfo*>& neighboursArray);

	TQueue<FRoomInfo*> RoomQueue;

	TArray<FRoomInfo*> EndRooms;

};
