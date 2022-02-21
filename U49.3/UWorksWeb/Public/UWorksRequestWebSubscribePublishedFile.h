#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SubscribePublishedFileDelegateDelegate.h"
#include "SubscribePublishedFileMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebSubscribePublishedFile.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubscribePublishedFileDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSubscribePublishedFileMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSubscribePublishedFile();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

