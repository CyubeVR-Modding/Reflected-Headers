#pragma once
#include "CoreMinimal.h"
#include "QosPingServerInfo.generated.h"

USTRUCT(BlueprintType)
struct FQosPingServerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Address;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    QOS_API FQosPingServerInfo();
};

