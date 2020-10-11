// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSGameModeBase.h"

void AFPSGameModeBase::StartPlay()
{
    Super::StartPlay();
    
    if(GEngine)
    {
        // 5초
        // "키" 값을 -1로 하면
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World"));
    }
}
