#pragma once
#include "CoreMinimal.h"
#include "RemoveItemFromFavoritesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "CoreRemoveItemFromFavoritesNode.generated.h"

class UCoreRemoveItemFromFavoritesNode;

UCLASS()
class UWORKSCORE_API UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesDelegate Completed;
    
    UCoreRemoveItemFromFavoritesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRemoveItemFromFavoritesNode* RemoveItemFromFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    
};

