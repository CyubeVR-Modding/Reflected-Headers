#pragma once
#include "CoreMinimal.h"
#include "CancelAgreementDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CancelAgreementNode.generated.h"

class UCancelAgreementNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCancelAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAgreementDelegate Completed;
    
    UCancelAgreementNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelAgreementNode* CancelAgreementNode(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID);
    
};

