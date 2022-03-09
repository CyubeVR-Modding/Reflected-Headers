#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetServerSteamIDsByIPDelegateDelegate.h"
#include "GetServerSteamIDsByIPNode.generated.h"

class UGetServerSteamIDsByIPNode;

UCLASS()
class UWORKSWEB_API UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerSteamIDsByIPDelegate Completed;
    
    UGetServerSteamIDsByIPNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServerSteamIDsByIPNode* GetServerSteamIDsByIPNode(const FString& Key, const FString& ServerIPs);
    
};

