#pragma once
#include "CoreMinimal.h"
#include "RankedByPublicationOrderDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RankedByPublicationOrderNode.generated.h"

class URankedByPublicationOrderNode;

UCLASS()
class UWORKSWEB_API URankedByPublicationOrderNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRankedByPublicationOrderDelegate Completed;
    
    URankedByPublicationOrderNode();
    UFUNCTION(BlueprintCallable)
    static URankedByPublicationOrderNode* RankedByPublicationOrderNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

