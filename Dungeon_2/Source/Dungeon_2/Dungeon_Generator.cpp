// Fill out your copyright notice in the Description page of Project Settings.


#include "Dungeon_Generator.h"

// Sets default values
ADungeon_Generator::ADungeon_Generator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADungeon_Generator::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ADungeon_Generator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADungeon_Generator::GenerateDungeon()
{
	do {
		bool BRestartLoop = false;
		roomsGenerated = 1;
		FRandomStream randomStream(FMath::Rand());
		randomStream.GenerateNewSeed();
		SetupMap();

		RoomQueue.Enqueue(&(Map[45]));
		Map[45].Occupy(); //Starting room should always be occupied
		FRoomInfo* currentRoom = nullptr;
		TArray<FRoomInfo*> neighboursArray;
		while (!RoomQueue.IsEmpty() && (!BRestartLoop))
		{
			RoomQueue.Dequeue(currentRoom);
			GetNeighbours(currentRoom, neighboursArray);
			int roomsAdded = 0;
			for (auto& room : neighboursArray)
			{
				if (room != nullptr)
				{
					if (!room->IsOccupied())
					{
						TArray<FRoomInfo*> temp;
						GetNeighbours(room, temp);
						int No_occupied = 0;
						for (auto& neighbour : temp)
						{
							if (neighbour != nullptr)
							{
								if (neighbour->IsOccupied())
								{
									++No_occupied;
								}
							}
						}
						if (No_occupied <= 1)
						{
							if (roomsGenerated < noRoomsToGenerate)
							{
								if (UKismetMathLibrary::RandomBoolWithWeightFromStream(0.5f, randomStream) || currentRoom->GetPos() == 45)	//50/50 chance to spawn the room or not
								{
									//Basically don't place rooms on the outer most rows or columns, prevents needing to handle edge cases.
									if (!(room->GetPos() % 10 == 0 || room->GetPos() % 10 == 9 || room->GetPos() / 10 == 0 || room->GetPos() / 10 == 9))
									{
										room->Occupy();
										RoomQueue.Enqueue(room);
										++roomsGenerated;
										++roomsAdded;
									}
								}
							}
						}
					}
				}
			}
			SetupRoomDoors(currentRoom, neighboursArray);
			if (roomsAdded == 0)	//Basically if no rooms were added from this room then save it as an end room.
			{
				EndRooms.Add(currentRoom);
			}
		}
	} while (roomsGenerated < noRoomsToGenerate);	//Basically if for some reason we don't have enough rooms, try again
}

void ADungeon_Generator::SetupMap()
{
	Map.Empty();
	for (int i = 0; i < MaxSize; ++i)
	{
		Map.Add(FRoomInfo(i));
	}
}

void ADungeon_Generator::GetNeighbours(FRoomInfo* room, TArray<FRoomInfo*>& outNeighboursArray)
{
	outNeighboursArray.Empty();
	int roomPos = room->GetPos();

	//neighbours are at (+10, -10, +1, -1)
	if (Map.IsValidIndex(roomPos - 10))		//Top
		outNeighboursArray.Add(&Map[roomPos - 10]);
	else
		outNeighboursArray.Add(nullptr);

	if (Map.IsValidIndex(roomPos + 10))		//Bottom
		outNeighboursArray.Add(&Map[roomPos + 10]);
	else
		outNeighboursArray.Add(nullptr);

	if (Map.IsValidIndex(roomPos - 1))		//Left
	{
		outNeighboursArray.Add(&Map[roomPos - 1]);		
	}
	else
		outNeighboursArray.Add(nullptr);

	if (Map.IsValidIndex(roomPos + 1))		//Right
	{
		outNeighboursArray.Add(&Map[roomPos + 1]);		
	}
	else
		outNeighboursArray.Add(nullptr);
}

void ADungeon_Generator::SetupRoomDoors(FRoomInfo* room, const TArray<FRoomInfo*>& neighboursArray)
{
	int RoomPos = room->GetPos();
	int RoomDiff = 0;
	for (auto& neighbour : neighboursArray)
	{
		room->AddWall(neighbour->IsOccupied());
		//Top, Bottom, Left, Right
		/*if (neighbour->IsOccupied())
		{
			RoomDiff = RoomPos - neighbour->GetPos();
			switch (RoomDiff)
			{
				case 10:
					room->AddDoor(EDirection::down);
					break;
				case -10:
					room->AddDoor(EDirection::top);
					break;
				case 1:
					room->AddDoor(EDirection::right);
					break;
				case -1:
					room->AddDoor(EDirection::left);
					break;
				default:
					UE_LOG(LogTemp, Error, TEXT("Error in assigning Doors"));
			}
		}*/
	}
}

void ADungeon_Generator::SpawnMap()
{
	for (auto& room : Map)
	{
		//TODO: Modify this to include door directions
		if (room.IsOccupied())
		{
			const FVector Location(((room.GetPos() % 10) * 1000) - 5000, ((room.GetPos() / 10) * 1000) - 4000, 0);
			const FRotator Rotation(0, 0, 0);
			FString name = "Room_" + FString::FromInt(room.GetPos());
			const TCHAR* nameChar = *name;
			AActor* actor = GetWorld()->SpawnActor<AActor>(ARoom, Location, Rotation);
			actor->Rename(nameChar);
			actor->FindComponentByClass<URoomGenerator>()->Setup(&room);
		}
	}

}
