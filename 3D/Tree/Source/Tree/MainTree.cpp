// Fill out your copyright notice in the Description page of Project Settings.


#include "MainTree.h"

// Sets default values
AMainTree::AMainTree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//load the branch mesh as cylinder for now
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe"));
    if (CylinderMesh.Succeeded())
    {
        BranchMesh = CylinderMesh.Object;
		UE_LOG(LogTemp, Warning, TEXT("Not found"));  // Warning message
    }
	UE_LOG(LogTemp, Log, TEXT("Not found"));

}

// Called when the game starts or when spawned
void AMainTree::BeginPlay()
{
	Super::BeginPlay();

	
	UStaticMeshComponent* NewBranch = NewObject<UStaticMeshComponent>(this);
	NewBranch->RegisterComponent();  // Required to properly create and attach it to the actor
	NewBranch->SetStaticMesh(BranchMesh);
	NewBranch->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	NewBranch->SetRelativeLocation(FVector(0,0,0));
	NewBranch->SetRelativeRotation(FRotator(0,0,0));
	NewBranch->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));            // Sets the world scale of the mesh component



}

// Called every frame
void AMainTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

