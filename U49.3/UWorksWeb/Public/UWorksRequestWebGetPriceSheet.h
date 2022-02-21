#pragma once
#include "CoreMinimal.h"
#include "GetPriceSheetMinimalDelegateDelegate.h"
#include "GetPriceSheetDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetPriceSheet.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPriceSheetDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetPriceSheetMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPriceSheet();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

