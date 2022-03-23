#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AuthenticateUserTicketDelegateDelegate.h"
#include "AuthenticateUserTicketNode.generated.h"

class UAuthenticateUserTicketNode;

UCLASS()
class UWORKSWEB_API UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAuthenticateUserTicketDelegate Completed;
    
    UAuthenticateUserTicketNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAuthenticateUserTicketNode* AuthenticateUserTicketNode(const FString& Key, int32 AppID, const FString& Ticket);
    
};

