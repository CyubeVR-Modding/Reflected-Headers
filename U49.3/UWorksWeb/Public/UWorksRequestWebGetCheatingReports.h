#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetCheatingReportsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetCheatingReportsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCheatingReports.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetCheatingReportsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetCheatingReportsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCheatingReports();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

