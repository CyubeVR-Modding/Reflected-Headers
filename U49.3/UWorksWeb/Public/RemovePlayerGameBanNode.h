#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RemovePlayerGameBanDelegateDelegate.h"
#include "RemovePlayerGameBanNode.generated.h"

class URemovePlayerGameBanNode;

UCLASS()
class UWORKSWEB_API URemovePlayerGameBanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRemovePlayerGameBanDelegate Completed;
    
    URemovePlayerGameBanNode();
    UFUNCTION(BlueprintCallable)
    static URemovePlayerGameBanNode* RemovePlayerGameBanNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

