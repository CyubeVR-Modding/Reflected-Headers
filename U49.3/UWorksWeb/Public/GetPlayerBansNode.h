#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPlayerBansDelegateDelegate.h"
#include "GetPlayerBansNode.generated.h"

class UGetPlayerBansNode;

UCLASS()
class UWORKSWEB_API UGetPlayerBansNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPlayerBansDelegate Completed;
    
    UGetPlayerBansNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayerBansNode* GetPlayerBansNode(const FString& Key, const FString& SteamIDs);
    
};

