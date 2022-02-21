#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestLobbyListDelegateDelegate.h"
#include "RequestLobbyListMinimalDelegateDelegate.h"
#include "UWorksRequestCoreRequestLobbyList.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestLobbyListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestLobbyListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestLobbyList();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(int32& LobbiesMatching);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

