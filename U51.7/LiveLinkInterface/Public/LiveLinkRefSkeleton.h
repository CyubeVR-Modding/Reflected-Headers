#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRefSkeleton.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkRefSkeleton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneParents;
    
    LIVELINKINTERFACE_API FLiveLinkRefSkeleton();
};

