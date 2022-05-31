#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "IsPlayingSharedGameDelegateDelegate.h"
#include "IsPlayingSharedGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebIsPlayingSharedGame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsPlayingSharedGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsPlayingSharedGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebIsPlayingSharedGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

