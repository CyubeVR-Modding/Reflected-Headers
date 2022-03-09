#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagSource.h"
#include "GameplayTagsManager.generated.h"

class UDataTable;

UCLASS()
class GAMEPLAYTAGS_API UGameplayTagsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagSource> TagSources;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> GameplayTagTables;
    
public:
    UGameplayTagsManager();
};

