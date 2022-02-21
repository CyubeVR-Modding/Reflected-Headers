#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "RequestEncryptedAppTicketMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestEncryptedAppTicket.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestEncryptedAppTicketDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestEncryptedAppTicketMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestEncryptedAppTicket();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

