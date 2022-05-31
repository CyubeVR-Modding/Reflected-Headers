#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestClanOfficerListDelegateDelegate.h"
#include "CoreRequestClanOfficerListNode.generated.h"

class UCoreRequestClanOfficerListNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestClanOfficerListDelegate Completed;
    
    UCoreRequestClanOfficerListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
    
};

