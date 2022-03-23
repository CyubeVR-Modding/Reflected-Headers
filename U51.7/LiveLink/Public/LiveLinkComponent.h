#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "LiveLinkTickSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=SubjectFrameHandle -FallbackName=SubjectFrameHandle
#include "LiveLinkComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class LIVELINK_API ULiveLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLiveLinkTickSignature OnLiveLinkUpdated;
    
    ULiveLinkComponent();
    UFUNCTION(BlueprintCallable)
    void GetSubjectDataAtWorldTime(const FName SubjectName, const float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    
    UFUNCTION(BlueprintCallable)
    void GetSubjectDataAtSceneTime(const FName SubjectName, const FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    
    UFUNCTION(BlueprintCallable)
    void GetSubjectData(const FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    
    UFUNCTION(BlueprintCallable)
    void GetAvailableSubjectNames(TArray<FName>& SubjectNames);
    
};

