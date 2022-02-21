#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "RequestGlobalStatsDelegateDelegate.h"
#include "RequestGlobalStatsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksRequestCoreRequestGlobalStats.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestGlobalStatsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestGlobalStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestGlobalStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};
