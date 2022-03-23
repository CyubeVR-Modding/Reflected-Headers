#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LightReceiveInterface.generated.h"

class AActor;
class UMeshComponent;

UINTERFACE(MinimalAPI)
class ULightReceiveInterface : public UInterface {
    GENERATED_BODY()
};

class ILightReceiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool UseLightAroundValue() PURE_VIRTUAL(UseLightAroundValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool UseActorCustomLocation() PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool TickReceiveLight() PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void LightInterfaceBeginPlay(AActor* ThisActor) PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LightInterfaceBeginDestroy(AActor* ThisActor) PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<UMeshComponent*> GetMeshComponents() PURE_VIRTUAL(GetMeshComponents, return TArray<UMeshComponent*>(););
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetActorCustomLocation() PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

