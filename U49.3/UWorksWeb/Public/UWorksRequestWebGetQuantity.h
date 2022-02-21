#pragma once
#include "CoreMinimal.h"
#include "GetQuantityMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetQuantityDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetQuantity.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetQuantity : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetQuantityDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetQuantityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetQuantity();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

