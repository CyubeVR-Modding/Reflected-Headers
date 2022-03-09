#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.h"
#include "ENiagaraScriptParameterUsage.h"
#include "NiagaraVariableMetaData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVariableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditorSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInlineEditConditionToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraInputConditionMetadata EditCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraInputConditionMetadata VisibleCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> PropertyMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentAttribute;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName ScopeName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraScriptParameterUsage Usage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsStaticSwitch;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StaticSwitchDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bAddedToNodeGraphDeepCopy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOutputIsPersistent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName CachedNamespacelessVariableName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCreatedInSystemEditor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseLegacyNameString;
    
public:
    FNiagaraVariableMetaData();
};

