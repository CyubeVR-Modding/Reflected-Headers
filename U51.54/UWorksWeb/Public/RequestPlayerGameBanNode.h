#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestPlayerGameBanDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestPlayerGameBanNode.generated.h"

class URequestPlayerGameBanNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URequestPlayerGameBanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanDelegate Completed;
    
    URequestPlayerGameBanNode();
    UFUNCTION(BlueprintCallable)
    static URequestPlayerGameBanNode* RequestPlayerGameBanNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

