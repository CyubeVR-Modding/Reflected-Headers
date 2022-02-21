#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "StartAssetTransactionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "StartAssetTransactionNode.generated.h"

class UStartAssetTransactionNode;

UCLASS()
class UWORKSWEB_API UStartAssetTransactionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartAssetTransactionDelegate Completed;
    
    UStartAssetTransactionNode();
    UFUNCTION(BlueprintCallable)
    static UStartAssetTransactionNode* StartAssetTransactionNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& AssetID0, int32 AssetQuantity0, const FString& Currency, const FString& Language, const FString& IPAddress, const FString& Referrer, bool bClientAuth);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

