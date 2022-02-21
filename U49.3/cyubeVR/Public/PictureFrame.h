#pragma once
#include "CoreMinimal.h"
#include "LoadedPicture.h"
#include "MeshObject.h"
#include "PictureFrameProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PictureFrame.generated.h"

class UTexture2D;

UCLASS()
class CYUBEVR_API APictureFrame : public AMeshObject {
    GENERATED_BODY()
public:
    APictureFrame();
    UFUNCTION()
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetFrameProperties(FPictureFrameProperties Properties);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadImagesFromDisk(TArray<FLoadedPicture>& LoadedPictures);
    
    UFUNCTION(BlueprintNativeEvent)
    FPictureFrameProperties GetFrameProperties();
    
    UFUNCTION()
    FVector GetActorCustomLocation();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyNewImage(const FLoadedPicture& NewLoadedPicture);
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyLoadedTexture(UTexture2D* LoadedTexture);
    
};

