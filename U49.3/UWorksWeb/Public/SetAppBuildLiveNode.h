#pragma once
#include "CoreMinimal.h"
#include "SetAppBuildLiveDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetAppBuildLiveNode.generated.h"

class USetAppBuildLiveNode;

UCLASS()
class UWORKSWEB_API USetAppBuildLiveNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetAppBuildLiveDelegate Completed;
    
    USetAppBuildLiveNode();
    UFUNCTION(BlueprintCallable)
    static USetAppBuildLiveNode* SetAppBuildLiveNode(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

