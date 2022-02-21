#include "ConstantQNRTSettings.h"

UConstantQNRTSettings::UConstantQNRTSettings() {
    this->StartingFrequency = 40.00f;
    this->NumBands = 48;
    this->NumBandsPerOctave = 12.00f;
    this->AnalysisPeriod = 0.01f;
    this->bDownmixToMono = false;
    this->FFTSize = (EConstantQFFTSizeEnum)224;
    this->WindowType = (EFFTWindowType)224;
    this->SpectrumType = (EAudioSpectrumType)224;
    this->BandWidthStretch = 1.00f;
    this->CQTNormalization = (EConstantQNormalizationEnum)224;
    this->NoiseFloorDb = -60.00f;
}

