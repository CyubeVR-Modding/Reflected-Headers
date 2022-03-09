#include "PhononReverbSourceSettings.h"

UPhononReverbSourceSettings::UPhononReverbSourceSettings() {
    this->SourceReverbSimulationType = EIplSimulationType::REALTIME;
    this->SourceReverbContribution = 1.00f;
}

