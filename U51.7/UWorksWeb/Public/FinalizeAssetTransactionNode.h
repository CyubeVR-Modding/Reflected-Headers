#pragma once
#include "CoreMinimal.h"
#include "FinalizeAssetTransactionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "FinalizeAssetTransactionNode.generated.h"

class UFinalizeAssetTransactionNode;

UCLASS()
class UWORKSWEB_API UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionDelegate Completed;
    
    UFinalizeAssetTransactionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFinalizeAssetTransactionNode* FinalizeAssetTransactionNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language);
    
};

