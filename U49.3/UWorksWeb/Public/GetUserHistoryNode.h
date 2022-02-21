#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetUserHistoryDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserHistoryNode.generated.h"

class UGetUserHistoryNode;

UCLASS()
class UWORKSWEB_API UGetUserHistoryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserHistoryDelegate Completed;
    
    UGetUserHistoryNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserHistoryNode* GetUserHistoryNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
};

