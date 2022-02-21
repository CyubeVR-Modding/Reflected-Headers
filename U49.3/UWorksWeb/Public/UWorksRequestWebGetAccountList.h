#pragma once
#include "CoreMinimal.h"
#include "GetAccountListMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetAccountListDelegateDelegate.h"
#include "UWorksRequestWebGetAccountList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAccountList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAccountListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetAccountListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAccountList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

