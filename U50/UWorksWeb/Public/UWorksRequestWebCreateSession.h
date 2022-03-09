#pragma once
#include "CoreMinimal.h"
#include "UWorksUsers.h"
#include "UWorksRequestWeb.h"
#include "CreateSessionDelegateDelegate.h"
#include "CreateSessionMinimalDelegateDelegate.h"
#include "UWorksTitle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebCreateSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCreateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCreateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

