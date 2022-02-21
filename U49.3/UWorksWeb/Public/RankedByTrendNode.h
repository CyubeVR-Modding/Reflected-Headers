#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RankedByTrendDelegateDelegate.h"
#include "RankedByTrendNode.generated.h"

class URankedByTrendNode;

UCLASS()
class UWORKSWEB_API URankedByTrendNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRankedByTrendDelegate Completed;
    
    URankedByTrendNode();
    UFUNCTION(BlueprintCallable)
    static URankedByTrendNode* RankedByTrendNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

