#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAppDepotVersionsDelegateDelegate.h"
#include "GetAppDepotVersionsNode.generated.h"

class UGetAppDepotVersionsNode;

UCLASS()
class UWORKSWEB_API UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppDepotVersionsDelegate Completed;
    
    UGetAppDepotVersionsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppDepotVersionsNode* GetAppDepotVersionsNode(const FString& Key, int32 AppID);
    
};

