#pragma once
#include "CoreMinimal.h"
#include "DeleteAccountDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "DeleteAccountNode.generated.h"

class UDeleteAccountNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UDeleteAccountNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteAccountDelegate Completed;
    
    UDeleteAccountNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteAccountNode* DeleteAccountNode(const FString& Key, FUWorksSteamID SteamID);
    
};

