#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StorageItem.h"
#include "EItemClass.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "Storage.generated.h"

class AChestInternals;

UCLASS()
class CYUBEVR_API AStorage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FStorageItem> items;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> UniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowShrinkOnLoad;
    
    AStorage();
    UFUNCTION(BlueprintCallable)
    bool TryToShrink();
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemStackable(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemPlacable(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintCallable)
    bool IsFullyEmpty();
    
    UFUNCTION(BlueprintCallable)
    static EItemClass GetItemClass(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmount(EBlockTypeBP Item, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    int32 FindFittingIndex(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    int32 FindAmountFree(EBlockTypeBP ToAdd, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSlotFromOtherChest(int32 ToIndex, int32 FromChestIndex, EBlockTypeBP Type, AChestInternals* OtherChest, bool& success);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(int32& Index, EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState);
    
};

