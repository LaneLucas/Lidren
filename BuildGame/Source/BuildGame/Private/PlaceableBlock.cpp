// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceableBlock.h"

#include "UObject/ConstructorHelpers.h"


APlaceableBlock::APlaceableBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	m_mesh_component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> m_mesh(TEXT("StaticMesh'/BuildGame/Content/Geometry/Meshes/foundation.uasset'"));
// 	m_mesh->SetMaterial(0, m_material);
// 	m_mesh_component->SetStaticMesh(m_mesh);
// 	m_mesh_component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	FString StringExample = TEXT("Empty constructor");
	UE_LOG(LogTemp, Warning, TEXT("Output: %s"), *StringExample);
}

// Sets default values
APlaceableBlock::APlaceableBlock(UStaticMesh* mesh, UMaterial* material): m_mesh(mesh), m_material(material)//, m_mesh_component()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_mesh_component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	m_mesh->SetMaterial(0, m_material);
	m_mesh_component->SetStaticMesh(m_mesh);
	m_mesh_component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	FString StringExample = TEXT("modded constructor");
	UE_LOG(LogTemp, Warning, TEXT("Output: %s"), *StringExample);
}

// Called when the game starts or when spawned
void APlaceableBlock::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlaceableBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlaceableBlock::Placed()
{

}

