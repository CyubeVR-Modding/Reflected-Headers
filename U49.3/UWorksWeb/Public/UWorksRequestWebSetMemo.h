#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetMemoDelegateDelegate.h"
#include "SetMemoMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebSetMemo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetMemo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetMemoDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetMemoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetMemo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

