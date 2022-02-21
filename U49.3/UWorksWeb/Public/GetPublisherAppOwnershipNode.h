#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPublisherAppOwnershipDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetPublisherAppOwnershipNode.generated.h"

class UGetPublisherAppOwnershipNode;

UCLASS()
class UWORKSWEB_API UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPublisherAppOwnershipDelegate Completed;
    
    UGetPublisherAppOwnershipNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPublisherAppOwnershipNode* GetPublisherAppOwnershipNode(const FString& Key, FUWorksSteamID SteamID);
    
};

