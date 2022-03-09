#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "NiagaraPlatformSet.h"
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortOrderHint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool BIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionBlurEnabled;
    
    UNiagaraRendererProperties();
};

