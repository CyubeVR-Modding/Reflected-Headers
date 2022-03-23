#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetSchemaForGameDelegateDelegate.h"
#include "GetSchemaForGameNode.generated.h"

class UGetSchemaForGameNode;

UCLASS()
class UWORKSWEB_API UGetSchemaForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetSchemaForGameDelegate Completed;
    
    UGetSchemaForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSchemaForGameNode* GetSchemaForGameNode(const FString& Key, int32 AppID, const FString& Language);
    
};

