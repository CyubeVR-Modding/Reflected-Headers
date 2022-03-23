#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.h"
#include "LiveLinkSourceDebugInfo.generated.h"

USTRUCT()
struct FLiveLinkSourceDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 SnapshotIndex;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBufferAtSnapshot;
    
    LIVELINKINTERFACE_API FLiveLinkSourceDebugInfo();
};

