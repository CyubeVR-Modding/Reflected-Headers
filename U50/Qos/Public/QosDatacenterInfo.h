#pragma once
#include "CoreMinimal.h"
#include "QosPingServerInfo.h"
#include "QosDatacenterInfo.generated.h"

USTRUCT(BlueprintType)
struct FQosDatacenterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString RegionId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FQosPingServerInfo> Servers;
    
    QOS_API FQosDatacenterInfo();
};

