#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCQueryHandle -FallbackName=SteamUGCQueryHandle
#include "WorkshopItemUpdateInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=EResultBP -FallbackName=EResultBP
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCUpdateHandle -FallbackName=SteamUGCUpdateHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamDepotId -FallbackName=SteamDepotId
#include "EItemStatisticBP.h"
#include "EItemStateBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt64 -FallbackName=UInt64
#include "ESteamItemVisibility.h"
#include "SteamWorkshopItemInstallInfo.h"
#include "WorkshopItemDownloadInfo.h"
#include "SteamDelegateOnWorkshopItemDownloadedDynDelegate.h"
#include "SteamWorkshopItemDetails.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamKeyValuePair -FallbackName=SteamKeyValuePair
#include "SteamWorkshopUpdateDetails.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=ESteamSupportedLanguages -FallbackName=ESteamSupportedLanguages
#include "SteamUGCQueryParameterTagsAllUser.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.h"
#include "SteamWorkshopLibrary.generated.h"

UCLASS(BlueprintType)
class STEAMWORKSHOP_API USteamWorkshopLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamWorkshopLibrary();
    UFUNCTION(BlueprintPure)
    static int32 SteamWorkshop_UpdateTitleLengthMin_FromConfig();
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
    
    UFUNCTION(BlueprintCallable)
    static void SteamWorkshop_SuspendResumeDownloads(const bool bDoSuspend);
    
    UFUNCTION(BlueprintCallable)
    static EResultBP SteamWorkshop_SetServerDownloadDirectory(const FSteamDepotId& serverDepotId, const FString& Directory);
    
    UFUNCTION(BlueprintPure)
    static void SteamWorkshop_GetSubscribedItems(const int32 maxNumItemsToReturn, TArray<FSteamUGCItemId>& outItems);
    
    UFUNCTION(BlueprintPure)
    static int32 SteamWorkshop_GetNumSubscribedItems();
    
    UFUNCTION(BlueprintPure)
    static void SteamWorkshop_GetItemUpdateProgress(const FSteamUGCUpdateHandle& updateHandle, FWorkshopItemUpdateInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static bool SteamWorkshop_GetItemStateFlag(const FSteamUGCItemId& ItemId, const EItemStateBP flagToQuery);
    
    UFUNCTION(BlueprintPure)
    static TArray<EItemStateBP> SteamWorkshop_GetItemState(const FSteamUGCItemId& ItemId);
    
    UFUNCTION(BlueprintPure)
    static bool SteamWorkshop_GetItemQueryStatistic(const FSteamUGCQueryHandle& queryHandle, const int32 ItemIndex, const TEnumAsByte<EItemStatisticBP> statToRetrieve, FUInt64& StatValue);
    
    UFUNCTION(BlueprintPure)
    static EResultBP SteamWorkshop_GetItemInstallInfo(const FSteamUGCItemId& ItemId, FSteamWorkshopItemInstallInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static EResultBP SteamWorkshop_GetItemDownloadInfo(const FSteamUGCItemId& ItemId, FWorkshopItemDownloadInfo& downloadInfo);
    
    UFUNCTION(BlueprintCallable)
    static EResultBP SteamWorkshop_DownloadItem(const FSteamUGCItemId& ItemId, bool bHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void SteamWorkshop_ActivateGameOverlayToWorkshopItem(const FSteamUGCItemId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnWorkshopItemDownloaded_Unbind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnWorkshopItemDownloaded_Bind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall);
    
    UFUNCTION(BlueprintCallable)
    static void PrintWorkshopItemDetails(const FSteamWorkshopItemDetails& itemDetails, float DisplayTime, FLinearColor Color, bool bPrintToScreen, bool bPrintToLog);
    
    UFUNCTION(BlueprintPure)
    static FSteamWorkshopUpdateDetails MakeSteamWorkshopUpdateDetails(const FString& Title, const FString& Description, const FString& updateNotice, const FString& MetaData, const TArray<FString>& tags, const TArray<FSteamKeyValuePair>& keyValueTags, const FString& contentDirectory, const FString& previewImage, const TArray<FString>& additionalImages, const TArray<FString>& youtubeVideoIDs, const TArray<FString>& keysOfKeyValueTagsToRemove, const TArray<int32>& indexOfPreviewToRemove, const ESteamSupportedLanguages updateLanguage, const ESteamItemVisibility Visibility);
    
    UFUNCTION(BlueprintPure)
    static FSteamUGCQueryParameterTagsAllUserDetails MakeSteamUGCQueryParameterTagsAllUserDetails(const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    
    UFUNCTION(BlueprintPure)
    static FSteamUGCQueryParameterTagsAllUser MakeSteamUGCQueryParameterTagsAllUser(const TArray<FString>& requiredTags, const TArray<FString>& excludedTags, const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    
};

