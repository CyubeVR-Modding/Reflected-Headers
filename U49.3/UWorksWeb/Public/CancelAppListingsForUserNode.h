#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CancelAppListingsForUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CancelAppListingsForUserNode.generated.h"

class UCancelAppListingsForUserNode;

UCLASS()
class UWORKSWEB_API UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCancelAppListingsForUserDelegate Completed;
    
    UCancelAppListingsForUserNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelAppListingsForUserNode* CancelAppListingsForUserNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    
};

