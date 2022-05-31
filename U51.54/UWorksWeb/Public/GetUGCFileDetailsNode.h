#pragma once
#include "CoreMinimal.h"
#include "GetUGCFileDetailsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUGCFileDetailsNode.generated.h"

class UGetUGCFileDetailsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUGCFileDetailsDelegate Completed;
    
    UGetUGCFileDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUGCFileDetailsNode* GetUGCFileDetailsNode(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    
};

