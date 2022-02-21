#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetCollectionDetailsDelegateDelegate.h"
#include "GetCollectionDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCollectionDetails.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetCollectionDetailsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetCollectionDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCollectionDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

