#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetCommunityBadgeProgressDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetCommunityBadgeProgressNode.generated.h"

class UGetCommunityBadgeProgressNode;

UCLASS()
class UWORKSWEB_API UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressDelegate Completed;
    
    UGetCommunityBadgeProgressNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCommunityBadgeProgressNode* GetCommunityBadgeProgressNode(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID);
    
};

