#pragma once
#include "CoreMinimal.h"
#include "CustomBlockInfoForModsBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ManageModsWidgetParent.generated.h"

UCLASS(EditInlineNew)
class CYUBEVR_API UManageModsWidgetParent : public UUserWidget {
    GENERATED_BODY()
public:
    UManageModsWidgetParent();
    UFUNCTION(BlueprintCallable)
    void GetDraftsMod(bool bFromWorkshop, TArray<FCustomBlockInfoForModsBP>& DraftsInfoArray);
    
};

