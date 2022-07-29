// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestConvertStringToSymbol.generated.h"


UCLASS()
class TURTLE_API ATestConvertStringToSymbol : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestConvertStringToSymbol();

	UPROPERTY(EditAnywhere)
	TArray<FString> strings;

	UPROPERTY(EditAnywhere)
	FString replacementIfOne;

	UPROPERTY(EditAnywhere)
	FString replacementIfTwo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void ShowResult();

	UFUNCTION()
	void ShowDebug(FString showString, FColor color);

	UFUNCTION()
	FString SymbolCount(FString text);

	UFUNCTION()
	FString WriteResult(int32 count);
};
