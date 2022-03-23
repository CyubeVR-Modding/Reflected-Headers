#pragma once
#include "CoreMinimal.h"
#include "LiveLinkPropertyData.h"
#include "LiveLinkSubSectionData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSubSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkPropertyData> Properties;
    
    LIVELINKMOVIESCENE_API FLiveLinkSubSectionData();
};

