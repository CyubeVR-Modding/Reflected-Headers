#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "IsPlayingSharedGameDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "IsPlayingSharedGameNode.generated.h"

class UIsPlayingSharedGameNode;

UCLASS()
class UWORKSWEB_API UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIsPlayingSharedGameDelegate Completed;
    
    UIsPlayingSharedGameNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UIsPlayingSharedGameNode* IsPlayingSharedGameNode(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    
};

