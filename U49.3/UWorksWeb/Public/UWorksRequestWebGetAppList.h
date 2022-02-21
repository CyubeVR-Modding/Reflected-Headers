#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAppListDelegateDelegate.h"
#include "GetAppListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAppListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetAppListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppList();
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

