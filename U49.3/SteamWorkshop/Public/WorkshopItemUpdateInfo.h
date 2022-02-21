#pragma once
#include "CoreMinimal.h"
#include "EItemUpdateStatusBP.h"
#include "WorkshopItemDownloadInfo.h"
#include "WorkshopItemUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EItemUpdateStatusBP status;
    
    STEAMWORKSHOP_API FWorkshopItemUpdateInfo();
};

