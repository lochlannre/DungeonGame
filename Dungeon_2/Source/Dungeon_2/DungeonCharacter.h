// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "GameFramework/Character.h"
#include "DungeonCharacter.generated.h"

UCLASS()
class DUNGEON_2_API ADungeonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADungeonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	void HorizontalMove(float value);
	void VerticalMove(float value);

	FVector Direction;
	FVector LookAtVector;
	float HorizontalValue;
	float VerticalValue;
	bool HorizontalPressed;
	bool VerticalPressed;
	void Attack();
};
