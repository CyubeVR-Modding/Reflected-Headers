#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "IntervalGizmo.generated.h"

class UGizmoTransformChangeStateTarget;
class UPrimitiveComponent;
class UTransformProxy;
class UGizmoComponentAxisSource;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UIntervalGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoTransformChangeStateTarget* StateTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisZSource;
    
public:
    UIntervalGizmo();
};

