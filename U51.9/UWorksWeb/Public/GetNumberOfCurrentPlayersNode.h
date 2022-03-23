#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetNumberOfCurrentPlayersDelegateDelegate2.h"
#include "GetNumberOfCurrentPlayersNode.generated.h"

class UGetNumberOfCurrentPlayersNode;

UCLASS()
class UWORKSWEB_API UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate Completed;
    
    UGetNumberOfCurrentPlayersNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode(int32 AppID);
    
};

