#include "SteamAudioSettings.h"

USteamAudioSettings::USteamAudioSettings() {
    this->AudioEngine = EIplAudioEngine::UNREAL;
    this->RayTracer = EIplRayTracerType::PHONON;
    this->ConvolutionType = EIplConvolutionType::PHONON;
    this->ExportBSPGeometry = true;
    this->ExportLandscapeGeometry = true;
    this->StaticMeshMaterialPreset = EPhononMaterial::GENERIC;
    this->StaticMeshLowFreqAbsorption = 0.10f;
    this->StaticMeshMidFreqAbsorption = 0.20f;
    this->StaticMeshHighFreqAbsorption = 0.30f;
    this->StaticMeshLowFreqTransmission = 0.10f;
    this->StaticMeshMidFreqTransmission = 0.05f;
    this->StaticMeshHighFreqTransmission = 0.03f;
    this->StaticMeshScattering = 0.05f;
    this->BSPMaterialPreset = EPhononMaterial::GENERIC;
    this->BSPLowFreqAbsorption = 0.10f;
    this->BSPMidFreqAbsorption = 0.20f;
    this->BSPHighFreqAbsorption = 0.30f;
    this->BSPLowFreqTransmission = 0.10f;
    this->BSPMidFreqTransmission = 0.05f;
    this->BSPHighFreqTransmission = 0.03f;
    this->BSPScattering = 0.05f;
    this->LandscapeMaterialPreset = EPhononMaterial::GENERIC;
    this->LandscapeLowFreqAbsorption = 0.10f;
    this->LandscapeMidFreqAbsorption = 0.20f;
    this->LandscapeHighFreqAbsorption = 0.30f;
    this->LandscapeLowFreqTransmission = 0.10f;
    this->LandscapeMidFreqTransmission = 0.05f;
    this->LandscapeHighFreqTransmission = 0.03f;
    this->LandscapeScattering = 0.05f;
    this->OcclusionSampleCount = 128;
    this->ListenerReverbSimulationType = EIplSimulationType::DISABLED;
    this->ListenerReverbContribution = 1.00f;
    this->IndirectImpulseResponseOrder = 1;
    this->IndirectImpulseResponseDuration = 1.00f;
    this->IndirectSpatializationMethod = EIplSpatializationMethod::PANNING;
    this->IrradianceMinDistance = 1.00f;
    this->MaxSources = 32;
    this->RealtimeQualityPreset = EQualitySettings::LOW;
    this->RealTimeCPUCoresPercentage = 5;
    this->RealtimeBounces = 2;
    this->RealtimeRays = 8192;
    this->RealtimeSecondaryRays = 512;
    this->BakedQualityPreset = EQualitySettings::LOW;
    this->BakingCPUCoresPercentage = 5;
    this->BakedBounces = 128;
    this->BakedRays = 16384;
    this->BakedSecondaryRays = 2048;
    this->MaxComputeUnits = 8;
    this->FractionComputeUnitsForIRUpdate = 0.50f;
    this->TANIndirectImpulseResponseOrder = 1;
    this->TANIndirectImpulseResponseDuration = 1.00f;
    this->TANMaxSources = 32;
    this->RadeonRaysBakingBatchSize = 1;
}

