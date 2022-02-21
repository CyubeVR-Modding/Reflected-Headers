#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ERuntimeMeshUpdateFrequency.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "ERuntimeMeshCollisionCookingMode.h"
#include "ERuntimeMeshThreadingPriority.h"
#include "RuntimeMeshComponentSettings.generated.h"

UCLASS(DefaultConfig, Config=RuntimeMeshComponent)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponentSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ERuntimeMeshUpdateFrequency DefaultUpdateFrequency;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUse32BitIndicesByDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseHighPrecisionTexCoordsByDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseHighPrecisionTangentsByDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCookCollisionAsync;
    
    UPROPERTY(Config, EditAnywhere)
    ERuntimeMeshCollisionCookingMode DefaultCookingMode;
    
    UPROPERTY(Config, EditAnywhere)
    FInt32Range MinMaxThreadPoolThreads;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SystemThreadDivisor;
    
    UPROPERTY(Config, EditAnywhere)
    ERuntimeMeshThreadingPriority ThreadPriority;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ThreadStackSize;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAllowedTimePerTick;
    
    URuntimeMeshComponentSettings();
};

