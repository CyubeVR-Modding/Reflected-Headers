#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksUGCHandle.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksWorkshopFileType.h"
#include "EUWorksRemoteStoragePublishedFileVisibility.h"
#include "UWorksSteamUGCDetails.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksSteamUGCDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FUWorksPublishedFileID PublishedFileID;
    
    UPROPERTY(BlueprintReadWrite)
    EUWorksResult Result;
    
    UPROPERTY(BlueprintReadWrite)
    EUWorksWorkshopFileType fileType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CreatorAppID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ConsumerAppID;
    
    UPROPERTY(BlueprintReadWrite)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksSteamID SteamIDOwner;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TimeCreated;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TimeUpdated;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TimeAddedToUserList;
    
    UPROPERTY(BlueprintReadWrite)
    EUWorksRemoteStoragePublishedFileVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite)
    bool bBanned;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAcceptedForUse;
    
    UPROPERTY(BlueprintReadWrite)
    bool bTagsTruncated;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksUGCHandle File;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksUGCHandle PreviewFile;
    
    UPROPERTY(BlueprintReadWrite)
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite)
    int32 fileSize;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PreviewFileSize;
    
    UPROPERTY(BlueprintReadWrite)
    FString URL;
    
    UPROPERTY(BlueprintReadWrite)
    int32 votesUp;
    
    UPROPERTY(BlueprintReadWrite)
    int32 votesDown;
    
    UPROPERTY(BlueprintReadWrite)
    float score;
    
    UPROPERTY(BlueprintReadWrite)
    int32 numChildren;
    
    FUWorksSteamUGCDetails();
};

