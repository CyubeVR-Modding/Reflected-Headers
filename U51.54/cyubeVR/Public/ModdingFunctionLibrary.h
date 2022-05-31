#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModTutorialEntry.h"
#include "ModdingFunctionLibrary.generated.h"

class AInventory;
class UObject;

UCLASS(Blueprintable)
class CYUBEVR_API UModdingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModdingFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static bool WriteStringToFileInModFolder(const FString& ModName, const FString& Filename, const FString& StringToWrite);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadStringFromFileInModFolder(const FString& ModName, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void GetModTutorials(TArray<FModTutorialEntry>& ModTutorials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventory* GetInventoryReference(const UObject* WorldContextObject);
    
};

