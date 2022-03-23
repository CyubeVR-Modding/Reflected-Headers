#pragma once
#include "CoreMinimal.h"
#include "QosRegionInfo.h"
#include "DatacenterQosInstance.h"
#include "RegionQosInstance.generated.h"

USTRUCT(BlueprintType)
struct QOS_API FRegionQosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FQosRegionInfo Definition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FDatacenterQosInstance> DatacenterOptions;
    
    FRegionQosInstance();
};

