#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserTicketDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "AuthenticateUserTicketMinimalDelegateDelegate.h"
#include "UWorksRequestWebAuthenticateUserTicket.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAuthenticateUserTicketDelegate OnRequestCompleted;
    
    UPROPERTY()
    FAuthenticateUserTicketMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAuthenticateUserTicket();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

