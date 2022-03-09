#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothingAssetBase -FallbackName=ClothingAssetBase
#include "ClothConfig_Legacy.h"
#include "ClothLODDataCommon.h"
#include "ClothingAssetCommon.generated.h"

class UPhysicsAsset;
class UClothingAssetCustomData;
class UClothConfigBase;
class UClothLODDataCommon_Legacy;

UCLASS(BlueprintType)
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothingAssetCommon : public UClothingAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditFixedSize, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClothConfigBase*> ClothConfigs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClothConfigBase* ClothSharedSimConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClothConfigBase* ClothSimConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClothConfigBase* ChaosClothSimConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UClothLODDataCommon_Legacy*> ClothLODData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FClothLODDataCommon> LODData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> LodMap;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> UsedBoneNames;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> UsedBoneIndices;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ReferenceBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClothingAssetCustomData* CustomData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothConfig_Legacy ClothConfig;
    
    UClothingAssetCommon();
};

