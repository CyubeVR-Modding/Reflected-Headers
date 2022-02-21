#include "MockDataMeshTrackerComponent.h"

class UMRMeshComponent;

void UMockDataMeshTrackerComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMockDataMeshTrackerComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

UMockDataMeshTrackerComponent::UMockDataMeshTrackerComponent() {
    this->ScanWorld = true;
    this->RequestNormals = true;
    this->RequestVertexConfidence = false;
    this->VertexColorMode = (EMeshTrackerVertexColorMode)40;
    this->BlockVertexColors.AddDefaulted(6);
    this->UpdateInterval = 3.00f;
    this->MRMesh = NULL;
}

