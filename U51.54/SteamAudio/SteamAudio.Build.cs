using UnrealBuildTool;

public class SteamAudio : ModuleRules {
    public SteamAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
