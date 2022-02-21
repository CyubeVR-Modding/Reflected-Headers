#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServerSteamIDsByIPMinimalDelegateDelegate.h"
#include "GetServerSteamIDsByIPDelegateDelegate.h"
#include "UWorksRequestWebGetServerSteamIDsByIP.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetServerSteamIDsByIPDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetServerSteamIDsByIPMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerSteamIDsByIP();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& ServerIPs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

