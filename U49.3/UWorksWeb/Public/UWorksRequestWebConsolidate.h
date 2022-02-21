#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ConsolidateDelegateDelegate.h"
#include "ConsolidateMinimalDelegateDelegate.h"
#include "UWorksRequestWebConsolidate.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebConsolidate : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FConsolidateDelegate OnRequestCompleted;
    
    UPROPERTY()
    FConsolidateMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebConsolidate();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

