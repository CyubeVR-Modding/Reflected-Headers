#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPublisherAppOwnershipChangesDelegateDelegate.h"
#include "GetPublisherAppOwnershipChangesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPublisherAppOwnershipChanges.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPublisherAppOwnershipChangesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetPublisherAppOwnershipChangesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublisherAppOwnershipChanges();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

