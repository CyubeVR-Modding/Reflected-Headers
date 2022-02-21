#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=ESteamSupportedLanguages -FallbackName=ESteamSupportedLanguages
#include "SteamUGCQueryParameterAllUserDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 pageId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESteamSupportedLanguages Language;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 allowedCacheResponseTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 numDaysPlaytime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnPreviewUrl: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnKeyValueTags: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnFullDescription: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnMetaData: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnChildIds: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bReturnAdditionalPreviews: 1;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAllUserDetails();
};

