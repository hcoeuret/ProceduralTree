// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralTreeMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class TREE_API UProceduralTreeMeshComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
