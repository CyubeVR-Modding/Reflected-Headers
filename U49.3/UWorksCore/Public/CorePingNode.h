#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PingDelegateDelegate.h"
#include "UWorksServerInfo.h"
#include "CorePingNode.generated.h"

class UCorePingNode;

UCLASS()
class UWORKSCORE_API UCorePingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPingDelegate Completed;
    
    UCorePingNode();
    UFUNCTION(BlueprintCallable)
    static UCorePingNode* PingNode(const FString& IP, int32 Port);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);
    
};

