#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServerIPsBySteamIDMinimalDelegateDelegate.h"
#include "GetServerIPsBySteamIDDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetServerIPsBySteamID.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerIPsBySteamID();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID ServerSteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

