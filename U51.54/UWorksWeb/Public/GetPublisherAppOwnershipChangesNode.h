#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPublisherAppOwnershipChangesDelegateDelegate.h"
#include "GetPublisherAppOwnershipChangesNode.generated.h"

class UGetPublisherAppOwnershipChangesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipChangesDelegate Completed;
    
    UGetPublisherAppOwnershipChangesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPublisherAppOwnershipChangesNode* GetPublisherAppOwnershipChangesNode(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);
    
};

