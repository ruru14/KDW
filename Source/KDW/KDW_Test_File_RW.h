// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KDW_Test_File_RW.generated.h"

/**
 * 
 */
UCLASS()
class KDW_API UKDW_Text_File_RW : public UBlueprintFunctionLibrary
{
GENERATED_BODY() public:

	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
		static bool LoadTxt(FString FileName, FString& OutText);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
		static bool SaveTxt(FString InText, FString FileName);


};