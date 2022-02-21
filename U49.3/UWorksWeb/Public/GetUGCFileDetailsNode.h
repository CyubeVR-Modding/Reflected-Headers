#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetUGCFileDetailsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUGCFileDetailsNode.generated.h"

class UGetUGCFileDetailsNode;

UCLASS()
class UWORKSWEB_API UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUGCFileDetailsDelegate Completed;
    
    UGetUGCFileDetailsNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUGCFileDetailsNode* GetUGCFileDetailsNode(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    
};

