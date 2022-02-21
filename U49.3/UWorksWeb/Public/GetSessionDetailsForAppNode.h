#pragma once
#include "CoreMinimal.h"
#include "GetSessionDetailsForAppDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UWorksSessions.h"
#include "GetSessionDetailsForAppNode.generated.h"

class UGetSessionDetailsForAppNode;

UCLASS()
class UWORKSWEB_API UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetSessionDetailsForAppDelegate Completed;
    
    UGetSessionDetailsForAppNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language);
    
};

