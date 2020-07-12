// Fill out your copyright notice in the Description page of Project Settings.


#include "HaulAwayBlueprintFunctionLibrary.h"




void UHaulAwayBlueprintFunctionLibrary::Editor_MoveActorToOutlinerFolder(AActor* Target, const FName & NewFolderPath)
{
	if (Target != nullptr)
	{
		#if WITH_EDITOR
		Target->SetFolderPath(NewFolderPath);
		#endif
	}
	
}

bool UHaulAwayBlueprintFunctionLibrary::IsEditorMode()
{
	#if WITH_EDITOR
	return true;
	#endif
	return false;
}
