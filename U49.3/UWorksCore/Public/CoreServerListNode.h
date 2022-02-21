#pragma once
#include "CoreMinimal.h"
#include "ServerListUpdateDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksServerQueryType.h"
#include "UWorksServerInfo.h"
#include "CoreServerListNode.generated.h"

class UCoreServerListNode;

UCLASS()
class UWORKSCORE_API UCoreServerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FServerListUpdateDelegate Updated;
    
    UCoreServerListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreServerListNode* ServerListNode(int32 AppID, EUWorksServerQueryType queryType, int32 MaxUpdates);
    
    UFUNCTION()
    void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);
    
};

