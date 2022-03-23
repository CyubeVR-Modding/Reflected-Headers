#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkSourcePreset.generated.h"

class ULiveLinkSourceSettings;

USTRUCT(BlueprintType)
struct FLiveLinkSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULiveLinkSourceSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FText SourceType;
    
    LIVELINKINTERFACE_API FLiveLinkSourcePreset();
};

