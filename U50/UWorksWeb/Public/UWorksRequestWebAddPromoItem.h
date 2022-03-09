#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
#include "UWorksRequestWeb.h"
#include "AddPromoItemMinimalDelegateDelegate.h"
#include "AddPromoItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebAddPromoItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddPromoItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddPromoItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAddPromoItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

