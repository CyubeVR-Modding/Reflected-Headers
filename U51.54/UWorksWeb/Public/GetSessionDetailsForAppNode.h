#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetSessionDetailsForAppDelegateDelegate.h"
#include "UWorksSessions.h"
#include "GetSessionDetailsForAppNode.generated.h"

class UGetSessionDetailsForAppNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSessionDetailsForAppDelegate Completed;
    
    UGetSessionDetailsForAppNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language);
    
};

