#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetUGCUsedByGCDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetUGCUsedByGCNode.generated.h"

class USetUGCUsedByGCNode;

UCLASS()
class UWORKSWEB_API USetUGCUsedByGCNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetUGCUsedByGCDelegate Completed;
    
    USetUGCUsedByGCNode();
    UFUNCTION(BlueprintCallable)
    static USetUGCUsedByGCNode* SetUGCUsedByGCNode(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

