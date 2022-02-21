#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPLowPassPeakFilter.h"
#include "BPEuroLowPassFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
#include "Transform_NetQuantize.h"
#include "EBPHMDWornState.h"
#include "EBPHMDDeviceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BPActorGripInformation.h"
#include "BPGripPair.h"
#include "VRExpansionFunctionLibrary.generated.h"

class USplineMeshComponent;
class UGripMotionControllerComponent;
class USplineComponent;
class UPrimitiveComponent;
class UObject;
class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class UVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVRExpansionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdatePeakLowPassFilter(UPARAM(Ref) FBPLowPassPeakFilter& TargetPeakFilter, FVector newSample);
    
    UFUNCTION(BlueprintCallable)
    static void SmoothUpdateLaserSpline(USplineComponent* LaserSplineComponent, TArray<USplineMeshComponent*> LaserSplineMeshComponents, FVector InStartLocation, FVector InEndLocation, FVector InForward, float LaserRadius);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectsIgnoreCollision(UPrimitiveComponent* Prim1, FName OptionalBoneName1, UPrimitiveComponent* Prim2, FName OptionalBoneName2, bool bIgnoreCollision);
    
    UFUNCTION(BlueprintCallable)
    static void RunEuroSmoothingFilter(UPARAM(Ref) FBPEuroLowPassFilter& TargetEuroFilter, FVector InRawValue, const float DeltaTime, FVector& SmoothedValue);
    
    UFUNCTION(BlueprintCallable)
    static void RotateAroundPivot(FRotator RotationDelta, FVector OriginalLocation, FRotator OriginalRotation, FVector PivotPoint, FVector& NewLocation, FRotator& NewRotation, bool bUseOriginalYawOnly);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPeakLowPassFilter(UPARAM(Ref) FBPLowPassPeakFilter& TargetPeakFilter);
    
    UFUNCTION(BlueprintCallable)
    static void ResetEuroSmoothingFilter(UPARAM(Ref) FBPEuroLowPassFilter& TargetEuroFilter);
    
    UFUNCTION(BlueprintCallable)
    static void NonAuthorityMinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize100 MakeVector_NetQuantize100(FVector InVector);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize10 MakeVector_NetQuantize10(FVector InVector);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize MakeVector_NetQuantize(FVector InVector);
    
    UFUNCTION(BlueprintPure)
    static FTransform_NetQuantize MakeTransform_NetQuantize(FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintPure)
    static void LowPassFilter_RollingAverage(FVector lastAverage, FVector newSample, FVector& newAverage, int32 numSamples);
    
    UFUNCTION(BlueprintPure)
    static void LowPassFilter_Exponential(FVector lastAverage, FVector newSample, FVector& newAverage, float sampleFactor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInVREditorPreviewOrGame();
    
    UFUNCTION(BlueprintPure)
    static bool IsInVREditorPreview();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetPeak_PeakLowPassFilter(UPARAM(Ref) FBPLowPassPeakFilter& TargetPeakFilter);
    
    UFUNCTION(BlueprintPure)
    static EBPHMDWornState GetIsHMDWorn();
    
    UFUNCTION(BlueprintPure)
    static bool GetIsHMDConnected();
    
    UFUNCTION(BlueprintPure)
    static bool GetIsActorMovable(AActor* ActorToCheck);
    
    UFUNCTION(BlueprintPure)
    static EBPHMDDeviceType GetHMDType();
    
    UFUNCTION(BlueprintPure)
    static FRotator GetHMDPureYaw(FRotator HMDRotation);
    
    UFUNCTION(BlueprintPure)
    static bool GetHandFromMotionSourceName(FName MotionSource, EControllerHand& hand);
    
    UFUNCTION(BlueprintPure)
    static void GetGripSlotInRangeByTypeName_Component(FName SlotType, UPrimitiveComponent* Component, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    
    UFUNCTION(BlueprintPure)
    static void GetGripSlotInRangeByTypeName(FName SlotType, AActor* Actor, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FBPActorGripInformation(const FBPActorGripInformation& A, const FBPActorGripInformation& B);
    
    UFUNCTION(BlueprintPure)
    static FTransform_NetQuantize Conv_TransformToTransformNetQuantize(const FTransform& InTransform);
    
    UFUNCTION(BlueprintPure)
    static UGripMotionControllerComponent* Conv_GripPairToMotionController(const FBPGripPair& GripPair);
    
    UFUNCTION(BlueprintPure)
    static uint8 Conv_GripPairToGripID(const FBPGripPair& GripPair);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize100 Conv_FVectorToFVectorNetQuantize100(const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize10 Conv_FVectorToFVectorNetQuantize10(const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize Conv_FVectorToFVectorNetQuantize(const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    static void BreakTransform_NetQuantize(const FTransform_NetQuantize& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    
    UFUNCTION(BlueprintPure)
    static FRotator BPQuat_FindBetween(FVector Vec1, FVector Vec2);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* AddSceneComponentByClass(UObject* Outer, TSubclassOf<USceneComponent> Class, const FTransform& ComponentRelativeTransform);
    
};

