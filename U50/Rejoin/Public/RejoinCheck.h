#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERejoinStatus.h"
#include "RejoinCheck.generated.h"

UCLASS()
class REJOIN_API URejoinCheck : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ERejoinStatus LastKnownStatus;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bRejoinAfterCheck;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAttemptingRejoin;
    
public:
    URejoinCheck();
};

