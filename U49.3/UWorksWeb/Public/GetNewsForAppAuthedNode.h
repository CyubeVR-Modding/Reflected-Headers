#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetNewsForAppAuthedDelegateDelegate.h"
#include "GetNewsForAppAuthedNode.generated.h"

class UGetNewsForAppAuthedNode;

UCLASS()
class UWORKSWEB_API UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetNewsForAppAuthedDelegate Completed;
    
    UGetNewsForAppAuthedNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNewsForAppAuthedNode* GetNewsForAppAuthedNode(const FString& Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
};

