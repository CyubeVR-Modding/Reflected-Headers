#pragma once
#include "CoreMinimal.h"
#include "QosRegionInfo.generated.h"

USTRUCT(BlueprintType)
struct FQosRegionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FString RegionId;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    bool bAutoAssignable;
    
    QOS_API FQosRegionInfo();
};

