#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BPVRControllerProfile.h"
#include "VRGlobalSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig)
class UVRGlobalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxCCDPasses;
    
    UPROPERTY(Config, EditAnywhere)
    float OneEuroMinCutoff;
    
    UPROPERTY(Config, EditAnywhere)
    float OneEuroCutoffSlope;
    
    UPROPERTY(Config, EditAnywhere)
    float OneEuroDeltaCutoff;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FBPVRControllerProfile> ControllerProfiles;
    
    UVRGlobalSettings();
    UFUNCTION(BlueprintCallable)
    static void SaveControllerProfiles();
    
    UFUNCTION(BlueprintCallable)
    static void OverwriteControllerProfile(UPARAM(Ref) FBPVRControllerProfile& OverwritingProfile, bool bSaveOutToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadControllerProfileByName(FName ControllerProfileName, bool bSetAsCurrentProfile);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadControllerProfile(const FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentProfileName(bool& bHadLoadedProfile);
    
    UFUNCTION(BlueprintCallable)
    static FBPVRControllerProfile GetCurrentProfile(bool& bHadLoadedProfile);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBPVRControllerProfile> GetControllerProfiles();
    
    UFUNCTION(BlueprintCallable)
    static bool GetControllerProfile(FName ControllerProfileName, FBPVRControllerProfile& OutProfile);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteControllerProfile(FName ControllerProfileName, bool bSaveOutToConfig);
    
    UFUNCTION(BlueprintPure)
    static FTransform AdjustTransformByGivenControllerProfile(UPARAM(Ref) FBPVRControllerProfile& ControllerProfile, const FTransform& SocketTransform, bool bIsRightHand);
    
    UFUNCTION(BlueprintPure)
    static FTransform AdjustTransformByControllerProfile(FName OptionalControllerProfileName, const FTransform& SocketTransform, bool bIsRightHand);
    
    UFUNCTION(BlueprintCallable)
    static void AddControllerProfile(UPARAM(Ref) FBPVRControllerProfile& NewProfile, bool bSaveOutToConfig);
    
};

