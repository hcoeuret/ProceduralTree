// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "LSystemManager.h"
#include "MainTree.generated.h"

UCLASS()
class TREE_API AMainTree : public AActor
{
	GENERATED_BODY()

private:
	LSystemManager * Lmanager;
	
public:	
	// Sets default values for this actor's properties
	AMainTree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DisplayTree();

	// Static Mesh for the branch (cylinder)
    UPROPERTY(EditAnywhere)
    UStaticMesh* BranchMesh;

	UPROPERTY(VisibleAnywhere)
	TArray<UStaticMeshComponent *> BranchArray;

	UPROPERTY(EditAnywhere, Category="custom")
	int32 iterations;

	UPROPERTY(VisibleAnywhere, Category="custom")
	TArray<FString> stringCode_;
	
};

