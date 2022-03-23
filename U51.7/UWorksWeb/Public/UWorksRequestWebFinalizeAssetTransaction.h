#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FinalizeAssetTransactionDelegateDelegate.h"
#include "FinalizeAssetTransactionMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebFinalizeAssetTransaction.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFinalizeAssetTransaction();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

