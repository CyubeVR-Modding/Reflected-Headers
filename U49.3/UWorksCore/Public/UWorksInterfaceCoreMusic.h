#pragma once
#include "CoreMinimal.h"
#include "PlaybackStatusHasChangedDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "VolumeHasChangedDelegateDelegate.h"
#include "EUWorksAudioPlaybackStatus.h"
#include "UWorksInterfaceCoreMusic.generated.h"

class UUWorksInterfaceCoreMusic;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlaybackStatusHasChangedDelegate PlaybackStatusHasChanged;
    
    UPROPERTY(BlueprintAssignable)
    FVolumeHasChangedDelegate VolumeHasChanged;
    
    UUWorksInterfaceCoreMusic();
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayPrevious();
    
    UFUNCTION(BlueprintCallable)
    void PlayNext();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable)
    EUWorksAudioPlaybackStatus GetPlaybackStatus();
    
    UFUNCTION(BlueprintPure)
    static UUWorksInterfaceCoreMusic* GetMusic();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool BIsEnabled();
    
};

