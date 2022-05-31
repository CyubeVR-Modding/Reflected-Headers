#pragma once
#include "CoreMinimal.h"
#include "GetUserHistoryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserHistoryDelegateDelegate.h"
#include "UWorksRequestWebGetUserHistory.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserHistoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserHistory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

