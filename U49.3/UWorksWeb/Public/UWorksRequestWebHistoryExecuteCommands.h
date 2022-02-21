#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebHistoryExecuteCommands.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHistoryExecuteCommandsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FHistoryExecuteCommandsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebHistoryExecuteCommands();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

