#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CreateSessionDelegateDelegate.h"
#include "CreateSessionMinimalDelegateDelegate.h"
#include "UWorksTitle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksUsers.h"
#include "UWorksRequestWebCreateSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCreateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateSessionDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCreateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCreateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

