#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetMarketEligibilityDelegateDelegate.h"
#include "GetMarketEligibilityNode.generated.h"

class UGetMarketEligibilityNode;

UCLASS()
class UWORKSWEB_API UGetMarketEligibilityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetMarketEligibilityDelegate Completed;
    
    UGetMarketEligibilityNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketEligibilityNode* GetMarketEligibilityNode(const FString& Key, FUWorksSteamID SteamID);
    
};

