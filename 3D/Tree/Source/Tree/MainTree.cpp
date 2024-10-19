// Fill out your copyright notice in the Description page of Project Settings.

#include "MainTree.h"

// Sets default values
AMainTree::AMainTree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize Tree axiom
	stringCode_ = {"X"};

	//Initialize the number of iterations
	iterations = 4;

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

	
	for(int i =0; i<iterations; i++){
		Lmanager->computeLeafStep(stringCode_);
	}

	//create the branches
	UStaticMeshComponent* Branch1 = NewObject<UStaticMeshComponent>(this);
	UStaticMeshComponent* Branch2 = NewObject<UStaticMeshComponent>(this);

	//register and attach to tree
	Branch1->RegisterComponent();  // Required to properly create and attach it to the actor
	Branch1->SetStaticMesh(BranchMesh);
	Branch1->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Branch2->RegisterComponent();  // Required to properly create and attach it to the actor
	Branch2->SetStaticMesh(BranchMesh);
	Branch2->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//set position
	Branch1->SetRelativeLocation(FVector(0,0,50));
	Branch1->SetRelativeRotation(FRotator(0,90,90));
	Branch1->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f)); // Sets the world scale of the mesh component
	
	FRotator rotationAngle(0,0,0);
	FVector direction = rotationAngle.Vector();
	float length = 100.f;
	FVector nextLocation = direction * length + Branch1->GetRelativeLocation();
	Branch2->SetRelativeLocation(nextLocation);
	Branch2->SetRelativeRotation(FRotator(0,90,90));

}

// Called every frame
void AMainTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainTree::DisplayTree()
{
	/*
	FVector currentVector(0,0,0);
	FVector nextVector(0,0,0);
	FRotator rotationAngle(0,0,0);
	FVector direction = rotationAngle.Vector();
	float length = 100;
	
 	for (FString element : stringCode_) {
        switch (element)
        {
        case 'F':
            xNext = xCur - lineLength * cos(angle_radian);
            yNext = yCur - lineLength * sin(angle_radian);
            break;
        case '+':
            angle_degre += angle_increment;
            angle_radian = angle_degre * M_PI / 180.0;
            break;
        case '-':
            angle_degre -= angle_increment;
            angle_radian = angle_degre * M_PI / 180.0;
            break;
        case '[':
            saveStack.push({xCur, yCur, angle_degre});
            break;
        case ']':
            xCur = std::get<0>(saveStack.top());
            xNext = std::get<0>(saveStack.top());
            yCur = std::get<1>(saveStack.top());
            yNext = std::get<1>(saveStack.top());
            angle_degre = std::get<2>(saveStack.top());
            saveStack.pop();
            break;
        default:
            break;
        }


	for(FString element : stringCode_){

	}
	*/
}
