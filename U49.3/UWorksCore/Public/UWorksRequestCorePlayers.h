#pragma once
#include "CoreMinimal.h"
#include "PlayersMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "PlayersDelegateDelegate.h"
#include "PlayersUpdateDelegateDelegate.h"
#include "PlayersUpdateMinimalDelegateDelegate.h"
#include "UWorksPlayerInfo.h"
#include "UWorksRequestCorePlayers.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCorePlayers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayersUpdateDelegate OnRequestUpdated;
    
    UPROPERTY()
    FPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY()
    FPlayersUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCorePlayers();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksPlayerInfo& UpdatedPlayer, TArray<FUWorksPlayerInfo>& Players);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

