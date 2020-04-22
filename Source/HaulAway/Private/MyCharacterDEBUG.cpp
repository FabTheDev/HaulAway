// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacterDEBUG.h"


// Sets default values
AMyCharacterDEBUG::AMyCharacterDEBUG()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterDEBUG::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterDEBUG::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterDEBUG::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

