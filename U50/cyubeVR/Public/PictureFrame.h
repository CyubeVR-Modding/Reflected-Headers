#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LoadedPicture.h"
#include "PictureFrameProperties.h"
#include "MeshObject.h"
#include "PictureFrame.generated.h"

class UTexture2D;

UCLASS()
class CYUBEVR_API APictureFrame : public AMeshObject {
    GENERATED_BODY()
public:
    APictureFrame();
    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFrameProperties(FPictureFrameProperties Properties);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadImagesFromDisk(TArray<FLoadedPicture>& LoadedPictures);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FPictureFrameProperties GetFrameProperties();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyNewImage(const FLoadedPicture& NewLoadedPicture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyLoadedTexture(UTexture2D* LoadedTexture);
    
};

