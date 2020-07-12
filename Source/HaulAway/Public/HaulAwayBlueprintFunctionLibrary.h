// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "HaulAwayBlueprintFunctionLibrary.generated.h"
#include "Engine/World.h"


/**
 * 
 */

UCLASS()
class HAULAWAY_API UHaulAwayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Actor| Editor")
	static void Editor_MoveActorToOutlinerFolder(AActor* Target, const FName& NewFolderPath);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Actor| Editor")
		static bool IsEditorMode();
};
