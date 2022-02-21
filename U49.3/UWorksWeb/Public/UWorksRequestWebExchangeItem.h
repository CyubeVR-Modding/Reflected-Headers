#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ExchangeItemDelegateDelegate.h"
#include "ExchangeItemMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemInstanceID -FallbackName=UWorksSteamItemInstanceID
#include "UWorksRequestWebExchangeItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebExchangeItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FExchangeItemDelegate OnRequestCompleted;
    
    UPROPERTY()
    FExchangeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebExchangeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

