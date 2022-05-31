#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetSteamLevelDelegateDelegate.h"
#include "GetSteamLevelMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetSteamLevel.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSteamLevelDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSteamLevelMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSteamLevel();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

