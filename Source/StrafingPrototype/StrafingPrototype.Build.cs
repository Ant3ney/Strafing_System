// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StrafingPrototype : ModuleRules
{
	public StrafingPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
