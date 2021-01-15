// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomGenerator.h"

// Sets default values for this component's properties
URoomGenerator::URoomGenerator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void URoomGenerator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URoomGenerator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URoomGenerator::Setup(FRoomInfo* room)
{
	PTRroomInfo = room;

	USceneComponent* root = GetOwner()->GetRootComponent();
	UStaticMesh* mesh;

	auto walls = PTRroomInfo->GetWalls();
	int count = 0;
	for (auto& wall : walls)
	{
		if (wall)
			mesh = SM_Door;
		else
			mesh = SM_Wall;

		switch (count)
		{
			case 0:
			{
				UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(root, TEXT("SM_Top"));
				MeshComponent->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
				MeshComponent->SetStaticMesh(mesh);
				MeshComponent->SetRelativeLocationAndRotation(FVector(0, -500, 0), UKismetMathLibrary::RotatorFromAxisAndAngle(FVector::UpVector, -90));
				MeshComponent->RegisterComponent();
				break;
			}
			case 1:
			{
				UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(root, TEXT("SM_Bottom"));
				MeshComponent->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
				MeshComponent->SetStaticMesh(mesh);
				MeshComponent->SetRelativeLocationAndRotation(FVector(0, 500, 0), UKismetMathLibrary::RotatorFromAxisAndAngle(FVector::UpVector, 90));
				MeshComponent->RegisterComponent();
				break;
			}
			case 2:
			{
				UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(root, TEXT("SM_Left"));
				MeshComponent->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
				MeshComponent->SetStaticMesh(mesh);
				MeshComponent->SetRelativeLocationAndRotation(FVector(-500, 0, 0), UKismetMathLibrary::RotatorFromAxisAndAngle(FVector::UpVector, 180));
				MeshComponent->RegisterComponent();
				break;
			}
			case 3:
			{
				UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(root, TEXT("SM_Right"));
				MeshComponent->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
				MeshComponent->SetStaticMesh(mesh);
				MeshComponent->SetRelativeLocationAndRotation(FVector(500, 0, 0), FRotator::ZeroRotator);
				MeshComponent->RegisterComponent();
				break;
			}
			default:
			{
				UE_LOG(LogTemp, Warning, TEXT("Error, with spawning walls for rooms"));
			}

		}
		++count;
	}

}

