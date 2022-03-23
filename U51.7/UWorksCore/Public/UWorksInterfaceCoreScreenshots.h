#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "ScreenshotReadyDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksScreenshotHandle.h"
#include "ScreenshotRequestedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksVRScreenshotType.h"
#include "UWorksInterfaceCoreScreenshots.generated.h"

class UTexture2D;
class UUWorksInterfaceCoreScreenshots;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FScreenshotReadyDelegate ScreenshotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FScreenshotRequestedDelegate ScreenshotRequested;
    
    UUWorksInterfaceCoreScreenshots();
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle WriteScreenshot(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    void TriggerScreenshot();
    
    UFUNCTION(BlueprintCallable)
    bool TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocation(FUWorksScreenshotHandle Screenshot, const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsScreenshotsHooked();
    
    UFUNCTION(BlueprintCallable)
    void HookScreenshots(bool bHook);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreScreenshots* GetScreenshots();
    
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, const FString& Filename, const FString& VRFileName);
    
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle AddScreenshotToLibrary(const FString& FileMame, const FString& ThumbnailFileName, int32 Width, int32 Height);
    
};

