#include "StaticMeshSimulationComponent.h"


void UStaticMeshSimulationComponent::ForceRecreatePhysicsState() {
}

UStaticMeshSimulationComponent::UStaticMeshSimulationComponent() {
    this->Simulating = true;
    this->bNotifyCollisions = false;
    this->ObjectType = (EObjectStateTypeEnum)72;
    this->Mass = 1.00f;
    this->CollisionType = (ECollisionTypeEnum)72;
    this->ImplicitType = (EImplicitTypeEnum)72;
    this->MinLevelSetResolution = 5;
    this->MaxLevelSetResolution = 10;
    this->InitialVelocityType = (EInitialVelocityTypeEnum)72;
    this->DamageThreshold = 0.00f;
    this->PhysicalMaterial = NULL;
    this->ChaosSolverActor = NULL;
}

