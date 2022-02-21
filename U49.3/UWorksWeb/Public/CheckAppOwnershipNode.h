#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CheckAppOwnershipDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CheckAppOwnershipNode.generated.h"

class UCheckAppOwnershipNode;

UCLASS()
class UWORKSWEB_API UCheckAppOwnershipNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCheckAppOwnershipDelegate Completed;
    
    UCheckAppOwnershipNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCheckAppOwnershipNode* CheckAppOwnershipNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

