// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OceanFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class HAULAWAY_API UOceanFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/** C++ Version */
	UFUNCTION(BlueprintPure, Category = "Ocean", meta = (WorldContext = "WorldContextObject", DisplayName = "C++ Gerstner Wave"))
		static FVector GerstnerWave(const UObject* WorldContextObject, const FVector Position, const FVector2D Size, const float Zigzag, const float Angle, const float Time, const float AngleSpread, const float Random, const bool OnlyHeight);
	
	/** C++ Version */
	UFUNCTION(BlueprintPure, Category = "Ocean", meta = (WorldContext = "WorldContextObject", DisplayName = "C++ Gerstner Cluster"))
		static FVector GerstnerCluster(const UObject* WorldContextObject, const FVector Position, const float Time, const float Angle);
	
	static float ComputeGerstnerAxis(const float x, const float y, const float Zigzag);
	
	static FVector RotateVector(const FVector v, const float Angle);
	
	static float Cosd(const float Angle);
	
	static float Sind(const float Angle);
};
