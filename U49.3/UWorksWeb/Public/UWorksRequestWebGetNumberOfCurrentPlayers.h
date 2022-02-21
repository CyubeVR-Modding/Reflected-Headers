#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetNumberOfCurrentPlayers.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetNumberOfCurrentPlayersDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetNumberOfCurrentPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetNumberOfCurrentPlayers();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

