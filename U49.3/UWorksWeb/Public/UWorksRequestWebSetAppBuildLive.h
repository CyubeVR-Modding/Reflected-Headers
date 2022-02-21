#pragma once
#include "CoreMinimal.h"
#include "SetAppBuildLiveDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "SetAppBuildLiveMinimalDelegateDelegate.h"
#include "UWorksRequestWebSetAppBuildLive.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetAppBuildLiveDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetAppBuildLiveMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetAppBuildLive();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

