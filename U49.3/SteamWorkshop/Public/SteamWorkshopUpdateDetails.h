#pragma once
#include "CoreMinimal.h"
#include "ESteamItemVisibility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=ESteamSupportedLanguages -FallbackName=ESteamSupportedLanguages
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamKeyValuePair -FallbackName=SteamKeyValuePair
#include "SteamWorkshopUpdateDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopUpdateDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString updateNotice;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESteamSupportedLanguages updateLanguage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString MetaData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESteamItemVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FSteamKeyValuePair> keyValueTags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString contentDirectory;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString previewImage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> additionalImages;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> youtubeVideoIDs;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> keysOfKeyValueTagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<int32> indexOfPreviewToRemove;
    
    STEAMWORKSHOP_API FSteamWorkshopUpdateDetails();
};

