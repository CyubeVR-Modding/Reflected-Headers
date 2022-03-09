#pragma once
#include "CoreMinimal.h"
#include "RequestClanOfficerListMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestClanOfficerListDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreRequestClanOfficerList.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestClanOfficerListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestClanOfficerListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestClanOfficerList();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDClan, int32& Officers, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

