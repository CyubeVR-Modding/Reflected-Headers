#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPlayersBannedDelegateDelegate.h"
#include "GetPlayersBannedNode.generated.h"

class UGetPlayersBannedNode;

UCLASS()
class UWORKSWEB_API UGetPlayersBannedNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedDelegate Completed;
    
    UGetPlayersBannedNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayersBannedNode* GetPlayersBannedNode(const FString& Key, int32 AppID);
    
};

