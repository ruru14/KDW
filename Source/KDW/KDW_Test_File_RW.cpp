// Fill out your copyright notice in the Description page of Project Settings.


#include "KDW_Test_File_RW.h"

bool UKDW_Text_File_RW::LoadTxt(FString FileName, FString& OutText)
{
    return FFileHelper::LoadFileToString(OutText, *(FPaths::ProjectContentDir() + "Levels/" + FileName));
}

bool UKDW_Text_File_RW::SaveTxt(FString InText, FString FileName)
{
    return FFileHelper::SaveStringToFile(InText, *(FPaths::ProjectContentDir() + "Levels/" + FileName));
}