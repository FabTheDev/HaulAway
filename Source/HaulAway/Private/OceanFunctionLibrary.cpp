// Fill out your copyright notice in the Description page of Project Settings.

#include "OceanFunctionLibrary.h"
#include "Math/UnrealMathUtility.h"

FVector UOceanFunctionLibrary::GerstnerWave(const UObject* WorldContextObject, const FVector Position, const FVector2D Size, const float Zigzag, const float Angle, const float Time, const float AngleSpread, const float Random, const bool OnlyHeight)
{
	static FVector Direction;
	
	Direction = (Position + FVector(Cosd(AngleSpread * Random + Angle), - Sind(AngleSpread * Random + Angle), 0.0f) * Time).RotateAngleAxis(AngleSpread * Random + Angle, FVector::UpVector) / FVector(Size.X,Size.Y,1.0f);
	
	return OnlyHeight ? 
		FVector(0.0f, 0.0f, ComputeGerstnerAxis(Direction.X, Direction.Y, Zigzag / Size.X))
		:
		FVector(
			ComputeGerstnerAxis(Direction.X + 0.25f, 	Direction.Y, Zigzag / Size.X),
			ComputeGerstnerAxis(Direction.X + 0.25f, 	Direction.Y, Zigzag / Size.X),
			ComputeGerstnerAxis(Direction.X, 			Direction.Y, Zigzag / Size.X)
		);
}

FVector UOceanFunctionLibrary::GerstnerCluster(const UObject* WorldContextObject, const FVector Position, const float Time, const float Angle)
{
	return
		GerstnerWave(WorldContextObject, Position, FVector2D(1000,1000), 500, Angle, Time * 1.27f, 35, 0.25f, false) + 
		GerstnerWave(WorldContextObject, Position, FVector2D(1104,3947), 1000, Angle, Time * 1.57f, 35, -0.1f, false) + 
		GerstnerWave(WorldContextObject, Position, FVector2D(1000,1000), 100, Angle, Time * 2.0f, 35, 0.42f, false) +
		GerstnerWave(WorldContextObject, Position, FVector2D(1104,1947), 100, Angle, Time * 1.31f, 35, -0.7f, false) + 
		GerstnerWave(WorldContextObject, Position, FVector2D(975,1264), 100, Angle, Time * 0.94f, 35, 0.99f, false) * 0.6f + 
		GerstnerWave(WorldContextObject, Position, FVector2D(842,967), 100, Angle, Time * 2.13f, 35, -0.01f, false) * 0.6f + 
		GerstnerWave(WorldContextObject, Position, FVector2D(432,675), 100, Angle, Time * 0.85f, 35, 2.0f, false) * 0.3f + 
		GerstnerWave(WorldContextObject, Position, FVector2D(324,546), 100, Angle, Time * 2.61f, 35, -0.5f, false) * 0.3f;
}

float UOceanFunctionLibrary::ComputeGerstnerAxis(const float x, const float y, const float Zigzag)
{
	return Cosd(360.0f * (x + Zigzag * Cosd(y * 360.0f)));
}

///////////////////
FVector UOceanFunctionLibrary::RotateVector(const FVector v, const float Angle)
{
	return FVector(Cosd(Angle) * v.X - Sind(Angle) * v.Y, Cosd(Angle) * v.Y + Sind(Angle) * v.X, 0.0f);
}
///////////////////

float UOceanFunctionLibrary::Cosd(const float Angle)
{
	return FMath::Cos(FMath::DegreesToRadians(Angle));
}
	
float UOceanFunctionLibrary::Sind(const float Angle)
{
	return FMath::Sin(FMath::DegreesToRadians(Angle));
}
