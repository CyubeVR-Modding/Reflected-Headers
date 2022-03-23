#pragma once
#include "CoreMinimal.h"
#include "LiveLinkClearSubject.generated.h"

USTRUCT()
struct FLiveLinkClearSubject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkClearSubject();
};

