#pragma once
#include "CoreMinimal.h"
#include "ResolveVanityURLDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ResolveVanityURLNode.generated.h"

class UResolveVanityURLNode;

UCLASS()
class UWORKSWEB_API UResolveVanityURLNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResolveVanityURLDelegate Completed;
    
    UResolveVanityURLNode();
    UFUNCTION(BlueprintCallable)
    static UResolveVanityURLNode* ResolveVanityURLNode(const FString& Key, const FString& VanityURL, uint8 URLType);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

