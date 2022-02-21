#pragma once
#include "CoreMinimal.h"
#include "EIplConvolutionType.h"
#include "EIplAudioEngine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPhononMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EIplRayTracerType.h"
#include "EIplSimulationType.h"
#include "EIplSpatializationMethod.h"
#include "EQualitySettings.h"
#include "SteamAudioSettings.generated.h"

UCLASS(DefaultConfig)
class STEAMAUDIO_API USteamAudioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath OutputSubmix;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplAudioEngine AudioEngine;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplRayTracerType RayTracer;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplConvolutionType ConvolutionType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool ExportBSPGeometry;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool ExportLandscapeGeometry;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EPhononMaterial StaticMeshMaterialPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshLowFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshMidFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshHighFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshLowFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshMidFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshHighFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float StaticMeshScattering;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EPhononMaterial BSPMaterialPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPLowFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPMidFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPHighFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPLowFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPMidFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPHighFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float BSPScattering;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EPhononMaterial LandscapeMaterialPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeLowFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeMidFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeHighFreqAbsorption;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeLowFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeMidFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeHighFreqTransmission;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float LandscapeScattering;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 OcclusionSampleCount;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplSimulationType ListenerReverbSimulationType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float ListenerReverbContribution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 IndirectImpulseResponseOrder;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float IndirectImpulseResponseDuration;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplSpatializationMethod IndirectSpatializationMethod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float IrradianceMinDistance;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint32 MaxSources;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EQualitySettings RealtimeQualityPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 RealTimeCPUCoresPercentage;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 RealtimeBounces;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 RealtimeRays;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 RealtimeSecondaryRays;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EQualitySettings BakedQualityPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BakingCPUCoresPercentage;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BakedBounces;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BakedRays;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BakedSecondaryRays;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxComputeUnits;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float FractionComputeUnitsForIRUpdate;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 TANIndirectImpulseResponseOrder;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float TANIndirectImpulseResponseDuration;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint32 TANMaxSources;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 RadeonRaysBakingBatchSize;
    
    USteamAudioSettings();
};

