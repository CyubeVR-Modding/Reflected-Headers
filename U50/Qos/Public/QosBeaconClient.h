#pragma once
#include "CoreMinimal.h"
#include "EQosResponseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "QosBeaconClient.generated.h"

UCLASS(NonTransient)
class QOS_API AQosBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AQosBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerQosRequest(const FString& InSessionId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQosResponse(EQosResponseType Response);
    
};

