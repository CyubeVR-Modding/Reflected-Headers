#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DraftUnlockingPaper.generated.h"

UCLASS()
class CYUBEVR_API ADraftUnlockingPaper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP Type;
    
    ADraftUnlockingPaper();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDissolve(bool bWithType);
    
};

