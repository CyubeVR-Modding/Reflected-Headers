#pragma once
#include "CoreMinimal.h"
#include "GetItemDailyRevenueDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetItemDailyRevenueNode.generated.h"

class UGetItemDailyRevenueNode;

UCLASS()
class UWORKSWEB_API UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetItemDailyRevenueDelegate Completed;
    
    UGetItemDailyRevenueNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetItemDailyRevenueNode* GetItemDailyRevenueNode(const FString& Key, int32 AppID, const FString& ItemId, int32 DateStart, int32 DateEnd);
    
};

