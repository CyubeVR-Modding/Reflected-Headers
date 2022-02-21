#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PaperTileInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TileMapBlueprintLibrary.generated.h"

class UPaperTileSet;

UCLASS(BlueprintType)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTileMapBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static FPaperTileInfo MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    
    UFUNCTION(BlueprintPure)
    static FName GetTileUserData(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTileTransform(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintPure)
    static void BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
    
};

