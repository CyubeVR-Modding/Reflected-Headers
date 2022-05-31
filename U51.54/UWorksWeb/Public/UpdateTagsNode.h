#pragma once
#include "CoreMinimal.h"
#include "UpdateTagsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UpdateTagsNode.generated.h"

class UUpdateTagsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUpdateTagsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTagsDelegate Completed;
    
    UUpdateTagsNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateTagsNode* UpdateTagsNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

