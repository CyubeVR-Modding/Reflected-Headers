#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetBanStatusDelegateDelegate.h"
#include "SetBanStatusMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebSetBanStatus.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetBanStatusDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetBanStatusMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetBanStatus();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

