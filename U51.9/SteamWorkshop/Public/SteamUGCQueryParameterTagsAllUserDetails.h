#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamKeyValuePair -FallbackName=SteamKeyValuePair
#include "SteamUGCQueryParameterTagsAllUserDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterTagsAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamKeyValuePair> requiredKeyValueTags;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterTagsAllUserDetails();
};

