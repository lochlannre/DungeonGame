// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#define IDLE EnemyState::Idle
#define CHASE EnemyState::Chase
#define WANDER EnemyState::Wander
#define ATTACK EnemyState::Attack
#define DEAD EnemyState::Dead


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy_Base.generated.h"

UCLASS()
class DUNGEON_2_API AEnemy_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void Idle();
	void Chase();
	void Attack();
	void Dead();
	void Wander();

	enum EnemyState EState;

	UPROPERTY(EditAnywhere)
		int maxHealth;

};


enum EnemyState
{
	Idle, Wander, Chase, Attack, Dead
};