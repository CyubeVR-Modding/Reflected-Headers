#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateSessionsForAppDelegateDelegate.h"
#include "EnumerateSessionsForAppMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebEnumerateSessionsForApp.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnumerateSessionsForAppDelegate OnRequestCompleted;
    
    UPROPERTY()
    FEnumerateSessionsForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateSessionsForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

