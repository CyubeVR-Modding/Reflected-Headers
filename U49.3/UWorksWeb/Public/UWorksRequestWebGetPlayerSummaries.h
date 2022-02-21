#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPlayerSummariesDelegateDelegate.h"
#include "GetPlayerSummariesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPlayerSummaries.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPlayerSummariesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetPlayerSummariesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerSummaries();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

