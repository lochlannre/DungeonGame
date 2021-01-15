// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RoomInfo.h"
#include "Components/StaticMeshComponent.h "
#include "Kismet/KismetMathLibrary.h"
#include "RoomGenerator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEON_2_API URoomGenerator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URoomGenerator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	UPROPERTY(EditAnywhere)
		UStaticMesh* SM_Wall;
	UPROPERTY(EditAnywhere)
		UStaticMesh* SM_Door;

	void Setup(FRoomInfo* room);

private:

	const FRoomInfo* PTRroomInfo;
};
