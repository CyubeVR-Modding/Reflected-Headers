#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserTicketDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AuthenticateUserTicketNode.generated.h"

class UAuthenticateUserTicketNode;

UCLASS()
class UWORKSWEB_API UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAuthenticateUserTicketDelegate Completed;
    
    UAuthenticateUserTicketNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAuthenticateUserTicketNode* AuthenticateUserTicketNode(const FString& Key, int32 AppID, const FString& Ticket);
    
};

