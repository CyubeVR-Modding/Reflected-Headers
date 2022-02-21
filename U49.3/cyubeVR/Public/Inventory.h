#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "Storage.h"
#include "EBlockTypeBP.h"
#include "Inventory.generated.h"

class AChestInternals;
class AInventory;

UCLASS()
class CYUBEVR_API AInventory : public AStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> QuickBarItemIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<bool> QuickBarItemsReal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EBlockTypeBP> QuickBarTools;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor BucketCrystalColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BucketCrystalChargeState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor BuildToolCrystalColorRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BuildToolCrystalChargeStateRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor BuildToolCrystalColorLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BuildToolCrystalChargeStateLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsLootableInventory;
    
    AInventory();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateUIEvent();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildToolCrystalProperties(FColor BuildToolCrystalColor_, float BuildToolCrystalChargeState_, bool bIsRightHand);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBucketCrystalProperties(FColor BucketCrystalColor_, float BucketCrystalChargeState_);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success, bool& NoMoreLeft);
    
    UFUNCTION(BlueprintCallable)
    void MoveOverPlayerInventoryToLootInventory(AInventory* LootInventory);
    
    UFUNCTION(BlueprintCallable)
    void MoveOverAllItemsFromOtherInventory(AInventory* FromInventory, bool& AnythingCollected);
    
    UFUNCTION(BlueprintCallable)
    void MoveOutside(int32 From, bool FromToolHolder);
    
    UFUNCTION(BlueprintCallable)
    void MoveInside(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot);
    
    UFUNCTION(BlueprintCallable)
    void DropOnToolsQuickBar(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    
    UFUNCTION(BlueprintCallable)
    void DropOnDelete(int32 From, bool FromToolHolder, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void Drop(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    
    UFUNCTION(BlueprintCallable)
    void AddItemFromChest(int32 FromChestIndex, AChestInternals* Chest, EBlockTypeBP Type, bool& success);
    
};

