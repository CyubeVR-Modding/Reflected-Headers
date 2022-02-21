#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetItemPaymentRulesDelegateDelegate.h"
#include "SetItemPaymentRulesMinimalDelegateDelegate.h"
#include "UWorksAssociatedWorkshopFiles.h"
#include "UWorksPartnerAccounts.h"
#include "UWorksRequestWebSetItemPaymentRules.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetItemPaymentRulesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetItemPaymentRulesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetItemPaymentRules();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

