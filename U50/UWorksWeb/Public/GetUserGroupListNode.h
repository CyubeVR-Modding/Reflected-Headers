#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserGroupListDelegateDelegate.h"
#include "GetUserGroupListNode.generated.h"

class UGetUserGroupListNode;

UCLASS()
class UWORKSWEB_API UGetUserGroupListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserGroupListDelegate Completed;
    
    UGetUserGroupListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserGroupListNode* GetUserGroupListNode(const FString& Key, FUWorksSteamID SteamID);
    
};

