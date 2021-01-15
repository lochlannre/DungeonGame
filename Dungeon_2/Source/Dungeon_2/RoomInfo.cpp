// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomInfo.h"

FRoomInfo::FRoomInfo()
{

}

FRoomInfo::FRoomInfo(int32 Pos)
{
	this->Pos = Pos;
}

int FRoomInfo::GetPos() const
{
	return Pos;
}
bool FRoomInfo::IsOccupied() const
{
	return BIsOccupied;
}

void FRoomInfo::Occupy()
{
	BIsOccupied = true;
}


/// <summary>
/// 
/// </summary>
/// <returns>Boolean array of walls and doors in order of (Top, Bottom, Left, Right)</returns>
const TArray<bool>& FRoomInfo::GetWalls() const
{
	return Walls;
}

void FRoomInfo::AddWall(bool newWall)
{
	Walls.Add(newWall);
}


