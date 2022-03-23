#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetBanStatusDelegateDelegate.h"
#include "SetBanStatusNode.generated.h"

class USetBanStatusNode;

UCLASS()
class UWORKSWEB_API USetBanStatusNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetBanStatusDelegate Completed;
    
    USetBanStatusNode();
    UFUNCTION(BlueprintCallable)
    static USetBanStatusNode* SetBanStatusNode(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

