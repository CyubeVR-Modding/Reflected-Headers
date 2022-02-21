#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ConsumeItemMinimalDelegateDelegate.h"
#include "ConsumeItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemInstanceID -FallbackName=UWorksSteamItemInstanceID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebConsumeItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebConsumeItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FConsumeItemDelegate OnRequestCompleted;
    
    UPROPERTY()
    FConsumeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebConsumeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

