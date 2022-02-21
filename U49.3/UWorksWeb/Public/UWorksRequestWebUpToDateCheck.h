#pragma once
#include "CoreMinimal.h"
#include "UpToDateCheckMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UpToDateCheckDelegateDelegate.h"
#include "UWorksRequestWebUpToDateCheck.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUpToDateCheckDelegate OnRequestCompleted;
    
    UPROPERTY()
    FUpToDateCheckMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpToDateCheck();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, int32 VersionToCheck);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

