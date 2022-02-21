#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt64 -FallbackName=UInt64
#include "WorkshopItemDownloadInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt64 bytesCurrent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt64 bytesTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 megaBytesCurrent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 megaBytesTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float percentageFinished;
    
    STEAMWORKSHOP_API FWorkshopItemDownloadInfo();
};

