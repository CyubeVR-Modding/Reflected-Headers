#pragma once
#include "CoreMinimal.h"
#include "GetExportedAssetsForUserDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetExportedAssetsForUserMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetExportedAssetsForUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetExportedAssetsForUserDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetExportedAssetsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetExportedAssetsForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

