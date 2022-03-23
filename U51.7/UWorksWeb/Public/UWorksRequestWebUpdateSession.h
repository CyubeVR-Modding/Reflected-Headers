#pragma once
#include "CoreMinimal.h"
#include "UpdateSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksUsers.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksTitle.h"
#include "UWorksRequestWebUpdateSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUpdateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

