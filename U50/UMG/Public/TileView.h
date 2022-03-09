#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EListItemAlignment -FallbackName=EListItemAlignment
#include "TileView.generated.h"

UCLASS()
class UMG_API UTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EListItemAlignment TileAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapHorizontalNavigation;
    
public:
    UTileView();
    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryHeight() const;
    
};

