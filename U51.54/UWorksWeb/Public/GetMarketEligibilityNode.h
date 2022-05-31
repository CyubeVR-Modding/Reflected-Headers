#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetMarketEligibilityDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetMarketEligibilityNode.generated.h"

class UGetMarketEligibilityNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetMarketEligibilityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketEligibilityDelegate Completed;
    
    UGetMarketEligibilityNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketEligibilityNode* GetMarketEligibilityNode(const FString& Key, FUWorksSteamID SteamID);
    
};

