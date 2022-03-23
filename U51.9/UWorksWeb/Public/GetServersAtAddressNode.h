#pragma once
#include "CoreMinimal.h"
#include "GetServersAtAddressDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetServersAtAddressNode.generated.h"

class UGetServersAtAddressNode;

UCLASS()
class UWORKSWEB_API UGetServersAtAddressNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressDelegate Completed;
    
    UGetServersAtAddressNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServersAtAddressNode* GetServersAtAddressNode(const FString& Addr);
    
};

