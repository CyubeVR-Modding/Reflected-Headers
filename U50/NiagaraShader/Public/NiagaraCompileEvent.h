#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSeverity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraCompileEvent.generated.h"

USTRUCT()
struct FNiagaraCompileEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraCompileEventSeverity Severity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid PinGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> StackGuids;
    
    NIAGARASHADER_API FNiagaraCompileEvent();
};

