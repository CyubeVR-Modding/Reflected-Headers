#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetItemPaymentRulesDelegateDelegate.h"
#include "UWorksAssociatedWorkshopFiles.h"
#include "UWorksPartnerAccounts.h"
#include "SetItemPaymentRulesNode.generated.h"

class USetItemPaymentRulesNode;

UCLASS()
class UWORKSWEB_API USetItemPaymentRulesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetItemPaymentRulesDelegate Completed;
    
    USetItemPaymentRulesNode();
    UFUNCTION(BlueprintCallable)
    static USetItemPaymentRulesNode* SetItemPaymentRulesNode(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

