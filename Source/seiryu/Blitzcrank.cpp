// Fill out your copyright notice in the Description page of Project Settings.


#include "Blitzcrank.h"

// Sets default values
ABlitzcrank::ABlitzcrank()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//RotateSpeed = 30.0f;
}

// Called when the game starts or when spawned
void ABlitzcrank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlitzcrank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//FVector vec = GetActorLocation() += FVector(1, 0, 0);
	//SetActorLocation(vec);
}

 