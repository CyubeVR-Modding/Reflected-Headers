#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAppListMinimalDelegateDelegate.h"
#include "GetAppListDelegateDelegate.h"
#include "UWorksRequestWebGetAppList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppList();
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

