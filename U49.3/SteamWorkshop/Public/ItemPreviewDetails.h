#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewTypeBP.h"
#include "ItemPreviewDetails.generated.h"

USTRUCT(BlueprintType)
struct FItemPreviewDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString urlOrVideoId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString originalFileName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EItemPreviewTypeBP ItemType;
    
    STEAMWORKSHOP_API FItemPreviewDetails();
};

