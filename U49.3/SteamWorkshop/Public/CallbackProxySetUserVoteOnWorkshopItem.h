#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnSetUserVoteOnWorkshopItemDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxySetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxySetUserVoteOnWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySetUserVoteOnWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
    
};

