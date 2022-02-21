#pragma once
#include "CoreMinimal.h"
#include "VRClientAuthReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FVRClientAuthReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseClientAuthThrowing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NotReplicated)
    int32 UpdateRate;
    
    CYUBEVR_API FVRClientAuthReplicationData();
};

