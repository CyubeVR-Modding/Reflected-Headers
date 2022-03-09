#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "PostGameDataFrameDelegateDelegate.h"
#include "PostGameDataFrameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebPostGameDataFrame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPostGameDataFrameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPostGameDataFrameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebPostGameDataFrame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& BroadcastID, const FString& FrameData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

