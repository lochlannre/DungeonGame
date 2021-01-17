// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonGameMode.h"

ADungeonGameMode::ADungeonGameMode()
{


}

void ADungeonGameMode::BeginPlay()
{
	Super::BeginPlay();

	Controller = GetWorld()->GetFirstPlayerController();	//Get player controller with index 0

	FInputModeGameOnly InputMode;
	Controller->SetInputMode(InputMode);	//Ensure that once we move off the menu we move get a game controller?
	Controller->bShowMouseCursor = false;	//hide the mouse cursor

	DefaultPawnClass = ADungeonCharacter::StaticClass();
}

void ADungeonGameMode::EndGame()
{

}

void ADungeonGameMode::LevelComplete()
{

}

void ADungeonGameMode::LoadNextLevel()
{

}
