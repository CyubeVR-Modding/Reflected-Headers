#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBlockTypeBP.h"
#include "CustomBlockInfoForBP.h"
#include "CraftingListParent.generated.h"

UCLASS(EditInlineNew)
class CYUBEVR_API UCraftingListParent : public UUserWidget {
    GENERATED_BODY()
public:
    UCraftingListParent();
    UFUNCTION(BlueprintCallable)
    void GetDraftsMod(TArray<FCustomBlockInfoForBP>& DraftsInfoArray);
    
    UFUNCTION(BlueprintCallable)
    void GetDrafts(TArray<EBlockTypeBP>& DraftsArray);
    
    UFUNCTION(BlueprintCallable)
    TMap<EBlockTypeBP, int32> GetDraftAmounts(EBlockTypeBP Type, int32 UniqueId);
    
};

