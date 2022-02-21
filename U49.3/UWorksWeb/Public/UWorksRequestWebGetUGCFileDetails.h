#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUGCFileDetailsDelegateDelegate.h"
#include "GetUGCFileDetailsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetUGCFileDetails.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUGCFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUGCFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUGCFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

