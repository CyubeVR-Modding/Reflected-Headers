#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksPlaySessions.h"
#include "RecordOfflinePlaytimeDelegateDelegate.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebRecordOfflinePlaytime.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRecordOfflinePlaytime();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

