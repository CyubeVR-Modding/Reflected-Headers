#pragma once
#include "CoreMinimal.h"
#include "SteamResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCQueryHandle -FallbackName=SteamUGCQueryHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt32 -FallbackName=UInt32
#include "SteamWorkshopItemDetails.h"
#include "QueryWorkshopForItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForItemsResult : public FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryHandle queryHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 numResultsReturned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 numMatchingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMorePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetrievedDataWasCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamWorkshopItemDetails> items;
    
    STEAMWORKSHOP_API FQueryWorkshopForItemsResult();
};

