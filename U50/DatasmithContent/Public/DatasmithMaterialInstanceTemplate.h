#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DatasmithObjectTemplate.h"
#include "DatasmithStaticParameterSetTemplate.h"
#include "DatasmithMaterialInstanceTemplate.generated.h"

class UMaterialInterface;
class UTexture;

UCLASS()
class DATASMITHCONTENT_API UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> VectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithStaticParameterSetTemplate StaticParameters;
    
    UDatasmithMaterialInstanceTemplate();
};

