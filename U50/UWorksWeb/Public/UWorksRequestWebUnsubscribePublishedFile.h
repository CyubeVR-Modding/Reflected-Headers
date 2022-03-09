#pragma once
#include "CoreMinimal.h"
#include "UnsubscribePublishedFileMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UnsubscribePublishedFileDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebUnsubscribePublishedFile.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUnsubscribePublishedFileDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUnsubscribePublishedFileMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUnsubscribePublishedFile();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

