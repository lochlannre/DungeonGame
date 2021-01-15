// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Base.h"

// Sets default values
AEnemy_Base::AEnemy_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EState = IDLE;
}

// Called when the game starts or when spawned
void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (EState)
	{
	case EnemyState::Idle:
		Idle();
		break;
	case EnemyState::Attack:
		Attack();
		break;
	case EnemyState::Chase:
		Chase();
		break;
	case EnemyState::Wander:
		Wander();
		break;
	}

}

// Called to bind functionality to input
void AEnemy_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy_Base::Idle()
{
}

void AEnemy_Base::Chase()
{
}

void AEnemy_Base::Attack()
{
}

void AEnemy_Base::Dead()
{
}

void AEnemy_Base::Wander()
{
}

