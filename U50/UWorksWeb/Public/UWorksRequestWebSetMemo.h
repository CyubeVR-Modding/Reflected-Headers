#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetMemoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetMemoMinimalDelegateDelegate.h"
#include "UWorksRequestWebSetMemo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetMemo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetMemoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetMemoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetMemo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

