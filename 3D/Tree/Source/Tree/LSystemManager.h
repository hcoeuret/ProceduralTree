// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TREE_API LSystemManager
{

public:
	void computeLeafStep(TArray<FString>& inputArray);
	LSystemManager();
	~LSystemManager();
};
