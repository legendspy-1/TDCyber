// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TopDcyber : ModuleRules
{
	public TopDcyber(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TopDcyber",
			"TopDcyber/Variant_Strategy",
			"TopDcyber/Variant_Strategy/UI",
			"TopDcyber/Variant_TwinStick",
			"TopDcyber/Variant_TwinStick/AI",
			"TopDcyber/Variant_TwinStick/Gameplay",
			"TopDcyber/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
