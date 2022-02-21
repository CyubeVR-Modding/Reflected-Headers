#pragma once
#include "CoreMinimal.h"
#include "GetAppPriceInfoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetAppPriceInfoNode.generated.h"

class UGetAppPriceInfoNode;

UCLASS()
class UWORKSWEB_API UGetAppPriceInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAppPriceInfoDelegate Completed;
    
    UGetAppPriceInfoNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppPriceInfoNode* GetAppPriceInfoNode(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs);
    
};

