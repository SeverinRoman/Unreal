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

void ATestConvertStringToSymbol::ShowDebug(FString showString)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, showString);
}

int32 ATestConvertStringToSymbol::SymbolCount(FString text)
{
	int32 count = 0;
	return count;
}

void ATestConvertStringToSymbol::ShowArray()
{
	for (int32 i = 0; i != strings.Num(); i++)
	{
		strings[i] = strings[i].ToLower();

		FString result = "";
		int32 count = 0;

		for (int32 j = 0; j != strings[i].Len(); j++)
		{

			for (int32 k = 0; k != strings[i].Len(); k++)
			{
				if (strings[i][j] == strings[i][k])
				{
					count++;
				}

			}

			if (count >= 2)
			{
				result += replacementIfTwo;
			}
			else
			{
				result += replacementIfOne;
			}

			count = 0;
		}

		ShowDebug(result);
		ShowDebug(strings[i]);
	}
}

