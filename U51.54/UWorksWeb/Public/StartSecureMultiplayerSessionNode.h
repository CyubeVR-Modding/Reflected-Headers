#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "StartSecureMultiplayerSessionDelegateDelegate.h"
#include "StartSecureMultiplayerSessionNode.generated.h"

class UStartSecureMultiplayerSessionNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartSecureMultiplayerSessionDelegate Completed;
    
    UStartSecureMultiplayerSessionNode();
    UFUNCTION(BlueprintCallable)
    static UStartSecureMultiplayerSessionNode* StartSecureMultiplayerSessionNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

