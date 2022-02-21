#include "RuntimeCactus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ARuntimeCactus::SetType_Implementation(ETreeType NewType) {
}

void ARuntimeCactus::SetActive_Implementation() {
}

void ARuntimeCactus::ResetToPoolBP_Implementation() {
}

ARuntimeCactus::ARuntimeCactus() {
    this->SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CactusMesh"));
    this->Type = (ETreeType)16;
    this->damaged = false;
    this->bDestroyed = false;
}

