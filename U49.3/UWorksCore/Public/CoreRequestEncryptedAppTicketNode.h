#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreRequestEncryptedAppTicketNode.generated.h"

class UCoreRequestEncryptedAppTicketNode;

UCLASS()
class UWORKSCORE_API UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestEncryptedAppTicketDelegate Completed;
    
    UCoreRequestEncryptedAppTicketNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestEncryptedAppTicketNode* RequestEncryptedAppTicketNode(TArray<uint8> Buffer);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

