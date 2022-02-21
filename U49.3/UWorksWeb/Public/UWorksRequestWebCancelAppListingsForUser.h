#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CancelAppListingsForUserDelegateDelegate.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebCancelAppListingsForUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCancelAppListingsForUserDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCancelAppListingsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelAppListingsForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

