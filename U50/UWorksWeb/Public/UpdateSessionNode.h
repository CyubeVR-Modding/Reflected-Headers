#pragma once
#include "CoreMinimal.h"
#include "UWorksUsers.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksTitle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UpdateSessionNode.generated.h"

class UUpdateSessionNode;

UCLASS()
class UWORKSWEB_API UUpdateSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate Completed;
    
    UUpdateSessionNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateSessionNode* UpdateSessionNode(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

