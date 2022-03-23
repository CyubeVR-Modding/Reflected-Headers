#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "PingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CorePingNode.generated.h"

class UCorePingNode;

UCLASS()
class UWORKSCORE_API UCorePingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPingDelegate Completed;
    
    UCorePingNode();
    UFUNCTION(BlueprintCallable)
    static UCorePingNode* PingNode(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);
    
};

