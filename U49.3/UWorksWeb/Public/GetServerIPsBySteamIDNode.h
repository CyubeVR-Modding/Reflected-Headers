#pragma once
#include "CoreMinimal.h"
#include "GetServerIPsBySteamIDDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetServerIPsBySteamIDNode.generated.h"

class UGetServerIPsBySteamIDNode;

UCLASS()
class UWORKSWEB_API UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetServerIPsBySteamIDDelegate Completed;
    
    UGetServerIPsBySteamIDNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(const FString& Key, FUWorksSteamID ServerSteamID);
    
};

