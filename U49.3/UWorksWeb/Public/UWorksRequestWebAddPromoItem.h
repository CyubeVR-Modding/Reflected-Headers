#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "AddPromoItemMinimalDelegateDelegate.h"
#include "AddPromoItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
#include "UWorksRequestWebAddPromoItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAddPromoItemDelegate OnRequestCompleted;
    
    UPROPERTY()
    FAddPromoItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAddPromoItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

