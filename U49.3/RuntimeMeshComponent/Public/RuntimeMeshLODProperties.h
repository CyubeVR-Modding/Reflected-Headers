#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshLODProperties.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshLODProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanGetSectionsIndependently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanGetAllSectionsAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldMergeStaticSectionBuffers;
    
    FRuntimeMeshLODProperties();
};

