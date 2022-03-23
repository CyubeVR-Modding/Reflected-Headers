#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetAccountPublicInfoDelegateDelegate.h"
#include "GetAccountPublicInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAccountPublicInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAccountPublicInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAccountPublicInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAccountPublicInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

