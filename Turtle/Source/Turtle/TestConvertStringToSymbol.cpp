// Fill out your copyright notice in the Description page of Project Settings.


#include "TestConvertStringToSymbol.h"
#include <algorithm>


// Sets default values
ATestConvertStringToSymbol::ATestConvertStringToSymbol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestConvertStringToSymbol::BeginPlay()
{
	Super::BeginPlay();

	ShowArray();
}

// Called every frame
void ATestConvertStringToSymbol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestConvertStringToSymbol::ShowArray()
{
	for (int32 i = 0; i != strings.Num(); ++i)
	{
		strings[i] = strings[i].ToLower();
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, strings[i]);
	}
}

