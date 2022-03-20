// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PlaceableBlockInterface.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"

#include "PlaceableBlock.generated.h"

UCLASS()
class BUILDGAME_API APlaceableBlock : public AActor, public IPlaceableBlockInterface
{
	GENERATED_BODY()
	

public:	
	APlaceableBlock();

	// Sets default values for this actor's properties
	APlaceableBlock(UStaticMesh* mesh, UMaterial* material); 
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Placed() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMesh* m_mesh;

	UPROPERTY(EditAnywhere)
	UMaterial* m_material;
	UStaticMeshComponent* m_mesh_component;

};
