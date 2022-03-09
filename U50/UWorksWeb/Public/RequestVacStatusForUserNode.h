#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestVacStatusForUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestVacStatusForUserNode.generated.h"

class URequestVacStatusForUserNode;

UCLASS()
class UWORKSWEB_API URequestVacStatusForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserDelegate Completed;
    
    URequestVacStatusForUserNode();
    UFUNCTION(BlueprintCallable)
    static URequestVacStatusForUserNode* RequestVacStatusForUserNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

