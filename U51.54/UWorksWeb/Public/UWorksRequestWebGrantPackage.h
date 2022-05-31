#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GrantPackageDelegateDelegate.h"
#include "GrantPackageMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGrantPackage.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGrantPackage : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrantPackageDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrantPackageMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGrantPackage();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 PackageID, const FString& IPAddress, const FString& ThirdPartyKey, int32 ThirdPartyAppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

