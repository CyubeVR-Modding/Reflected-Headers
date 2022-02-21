#pragma once
#include "CoreMinimal.h"
#include "RequestEligiblePromoItemDefinitionsIDsMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestEligiblePromoItemDefinitionsIDsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& NumEligiblePromoItemsDefinitionsIDs, bool& bCachedData);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

