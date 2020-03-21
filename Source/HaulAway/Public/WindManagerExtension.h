// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WindManagerExtension.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAULAWAY_API UWindManagerExtension : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWindManagerExtension();
	
	float SpeedMultiplier;
	
	UFUNCTION(BlueprintCallable)
		void AddPoint(FTransform Point);
	
	UFUNCTION(BlueprintCallable)
		void ClearPoints();
		
	UFUNCTION(BlueprintCallable)
		void SetSpeedMultiplier(float Speed);	
	
	UFUNCTION(BlueprintPure)
		FVector EvaluateWindAtPosition(FVector Position);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	TArray<FTransform> Points;
	
	float Min;
	float Nearest;
	int32 Index1;
	int32 Index2;
	
	float Dist1ToP;
	float Dist2ToP;
	
	void SetClosestTwoPoints(FVector Position);
};
