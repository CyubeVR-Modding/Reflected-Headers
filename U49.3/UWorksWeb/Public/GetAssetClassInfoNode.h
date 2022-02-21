#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAssetClassInfoDelegateDelegate.h"
#include "GetAssetClassInfoNode.generated.h"

class UGetAssetClassInfoNode;

UCLASS()
class UWORKSWEB_API UGetAssetClassInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAssetClassInfoDelegate Completed;
    
    UGetAssetClassInfoNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetClassInfoNode* GetAssetClassInfoNode(const FString& Key, int32 AppID, int32 ClassCount, const FString& ClassID0, const FString& Language, const FString& InstanceID0);
    
};

