#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnSetUserVoteOnWorkshopItemDelegate.h"
#include "CallbackProxySetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxySetUserVoteOnWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySetUserVoteOnWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
    
};

