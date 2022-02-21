#pragma once
#include "CoreMinimal.h"
#include "FlushContextCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "FlushContextCacheDelegateDelegate.h"
#include "UWorksRequestWebFlushContextCache.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFlushContextCacheDelegate OnRequestCompleted;
    
    UPROPERTY()
    FFlushContextCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushContextCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

