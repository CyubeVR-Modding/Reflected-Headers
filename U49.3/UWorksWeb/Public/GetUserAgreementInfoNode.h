#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetUserAgreementInfoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserAgreementInfoNode.generated.h"

class UGetUserAgreementInfoNode;

UCLASS()
class UWORKSWEB_API UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserAgreementInfoDelegate Completed;
    
    UGetUserAgreementInfoNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserAgreementInfoNode* GetUserAgreementInfoNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

