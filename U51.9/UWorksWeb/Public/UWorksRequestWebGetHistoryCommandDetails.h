#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetHistoryCommandDetailsDelegateDelegate.h"
#include "GetHistoryCommandDetailsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetHistoryCommandDetails.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetHistoryCommandDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetHistoryCommandDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetHistoryCommandDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

