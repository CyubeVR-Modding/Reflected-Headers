#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QosRegionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "QosDatacenterInfo.h"
#include "EQosCompletionResult.h"
#include "RegionQosInstance.h"
#include "QosRegionManager.generated.h"

class UQosEvaluator;

UCLASS()
class QOS_API UQosRegionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    int32 NumTestsPerRegion;
    
    UPROPERTY(Config)
    float PingTimeout;
    
    UPROPERTY(Config)
    TArray<FQosRegionInfo> RegionDefinitions;
    
    UPROPERTY(Config)
    TArray<FQosDatacenterInfo> DatacenterDefinitions;
    
    UPROPERTY()
    FDateTime LastCheckTimestamp;
    
    UPROPERTY()
    UQosEvaluator* Evaluator;
    
    UPROPERTY()
    EQosCompletionResult QosEvalResult;
    
    UPROPERTY()
    TArray<FRegionQosInstance> RegionOptions;
    
    UPROPERTY()
    FString ForceRegionId;
    
    UPROPERTY()
    bool bRegionForcedViaCommandline;
    
    UPROPERTY()
    FString SelectedRegionId;
    
public:
    UQosRegionManager();
};

