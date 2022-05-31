#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksInterfaceWeb.h"
#include "PostGameDataFrameMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebBroadcast.generated.h"

class UUWorksRequestWebPostGameDataFrame;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebBroadcast();
    UFUNCTION(BlueprintCallable)
    static void PostGameDataFrameMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& BroadcastID, const FString& FrameData, const FPostGameDataFrameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebPostGameDataFrame* PostGameDataFrame();
    
};

