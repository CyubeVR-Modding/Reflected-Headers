#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.h"
#include "UWorksRequestCoreGetNumberOfCurrentPlayers.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetNumberOfCurrentPlayersDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetNumberOfCurrentPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetNumberOfCurrentPlayers();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(bool& bSuccess, int32& Players);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

