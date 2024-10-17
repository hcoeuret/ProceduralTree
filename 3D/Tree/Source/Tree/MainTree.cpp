// Fill out your copyright notice in the Description page of Project Settings.


#include "MainTree.h"
#include "ProceduralTreeMeshComponent.h"

// Sets default values
AMainTree::AMainTree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TreeMesh = CreateDefaultSubobject<UProceduralTreeMeshComponent>(TEXT("TreeMesh"));
	RootComponent = TreeMesh;

}

// Called when the game starts or when spawned
void AMainTree::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

