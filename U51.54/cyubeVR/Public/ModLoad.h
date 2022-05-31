#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ModLoad.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AModLoad : public AActor {
    GENERATED_BODY()
public:
    AModLoad();
    UFUNCTION(BlueprintCallable)
    static void GetModFilePaths(TArray<FString>& PathsOut, TArray<FString>& ModNamesOut);
    
};

