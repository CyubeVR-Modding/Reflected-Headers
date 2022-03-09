#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AddPromoItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "AddPromoItemNode.generated.h"

class UAddPromoItemNode;

UCLASS()
class UWORKSWEB_API UAddPromoItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddPromoItemDelegate Completed;
    
    UAddPromoItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAddPromoItemNode* AddPromoItemNode(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
};

