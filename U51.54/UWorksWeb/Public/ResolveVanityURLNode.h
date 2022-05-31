#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ResolveVanityURLDelegateDelegate.h"
#include "ResolveVanityURLNode.generated.h"

class UResolveVanityURLNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UResolveVanityURLNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResolveVanityURLDelegate Completed;
    
    UResolveVanityURLNode();
    UFUNCTION(BlueprintCallable)
    static UResolveVanityURLNode* ResolveVanityURLNode(const FString& Key, const FString& VanityURL, uint8 URLType);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

