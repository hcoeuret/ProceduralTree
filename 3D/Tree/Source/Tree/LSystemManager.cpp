// Fill out your copyright notice in the Description page of Project Settings.


#include "LSystemManager.h"

LSystemManager::LSystemManager()
{
}

/*
F--> FF
X-- > F - [[X]+ X] + F[+FX] - X
F-[[X]+X]+F[+FX]-X
*/
void LSystemManager::computeLeafStep(TArray<FString>& inputArray){
	TArray<FString> nextStringCode;
	for (FString element : inputArray) {
		if (element == "F") {
			nextStringCode.Append({"F","F"});
		}
		else if (element == "X") {
			nextStringCode.Append({ "F","-","[","[","X","]", "+", "X", "]", "+", "F", "[", "+", "F", "X", "]", "-", "X"});
		}
		else {
			nextStringCode.Append({element});
		}
	}
	inputArray = nextStringCode;
}

LSystemManager::~LSystemManager()
{
}
