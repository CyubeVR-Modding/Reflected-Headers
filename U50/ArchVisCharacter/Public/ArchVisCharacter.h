#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "ArchVisCharacter.generated.h"

UCLASS()
class ARCHVISCHARACTER_API AArchVisCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString LookUpAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString LookUpAtRateAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString TurnAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString TurnAtRateAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString MoveForwardAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString MoveRightAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MouseSensitivityScale_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MouseSensitivityScale_Yaw;
    
    AArchVisCharacter();
};

