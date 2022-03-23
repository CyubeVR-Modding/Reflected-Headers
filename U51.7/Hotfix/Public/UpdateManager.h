#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EUpdateState.h"
#include "EHotfixResult.h"
#include "EUpdateCompletionStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "UpdateManager.generated.h"

class UEnum;

UCLASS()
class HOTFIX_API UUpdateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float HotfixCheckCompleteDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float UpdateCheckCompleteDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float HotfixAvailabilityCheckCompleteDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float UpdateCheckAvailabilityCompleteDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 AppSuspendedUpdateCheckTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPlatformEnvironmentDetected;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInitialUpdateFinished;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCheckHotfixAvailabilityOnly;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUpdateState CurrentUpdateState;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 WorstNumFilesPendingLoadViewed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EHotfixResult LastHotfixResult;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime LastUpdateCheck[2];
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUpdateCompletionStatus LastCompletionResult[2];
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UEnum* UpdateStateEnum;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UEnum* UpdateCompletionEnum;
    
public:
    UUpdateManager();
};

