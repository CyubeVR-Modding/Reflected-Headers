#pragma once
#include "CoreMinimal.h"
#include "QosDatacenterInfo.h"
#include "EQosDatacenterResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "DatacenterQosInstance.generated.h"

USTRUCT(BlueprintType)
struct QOS_API FDatacenterQosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FQosDatacenterInfo Definition;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EQosDatacenterResult Result;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 AvgPingMs;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> PingResults;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastCheckTimestamp;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bUsable;
    
    FDatacenterQosInstance();
};

