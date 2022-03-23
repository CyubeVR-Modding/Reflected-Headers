#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt32 -FallbackName=UInt32
#include "DownloadItemResult.generated.h"

USTRUCT(BlueprintType)
struct FDownloadItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 AppID;
    
    STEAMWORKSHOP_API FDownloadItemResult();
};

