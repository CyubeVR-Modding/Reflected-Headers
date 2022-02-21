#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "RecordOfflinePlaytimeDelegateDelegate.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksPlaySessions.h"
#include "UWorksRequestWebRecordOfflinePlaytime.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecordOfflinePlaytimeDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRecordOfflinePlaytimeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRecordOfflinePlaytime();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

