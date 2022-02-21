#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
#include "UWorksRequestWebEnumerateUserPublishedFiles.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnumerateUserPublishedFilesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FEnumerateUserPublishedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserPublishedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

