#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestClanOfficerListDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreRequestClanOfficerListNode.generated.h"

class UCoreRequestClanOfficerListNode;

UCLASS()
class UWORKSCORE_API UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestClanOfficerListDelegate Completed;
    
    UCoreRequestClanOfficerListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
    
};

