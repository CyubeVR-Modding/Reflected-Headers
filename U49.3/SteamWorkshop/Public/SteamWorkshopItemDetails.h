#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt64 -FallbackName=UInt64
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=EResultBP -FallbackName=EResultBP
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamAppId -FallbackName=SteamAppId
#include "EWorkshopFileTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCHandle -FallbackName=SteamUGCHandle
#include "ESteamItemVisibility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt32 -FallbackName=UInt32
#include "ItemPreviewDetails.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamKeyValuePair -FallbackName=SteamKeyValuePair
#include "SteamWorkshopItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EResultBP Result;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamUGCItemId workshopItemID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EWorkshopFileTypeBP fileType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamAppId appIdCreatingApp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamAppId appIdUsingApp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt64 userIdItemCreator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime timeStampCreated;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime timeStampUpdated;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime timeStampAddedToUserList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESteamItemVisibility Visibility;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bItemIsBanned;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bItemWasAcceptedByDevelopers;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bTagsTruncated;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamUGCHandle primaryFileHandle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamUGCHandle previewImageHandle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString primaryFileCloudFilename;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 primaryFileSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 previewImageSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString websiteURL;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 votesUp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 votesDown;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float score;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt32 numChildren;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString previewUrl;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FItemPreviewDetails> additionalPreviews;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSteamUGCItemId> childItemIds;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSteamKeyValuePair> keyValueTags;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString MetaData;
    
    STEAMWORKSHOP_API FSteamWorkshopItemDetails();
};

