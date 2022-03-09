#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetMemoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetMemoNode.generated.h"

class USetMemoNode;

UCLASS()
class UWORKSWEB_API USetMemoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetMemoDelegate Completed;
    
    USetMemoNode();
    UFUNCTION(BlueprintCallable)
    static USetMemoNode* SetMemoNode(const FString& Key, FUWorksSteamID SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

