#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetAppBuildLiveDelegateDelegate.h"
#include "SetAppBuildLiveNode.generated.h"

class USetAppBuildLiveNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetAppBuildLiveNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetAppBuildLiveDelegate Completed;
    
    USetAppBuildLiveNode();
    UFUNCTION(BlueprintCallable)
    static USetAppBuildLiveNode* SetAppBuildLiveNode(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

