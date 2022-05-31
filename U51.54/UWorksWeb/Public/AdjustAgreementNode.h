#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AdjustAgreementDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "AdjustAgreementNode.generated.h"

class UAdjustAgreementNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UAdjustAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdjustAgreementDelegate Completed;
    
    UAdjustAgreementNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAdjustAgreementNode* AdjustAgreementNode(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FString& NextProcessDate);
    
};

