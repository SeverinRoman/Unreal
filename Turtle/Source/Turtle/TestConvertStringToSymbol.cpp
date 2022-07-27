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

	ShowResult();
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

FString ATestConvertStringToSymbol::SymbolCount(FString text)
{
	FString result;
	int32 count = 0;

	for (int32 j = 0; j != text.Len(); j++)
	{

		for (int32 k = 0; k != text.Len(); k++)
		{
			if (text[j] == text[k])
			{
				count++;
			}

		}

		result += WriteResult(count);

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt(count));

		count = 0;
	}


	return result;
}


FString ATestConvertStringToSymbol::WriteResult(int32 count)
{
	FString result;

	if (count >= 2)
	{
		result += replacementIfTwo;
	}
	else
	{
		result += replacementIfOne;
	}
	return result;
}



void ATestConvertStringToSymbol::ShowResult()
{
	for (int32 i = 0; i != strings.Num(); i++)
	{
		strings[i] = strings[i].ToLower();

		FString result = SymbolCount(strings[i]);

		ShowDebug(result);
		ShowDebug(strings[i]);
	}
}

