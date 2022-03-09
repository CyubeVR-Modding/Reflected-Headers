#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterScope.h"
#include "NiagaraParameterScopeInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraParameterScopeInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraParameterScope Scope;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString NamespaceString;
    
public:
    FNiagaraParameterScopeInfo();
};

