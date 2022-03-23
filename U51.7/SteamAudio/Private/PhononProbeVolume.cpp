#include "PhononProbeVolume.h"
#include "PhononProbeComponent.h"

APhononProbeVolume::APhononProbeVolume() {
    this->PlacementStrategy = EPhononProbePlacementStrategy::UNIFORM_FLOOR;
    this->HorizontalSpacing = 400.00f;
    this->HeightAboveFloor = 150.00f;
    this->NumProbes = 0;
    this->ProbeDataSize = 0;
    this->PhononProbeComponent = CreateDefaultSubobject<UPhononProbeComponent>(TEXT("PhononProbeComponent0"));
}

