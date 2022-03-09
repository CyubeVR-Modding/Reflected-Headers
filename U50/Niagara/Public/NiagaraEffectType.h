#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraSystemScalabilitySettings.h"
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "ENiagaraCullReaction.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
#include "NiagaraEffectType.generated.h"

class UNiagaraSignificanceHandler;

UCLASS()
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
    UNiagaraEffectType();
};

