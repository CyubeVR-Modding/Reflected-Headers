#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAssetPricesDelegateDelegate.h"
#include "GetAssetPricesNode.generated.h"

class UGetAssetPricesNode;

UCLASS()
class UWORKSWEB_API UGetAssetPricesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAssetPricesDelegate Completed;
    
    UGetAssetPricesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetPricesNode* GetAssetPricesNode(const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
};

