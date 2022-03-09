#pragma once
#include "CoreMinimal.h"
#include "OAISimpleDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIRequestID.h"
#include "EPathFollowingResult.h"
#include "AIAsyncTaskBlueprintProxy.generated.h"

UCLASS(MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOAISimpleDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOAISimpleDelegate OnFail;
    
    UAIAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    void OnMoveCompleted(FAIRequestID requestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

