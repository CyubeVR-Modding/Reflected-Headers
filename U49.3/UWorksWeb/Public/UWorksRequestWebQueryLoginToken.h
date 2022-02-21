#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "QueryLoginTokenDelegateDelegate.h"
#include "QueryLoginTokenMinimalDelegateDelegate.h"
#include "UWorksRequestWebQueryLoginToken.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FQueryLoginTokenDelegate OnRequestCompleted;
    
    UPROPERTY()
    FQueryLoginTokenMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryLoginToken();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

