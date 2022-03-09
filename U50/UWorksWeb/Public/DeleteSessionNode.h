#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "DeleteSessionNode.generated.h"

class UDeleteSessionNode;

UCLASS()
class UWORKSWEB_API UDeleteSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionDelegate Completed;
    
    UDeleteSessionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteSessionNode* DeleteSessionNode(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID);
    
};

