#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "RuntimeMeshSectionProperties.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshSectionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERuntimeMeshUpdateFrequency UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMainPassRenderable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastsShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceOpaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHighPrecisionTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHighPrecisionTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 NumTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWants32BitIndices;
    
    FRuntimeMeshSectionProperties();
};

