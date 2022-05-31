#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EndSecureMultiplayerSessionDelegateDelegate.h"
#include "EndSecureMultiplayerSessionNode.generated.h"

class UEndSecureMultiplayerSessionNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndSecureMultiplayerSessionDelegate Completed;
    
    UEndSecureMultiplayerSessionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
};

