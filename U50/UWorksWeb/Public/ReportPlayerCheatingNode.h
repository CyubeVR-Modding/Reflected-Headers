#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ReportPlayerCheatingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ReportPlayerCheatingNode.generated.h"

class UReportPlayerCheatingNode;

UCLASS()
class UWORKSWEB_API UReportPlayerCheatingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReportPlayerCheatingDelegate Completed;
    
    UReportPlayerCheatingNode();
    UFUNCTION(BlueprintCallable)
    static UReportPlayerCheatingNode* ReportPlayerCheatingNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

