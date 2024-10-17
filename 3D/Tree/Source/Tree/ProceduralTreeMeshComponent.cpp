// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTreeMeshComponent.h"


// Called when the game starts or when spawned
void UProceduralTreeMeshComponent::BeginPlay()
{
	Super::BeginPlay();

    TArray<FVector> vertices;
    vertices.Add(FVector(0,0,0));
    vertices.Add(FVector(0,100,0));
    vertices.Add(FVector(0,0,100));

    TArray<int32> triangles;
    triangles.Add(0);
    triangles.Add(1);
    triangles.Add(2);

    TArray<FVector> normals;
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));

	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));
	
	TArray<FProcMeshTangent> tangents;
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	TArray<FLinearColor> vertexColors;
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

	CreateMeshSection_LinearColor(0, vertices, triangles, normals, UV0, vertexColors, tangents, true);

}
