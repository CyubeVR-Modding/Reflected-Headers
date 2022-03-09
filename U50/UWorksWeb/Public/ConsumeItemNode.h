#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemInstanceID -FallbackName=UWorksSteamItemInstanceID
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ConsumeItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ConsumeItemNode.generated.h"

class UConsumeItemNode;

UCLASS()
class UWORKSWEB_API UConsumeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FConsumeItemDelegate Completed;
    
    UConsumeItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UConsumeItemNode* ConsumeItemNode(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
};

