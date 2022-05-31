#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CheckAppOwnershipDelegateDelegate.h"
#include "CheckAppOwnershipMinimalDelegateDelegate.h"
#include "UWorksRequestWebCheckAppOwnership.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCheckAppOwnership();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

