#pragma once
#include "CoreMinimal.h"
#include "EndSecureMultiplayerSessionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EndSecureMultiplayerSessionNode.generated.h"

class UEndSecureMultiplayerSessionNode;

UCLASS()
class UWORKSWEB_API UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEndSecureMultiplayerSessionDelegate Completed;
    
    UEndSecureMultiplayerSessionNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
};

