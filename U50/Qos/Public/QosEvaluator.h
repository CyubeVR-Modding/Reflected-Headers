#pragma once
#include "CoreMinimal.h"
#include "DatacenterQosInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QosEvaluator.generated.h"

UCLASS()
class QOS_API UQosEvaluator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCancelOperation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDatacenterQosInstance> Datacenters;
    
public:
    UQosEvaluator();
};

