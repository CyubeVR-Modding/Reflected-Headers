#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetSteamLevelDelegateDelegate.h"
#include "GetSteamLevelMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetSteamLevel.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetSteamLevelDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetSteamLevelMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSteamLevel();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

