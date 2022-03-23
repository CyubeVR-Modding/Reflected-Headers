#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "HistoryExecuteCommandsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebHistoryExecuteCommands.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebHistoryExecuteCommands();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

