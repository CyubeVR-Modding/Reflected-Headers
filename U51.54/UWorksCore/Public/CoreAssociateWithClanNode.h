#pragma once
#include "CoreMinimal.h"
#include "AssociateWithClanDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreAssociateWithClanNode.generated.h"

class UCoreAssociateWithClanNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssociateWithClanDelegate Completed;
    
    UCoreAssociateWithClanNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);
    
};

