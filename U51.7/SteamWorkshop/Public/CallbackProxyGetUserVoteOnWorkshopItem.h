#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnGetUserVoteOnWorkshopItemDelegate.h"
#include "CallbackProxyGetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxyGetUserVoteOnWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyGetUserVoteOnWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyGetUserVoteOnWorkshopItem* SteamWorkshop_GetUserVoteOnItem(const FSteamUGCItemId& ItemId);
    
};

