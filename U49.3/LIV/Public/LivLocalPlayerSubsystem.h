#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LivCaptureContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "LivLocalPlayerActivationDelegateDelegate.h"
#include "LivLocalPlayerSubsystem.generated.h"

class UPrimitiveComponent;
class ULivWorldSubsystem;
class AActor;
class ULocalPlayer;
class ULivCaptureBase;

UCLASS(BlueprintType)
class LIV_API ULivLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLivLocalPlayerActivationDelegate OnCaptureActivated;
    
    UPROPERTY(BlueprintAssignable)
    FLivLocalPlayerActivationDelegate OnCaptureDeactivated;
    
    UPROPERTY()
    FLivCaptureContext CaptureContext;
    
    ULivLocalPlayerSubsystem();
    UFUNCTION(BlueprintCallable)
    void ShowComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetCapture();
    
    UFUNCTION(BlueprintPure)
    bool IsCaptureActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void HideActor(AActor* InActor);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTrackingOriginTransform() const;
    
    UFUNCTION(BlueprintPure)
    ULocalPlayer* GetLocalPlayerBP() const;
    
    UFUNCTION(BlueprintPure)
    ULivWorldSubsystem* GetLivWorldSubsystem() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ULivCaptureBase> GetCaptureComponentClass() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenActors();
    
};

