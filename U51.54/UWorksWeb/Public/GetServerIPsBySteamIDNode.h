#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetServerIPsBySteamIDDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetServerIPsBySteamIDNode.generated.h"

class UGetServerIPsBySteamIDNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDDelegate Completed;
    
    UGetServerIPsBySteamIDNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(const FString& Key, FUWorksSteamID ServerSteamID);
    
};

