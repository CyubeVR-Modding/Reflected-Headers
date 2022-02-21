#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPersonaStateBP.h"
#include "UInt64.h"
#include "SteamUGCUpdateHandle.h"
#include "SteamAppId.h"
#include "UInt32.h"
#include "SteamDepotId.h"
#include "SteamUGCItemId.h"
#include "SteamUGCHandle.h"
#include "ESteamSupportedLanguages.h"
#include "SteamDelegateOnGameOverlayActivatedDynDelegate.h"
#include "SteamGeneralLibrary.generated.h"

UCLASS(BlueprintType)
class STEAMGENERAL_API USteamGeneralLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamGeneralLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 Uint64Array_Remove(UPARAM(Ref) TArray<FUInt64>& Values, FUInt64 Value);
    
    UFUNCTION(BlueprintPure)
    static int32 Uint64Array_Find(const TArray<FUInt64>& Values, FUInt64 Value);
    
    UFUNCTION(BlueprintPure)
    static bool Uint64Array_Contains(const TArray<FUInt64>& Values, FUInt64 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 Uint64Array_AddUnique(UPARAM(Ref) TArray<FUInt64>& Values, FUInt64 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 Uint32Array_Remove(UPARAM(Ref) TArray<FUInt32>& Values, FUInt32 Value);
    
    UFUNCTION(BlueprintPure)
    static int32 Uint32Array_Find(const TArray<FUInt32>& Values, FUInt32 Value);
    
    UFUNCTION(BlueprintPure)
    static bool Uint32Array_Contains(const TArray<FUInt32>& Values, FUInt32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 Uint32Array_AddUnique(UPARAM(Ref) TArray<FUInt32>& Values, FUInt32 Value);
    
    UFUNCTION(BlueprintPure)
    static FString ToString_UInt64(const FUInt64& Value);
    
    UFUNCTION(BlueprintPure)
    static FString ToString_UInt32(const FUInt32& Value);
    
    UFUNCTION(BlueprintPure)
    static FString ToString_SteamItemId(const FSteamUGCItemId& ID);
    
    UFUNCTION(BlueprintPure)
    static FString ToString_SteamDepotId(const FSteamDepotId& ID);
    
    UFUNCTION(BlueprintPure)
    static FString ToString_SteamAppId(const FSteamAppId& ID);
    
    UFUNCTION(BlueprintPure)
    static bool SteamUpdateHandle_IsValid(const FSteamUGCUpdateHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamUGCItemIdArray_Remove(UPARAM(Ref) TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    
    UFUNCTION(BlueprintPure)
    static int32 SteamUGCItemIdArray_Find(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    
    UFUNCTION(BlueprintPure)
    static bool SteamUGCItemIdArray_Contains(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamUGCItemIdArray_AddUnique(UPARAM(Ref) TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    
    UFUNCTION(BlueprintPure)
    static bool SteamUGCHandle_IsValid(const FSteamUGCHandle& Handle);
    
    UFUNCTION(BlueprintPure)
    static bool SteamQueryHandle_IsValid(const FSteamUGCQueryHandle& Handle);
    
    UFUNCTION(BlueprintPure)
    static EPersonaStateBP SteamGeneral_GetUserState();
    
    UFUNCTION(BlueprintPure)
    static FString SteamGeneral_GetUserName();
    
    UFUNCTION(BlueprintPure)
    static EPersonaStateBP SteamGeneral_GetFriendState(FUInt64 steamUserId);
    
    UFUNCTION(BlueprintPure)
    static FString SteamGeneral_GetFriendName(FUInt64 steamUserId);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamGeneral_ActivateGameOverlayToWebPage(const FString& webpage);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamDepotIdArray_Remove(UPARAM(Ref) TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    
    UFUNCTION(BlueprintPure)
    static int32 SteamDepotIdArray_Find(const TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    
    UFUNCTION(BlueprintPure)
    static bool SteamDepotIdArray_Contains(const TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamDepotIdArray_AddUnique(UPARAM(Ref) TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnGameOverlayActivated_Unbind(FSteamDelegateOnGameOverlayActivatedDyn delegateToCall);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnGameOverlayActivated_Bind(FSteamDelegateOnGameOverlayActivatedDyn delegateToCall);
    
    UFUNCTION(BlueprintPure)
    static FString SteamConvertLanguageToLanguageCode(ESteamSupportedLanguages Language);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamAppIdArray_Remove(UPARAM(Ref) TArray<FSteamAppId>& Values, FSteamAppId Value);
    
    UFUNCTION(BlueprintPure)
    static int32 SteamAppIdArray_Find(const TArray<FSteamAppId>& Values, FSteamAppId Value);
    
    UFUNCTION(BlueprintPure)
    static bool SteamAppIdArray_Contains(const TArray<FSteamAppId>& Values, FSteamAppId Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamAppIdArray_AddUnique(UPARAM(Ref) TArray<FSteamAppId>& Values, FSteamAppId Value);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_UInt64(FUInt64 A, FUInt64 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_UInt32(FUInt32 A, FUInt32 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_SteamDepotId(FSteamDepotId A, FSteamDepotId B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_SteamAppId(FSteamAppId A, FSteamAppId B);
    
    UFUNCTION(BlueprintPure)
    static bool IsSteamInitialized();
    
    UFUNCTION(BlueprintPure)
    static FSteamAppId GetSteamAppId();
    
    UFUNCTION(BlueprintPure)
    static FUInt64 FromString_UInt64(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FUInt32 FromString_UInt32(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_UInt64(FUInt64 A, FUInt64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_UInt32(FUInt32 A, FUInt32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_SteamDepotId(FSteamDepotId A, FSteamDepotId B);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_SteamAppId(FSteamAppId A, FSteamAppId B);
    
    UFUNCTION(BlueprintCallable)
    static bool BreakUInt64(const FUInt64& InVal, int32& OutVal);
    
    UFUNCTION(BlueprintCallable)
    static bool BreakUInt32(const FUInt32& InVal, int32& OutVal);
    
};

