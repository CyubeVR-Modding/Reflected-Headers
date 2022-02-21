#pragma once
#include "CoreMinimal.h"
#include "UserVoteSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UserVoteSummaryDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebUserVoteSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUserVoteSummaryDelegate OnRequestCompleted;
    
    UPROPERTY()
    FUserVoteSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUserVoteSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

