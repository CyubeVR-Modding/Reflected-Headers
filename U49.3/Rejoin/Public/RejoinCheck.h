#pragma once
#include "CoreMinimal.h"
#include "ERejoinStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RejoinCheck.generated.h"

UCLASS()
class REJOIN_API URejoinCheck : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ERejoinStatus LastKnownStatus;
    
private:
    UPROPERTY()
    bool bRejoinAfterCheck;
    
    UPROPERTY()
    bool bAttemptingRejoin;
    
public:
    URejoinCheck();
};

