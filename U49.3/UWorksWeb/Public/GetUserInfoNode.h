#pragma once
#include "CoreMinimal.h"
#include "GetUserInfoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserInfoNode.generated.h"

class UGetUserInfoNode;

UCLASS()
class UWORKSWEB_API UGetUserInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserInfoDelegate Completed;
    
    UGetUserInfoNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserInfoNode* GetUserInfoNode(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress);
    
};

