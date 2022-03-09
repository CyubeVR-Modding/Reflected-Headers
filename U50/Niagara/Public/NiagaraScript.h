#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraScriptBase -FallbackName=NiagaraScriptBase
#include "NiagaraBoundParameter.h"
#include "NiagaraScriptExecutionParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ENiagaraScriptUsage.h"
#include "NiagaraParameterStore.h"
#include "NiagaraVMExecutableDataId.h"
#include "NiagaraVMExecutableData.h"
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(MinimalAPI)
class UNiagaraScript : public UNiagaraScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraScriptUsage Usage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 UsageIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid UsageId;
    
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UNiagaraScript();
    UFUNCTION(BlueprintCallable)
    void RaiseOnGPUCompilationComplete();
    
};

