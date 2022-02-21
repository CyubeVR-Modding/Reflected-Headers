#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "BenchmarkResults.h"
#include "CubeGameInstance.generated.h"

class UTexture2D;
class UCustomBlockManager;
class USoundBase;
class UAudioComponent;
class UTexture2DArray;
class UTextureRenderTarget2D;
class UMaterialParameterCollection;

UCLASS(NonTransient)
class CYUBEVR_API UCubeGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool LoadExistingWorld;
    
    UPROPERTY(BlueprintReadOnly)
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LoadingScreenMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UAudioComponent* LoadingScreenMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomBlockManager* CBM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoLaterCBMInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AccurateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* TextureArrayMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* TextureArrayNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* TextureArraySnowMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* TextureArrayEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* EmptyNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* EmptyEmissiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* TestTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* LUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* MPC;
    
    UCubeGameInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateTextureArrays();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMPC(float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArraySize(UTexture2DArray* ArrayToResize, int32 NumSlices);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTextureArray(UTexture2DArray* TextureArray);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTexture2(UTexture2D* Texture, UTexture2D* TextureNew);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingVideo();
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingScreenMusic();
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingScreenMusic();
    
    UFUNCTION(BlueprintCallable)
    void SetupWorldLoad(bool LoadExistingWorld_, const FString& WorldName_, const FString& NewSeed_, TArray<FString> WorldNames, TArray<int32> WorldSeeds);
    
    UFUNCTION(BlueprintNativeEvent)
    void RenderCustomBlockLUT();
    
    UFUNCTION(BlueprintCallable)
    void LaterCBMInit();
    
    UFUNCTION(BlueprintCallable)
    void GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    void CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture);
    
    UFUNCTION(BlueprintCallable)
    void AddTextureToTextureArray(UTexture2DArray* TargetArray, UTexture2DArray* SourceArray);
    
};

