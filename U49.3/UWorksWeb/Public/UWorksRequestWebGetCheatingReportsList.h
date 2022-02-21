#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetCheatingReportsListDelegateDelegate.h"
#include "GetCheatingReportsListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCheatingReportsList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetCheatingReportsListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetCheatingReportsListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCheatingReportsList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, const FString& ReportIDMin);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

