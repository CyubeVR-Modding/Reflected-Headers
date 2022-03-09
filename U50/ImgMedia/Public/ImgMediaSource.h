#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=BaseMediaSource -FallbackName=BaseMediaSource
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "ImgMediaSource.generated.h"

UCLASS(EditInlineNew)
class IMGMEDIA_API UImgMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRateOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProxyOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath SequencePath;
    
public:
    UImgMediaSource();
    UFUNCTION(BlueprintCallable)
    void SetSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSequencePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProxies(TArray<FString>& OutProxies) const;
    
};

