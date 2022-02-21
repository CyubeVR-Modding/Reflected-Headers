#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetHistoryCommandDetailsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetHistoryCommandDetailsNode.generated.h"

class UGetHistoryCommandDetailsNode;

UCLASS()
class UWORKSWEB_API UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetHistoryCommandDetailsDelegate Completed;
    
    UGetHistoryCommandDetailsNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetHistoryCommandDetailsNode* GetHistoryCommandDetailsNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
};

