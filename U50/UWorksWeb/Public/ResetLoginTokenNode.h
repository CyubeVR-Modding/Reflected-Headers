#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ResetLoginTokenDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ResetLoginTokenNode.generated.h"

class UResetLoginTokenNode;

UCLASS()
class UWORKSWEB_API UResetLoginTokenNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResetLoginTokenDelegate Completed;
    
    UResetLoginTokenNode();
    UFUNCTION(BlueprintCallable)
    static UResetLoginTokenNode* ResetLoginTokenNode(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

