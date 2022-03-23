#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ServerListUpdateDelegateDelegate.h"
#include "EUWorksServerQueryType.h"
#include "CoreServerListNode.generated.h"

class UCoreServerListNode;

UCLASS()
class UWORKSCORE_API UCoreServerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerListUpdateDelegate Updated;
    
    UCoreServerListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreServerListNode* ServerListNode(int32 AppID, EUWorksServerQueryType queryType, int32 MaxUpdates);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);
    
};

