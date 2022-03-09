#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetExportedAssetsForUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetExportedAssetsForUserNode.generated.h"

class UGetExportedAssetsForUserNode;

UCLASS()
class UWORKSWEB_API UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserDelegate Completed;
    
    UGetExportedAssetsForUserNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
};

