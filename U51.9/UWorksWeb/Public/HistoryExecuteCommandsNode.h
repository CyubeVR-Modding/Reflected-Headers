#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "HistoryExecuteCommandsDelegateDelegate.h"
#include "HistoryExecuteCommandsNode.generated.h"

class UHistoryExecuteCommandsNode;

UCLASS()
class UWORKSWEB_API UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsDelegate Completed;
    
    UHistoryExecuteCommandsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UHistoryExecuteCommandsNode* HistoryExecuteCommandsNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId);
    
};

