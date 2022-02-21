#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAccountPublicInfoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetAccountPublicInfoNode.generated.h"

class UGetAccountPublicInfoNode;

UCLASS()
class UWORKSWEB_API UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAccountPublicInfoDelegate Completed;
    
    UGetAccountPublicInfoNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAccountPublicInfoNode* GetAccountPublicInfoNode(const FString& Key, FUWorksSteamID SteamID);
    
};

