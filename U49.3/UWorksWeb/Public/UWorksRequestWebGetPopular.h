#pragma once
#include "CoreMinimal.h"
#include "GetPopularDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPopularMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPopular.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPopular : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPopularDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetPopularMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPopular();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

