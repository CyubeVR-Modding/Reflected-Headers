#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AddItemToFavoritesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CoreAddItemToFavoritesNode.generated.h"

class UCoreAddItemToFavoritesNode;

UCLASS()
class UWORKSCORE_API UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAddItemToFavoritesDelegate Completed;
    
    UCoreAddItemToFavoritesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
};

