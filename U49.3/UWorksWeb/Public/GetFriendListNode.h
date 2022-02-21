#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetFriendListDelegateDelegate.h"
#include "GetFriendListNode.generated.h"

class UGetFriendListNode;

UCLASS()
class UWORKSWEB_API UGetFriendListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFriendListDelegate Completed;
    
    UGetFriendListNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetFriendListNode* GetFriendListNode(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship);
    
};

