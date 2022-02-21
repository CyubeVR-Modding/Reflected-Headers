#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CancelAgreementDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CancelAgreementNode.generated.h"

class UCancelAgreementNode;

UCLASS()
class UWORKSWEB_API UCancelAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCancelAgreementDelegate Completed;
    
    UCancelAgreementNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelAgreementNode* CancelAgreementNode(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID);
    
};

