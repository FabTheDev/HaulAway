// Fill out your copyright notice in the Description page of Project Settings.

#include "WindManagerExtension.h"
#include "Math/UnrealMathUtility.h"


// Sets default values for this component's properties
UWindManagerExtension::UWindManagerExtension()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SpeedMultiplier = 1.0f;

	// ...
}


// Called when the game starts
void UWindManagerExtension::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWindManagerExtension::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWindManagerExtension::AddPoint(FTransform Point)
{
	Points.Add(Point);
}

void UWindManagerExtension::ClearPoints()
{
	Points.Empty();
}

void UWindManagerExtension::SetSpeedMultiplier(float Speed)
{
	SpeedMultiplier = Speed;
}

void UWindManagerExtension::SetClosestTwoPoints(FVector Position)
{
	Min = 0;
	for(int32 i=0; i<2; i++)
	{
		Nearest = 9999999999.0f;
		for(int32 j=0; j<Points.Num(); j++)
		{
			if(FVector::DistSquaredXY(Points[j].GetLocation(), Position) < Nearest && 
				FVector::DistSquaredXY(Points[j].GetLocation(), Position) > Min
			){
				Nearest = FVector::DistSquaredXY(Points[j].GetLocation(), Position);
				if(i == 0)
					Index1 = j;
				else
					Index2 = j;
			}
		}
		Min = FVector::DistSquaredXY(Points[i == 0 ? Index1 : Index2].GetLocation(), Position);
	}
}

FVector UWindManagerExtension::EvaluateWindAtPosition(FVector Position)
{
	if(Points.Num() == 0)
		return FVector(1,0,0);
	else
	{
		SetClosestTwoPoints(Position);
		
		Dist1ToP = FVector::Dist2D(Points[Index1].GetLocation(), Position);
		Dist2ToP = FVector::Dist2D(Points[Index2].GetLocation(), Position);
		
		return (
			(FVector::Dist2D(Points[Index1].GetLocation(), Points[Index2].GetLocation()) < FMath::Max(Dist1ToP ,Dist2ToP)
			? 
			Points[Index1].GetScale3D()
			: 
			FMath::Lerp(Points[Index1].GetScale3D(),Points[Index2].GetScale3D(),Dist1ToP / (Dist1ToP + Dist2ToP))
		) * SpeedMultiplier).GetClampedToSize(1,2);
	}
}

