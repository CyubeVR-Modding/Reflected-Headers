#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
//CROSS-MODULE INCLUDE V2: -ModuleName=MoviePlayer -ObjectName=EMoviePlaybackType -FallbackName=EMoviePlaybackType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LoadingScreenDescription.generated.h"

USTRUCT(BlueprintType)
struct LOADINGSCREEN_API FLoadingScreenDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoCompleteWhenLoadingCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoviesAreSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWaitForManualStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowUIOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LoadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo LoadingFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> MoviePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoftObjectPath> Images;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretch::Type> ImageStretch;
    
    FLoadingScreenDescription();
};

