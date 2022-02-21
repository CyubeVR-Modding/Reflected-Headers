#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnGetUserVoteOnWorkshopItemDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxyGetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxyGetUserVoteOnWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyGetUserVoteOnWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyGetUserVoteOnWorkshopItem* SteamWorkshop_GetUserVoteOnItem(const FSteamUGCItemId& ItemId);
    
};

