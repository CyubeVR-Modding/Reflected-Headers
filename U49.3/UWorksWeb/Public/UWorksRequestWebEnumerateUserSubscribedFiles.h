#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateUserSubscribedFilesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EnumerateUserSubscribedFilesMinimalDelegateDelegate.h"
#include "UWorksRequestWebEnumerateUserSubscribedFiles.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnumerateUserSubscribedFilesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FEnumerateUserSubscribedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserSubscribedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

