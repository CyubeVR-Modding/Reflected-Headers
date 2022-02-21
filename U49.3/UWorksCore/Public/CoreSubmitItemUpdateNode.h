#pragma once
#include "CoreMinimal.h"
#include "UWorksUGCUpdateHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "SubmitItemUpdateDelegateDelegate.h"
#include "CoreSubmitItemUpdateNode.generated.h"

class UCoreSubmitItemUpdateNode;

UCLASS()
class UWORKSCORE_API UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubmitItemUpdateDelegate Completed;
    
    UCoreSubmitItemUpdateNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    
};

