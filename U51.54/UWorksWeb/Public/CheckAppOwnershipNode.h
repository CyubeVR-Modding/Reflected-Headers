#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CheckAppOwnershipDelegateDelegate.h"
#include "CheckAppOwnershipNode.generated.h"

class UCheckAppOwnershipNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCheckAppOwnershipNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipDelegate Completed;
    
    UCheckAppOwnershipNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCheckAppOwnershipNode* CheckAppOwnershipNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

