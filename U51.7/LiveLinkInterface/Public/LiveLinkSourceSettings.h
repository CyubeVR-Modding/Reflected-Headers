#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELiveLinkSourceMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSourceBufferManagementSettings.h"
#include "LiveLinkSourceSettings.generated.h"

class ULiveLinkSourceFactory;

UCLASS()
class LIVELINKINTERFACE_API ULiveLinkSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionString;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkSourceFactory> Factory;
    
    ULiveLinkSourceSettings();
};

