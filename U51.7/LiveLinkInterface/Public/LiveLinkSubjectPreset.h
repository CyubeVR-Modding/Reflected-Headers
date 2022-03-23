#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectKey.h"
#include "LiveLinkSubjectPreset.generated.h"

class ULiveLinkSubjectSettings;
class ULiveLinkRole;
class ULiveLinkVirtualSubject;

USTRUCT(BlueprintType)
struct FLiveLinkSubjectPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectKey Key;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULiveLinkSubjectSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULiveLinkVirtualSubject* VirtualSubject;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectPreset();
};

