#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserAgreementInfoDelegateDelegate.h"
#include "GetUserAgreementInfoNode.generated.h"

class UGetUserAgreementInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoDelegate Completed;
    
    UGetUserAgreementInfoNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserAgreementInfoNode* GetUserAgreementInfoNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

