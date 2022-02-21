#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAssetIDDelegateDelegate.h"
#include "GetAssetIDMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAssetID.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAssetID : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAssetIDDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetAssetIDMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAssetID();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& ListingID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

