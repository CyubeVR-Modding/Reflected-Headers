#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksUsers.h"
#include "UpdateSessionMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksTitle.h"
#include "UWorksRequestWebUpdateSession.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebUpdateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

