#pragma once
#include "CoreMinimal.h"
#include "PawnActionEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PawnActionStack.h"
#include "EAIRequestPriority.h"
#include "EPawnActionAbortState.h"
#include "PawnActionsComponent.generated.h"

class APawn;
class UPawnAction;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPawnActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APawn* ControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPawnActionStack> ActionStacks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPawnActionEvent> ActionEvents;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* CurrentAction;
    
public:
    UPawnActionsComponent();
    UFUNCTION(BlueprintCallable)
    bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(UPawnAction* ActionToAbort);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(UPawnAction* ActionToAbort);
    
};

