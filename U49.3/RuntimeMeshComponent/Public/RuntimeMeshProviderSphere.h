#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshProviderSphere.generated.h"

class UMaterialInterface;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderSphere : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MaxLOD;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLatitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLatitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLongitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLongitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float LODMultiplier;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SphereMaterial;
    
public:
    URuntimeMeshProviderSphere();
    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSphereMaterial(UMaterialInterface* InSphereMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLongitudeSegments(int32 InMinLongitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLatitudeSegments(int32 InMinLatitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLongitudeSegments(int32 InMaxLongitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLatitudeSegments(int32 InMaxLatitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetLODMultiplier(float InLODMultiplier);
    
    UFUNCTION(BlueprintPure)
    float GetSphereRadius() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetSphereMaterial() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinLongitudeSegments() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinLatitudeSegments() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLongitudeSegments() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLatitudeSegments() const;
    
    UFUNCTION(BlueprintPure)
    float GetLODMultiplier() const;
    
};

