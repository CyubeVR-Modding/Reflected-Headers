#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetPersonaNameDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreSetPersonaNameNode.generated.h"

class UCoreSetPersonaNameNode;

UCLASS()
class UWORKSCORE_API UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetPersonaNameDelegate Completed;
    
    UCoreSetPersonaNameNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSetPersonaNameNode* SetPersonaNameNode(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
    
};

