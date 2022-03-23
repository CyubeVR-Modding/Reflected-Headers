#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "QosRegionInfo.h"
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
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 NumTestsPerRegion;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float PingTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FQosRegionInfo> RegionDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FQosDatacenterInfo> DatacenterDefinitions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime LastCheckTimestamp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UQosEvaluator* Evaluator;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EQosCompletionResult QosEvalResult;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FRegionQosInstance> RegionOptions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ForceRegionId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bRegionForcedViaCommandline;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SelectedRegionId;
    
public:
    UQosRegionManager();
};

