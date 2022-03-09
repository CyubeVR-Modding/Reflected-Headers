#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EIplRayTracerType.h"
#include "EIplAudioEngine.h"
#include "EIplConvolutionType.h"
#include "EPhononMaterial.h"
#include "EIplSimulationType.h"
#include "EIplSpatializationMethod.h"
#include "EQualitySettings.h"
#include "SteamAudioSettings.generated.h"

UCLASS(DefaultConfig)
class STEAMAUDIO_API USteamAudioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftObjectPath OutputSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplAudioEngine AudioEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplRayTracerType RayTracer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplConvolutionType ConvolutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool ExportBSPGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool ExportLandscapeGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EPhononMaterial StaticMeshMaterialPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshLowFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshMidFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshHighFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshLowFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshMidFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshHighFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float StaticMeshScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EPhononMaterial BSPMaterialPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPLowFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPMidFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPHighFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPLowFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPMidFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPHighFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float BSPScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EPhononMaterial LandscapeMaterialPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeLowFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeMidFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeHighFreqAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeLowFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeMidFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeHighFreqTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LandscapeScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 OcclusionSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplSimulationType ListenerReverbSimulationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float ListenerReverbContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 IndirectImpulseResponseOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float IndirectImpulseResponseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplSpatializationMethod IndirectSpatializationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float IrradianceMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint32 MaxSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EQualitySettings RealtimeQualityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 RealTimeCPUCoresPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 RealtimeBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 RealtimeRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 RealtimeSecondaryRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EQualitySettings BakedQualityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BakingCPUCoresPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BakedBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BakedRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BakedSecondaryRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MaxComputeUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float FractionComputeUnitsForIRUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 TANIndirectImpulseResponseOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float TANIndirectImpulseResponseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint32 TANMaxSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 RadeonRaysBakingBatchSize;
    
    USteamAudioSettings();
};

