#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionFaceSourceType.h"
#include "RuntimeMeshCollisionSourceSectionInfo.generated.h"

class URuntimeMeshProvider;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionSourceSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<URuntimeMeshProvider> SourceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERuntimeMeshCollisionFaceSourceType SourceType;
    
    FRuntimeMeshCollisionSourceSectionInfo();
};

