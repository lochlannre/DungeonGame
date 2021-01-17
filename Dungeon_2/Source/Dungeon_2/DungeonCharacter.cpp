// Fill out your copyright notice in the Description page of Project Settings.

#include "DungeonCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADungeonCharacter::ADungeonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	HorizontalValue = VerticalValue = 0;
	Direction = FVector::RightVector;
	LookAtVector = GetActorLocation() + Direction;
}

// Called when the game starts or when spawned
void ADungeonCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADungeonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HorizontalPressed || VerticalPressed)
	{
		if (HorizontalPressed && !VerticalPressed)
		{
			VerticalValue = 0;
		}
		if (VerticalPressed && !HorizontalPressed)
		{
			HorizontalValue = 0;
		}
		Direction = (FVector::ForwardVector * HorizontalValue) + (-FVector::RightVector * VerticalValue);
		
	}

	//This needs to be done every tick, if it gets moved up into the if statement above the rotation gets reset when no inputs are pressed?
	LookAtVector = GetActorLocation() + Direction;
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LookAtVector));
}

// Called to bind functionality to input
void ADungeonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &ADungeonCharacter::HorizontalMove);
	InputComponent->BindAxis("Vertical", this, &ADungeonCharacter::VerticalMove);
	InputComponent->BindAction("Attack",IE_Pressed, this, &ADungeonCharacter::Attack);
}

void ADungeonCharacter::HorizontalMove(float value)
{
	if (value)
	{
		AddMovementInput(FVector::ForwardVector, value);
		HorizontalValue = value;
		HorizontalPressed = true;
	}
	else
	{
		HorizontalPressed = false;
	}
}

void ADungeonCharacter::VerticalMove(float value)
{
	if (value)
	{
		AddMovementInput(-FVector::RightVector, value);
		VerticalValue = value;
		VerticalPressed = true;
	}
	else
	{
		VerticalPressed = false;
	}
}

void ADungeonCharacter::Attack()
{

	//Swing on Attack Pressed

	//Don't swing again until Attack has been released (Also have some sort of attack speed limiting it as well).

}
