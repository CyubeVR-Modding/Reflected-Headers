#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPlayerBansDelegateDelegate.h"
#include "GetPlayerBansMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPlayerBans.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPlayerBansDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetPlayerBansMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerBans();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

