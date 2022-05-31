#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ELivEye.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LivBlueprintFunctionLibrary.generated.h"

class UTextureRenderTarget2D;
class UObject;

UCLASS(Blueprintable)
class LIV_API ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULivBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OffsetCameraPoseForEye(ELivEye Eye, const FVector& CameraLocation, const FRotator& CameraRotation, FVector& EyeLocation, FRotator& EyeRotation);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, bool bForceLinearGamma, FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, float TargetGamma);
    
};

