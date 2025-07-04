// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LacHu_DuckDuckKazoo : ModuleRules
{
	public LacHu_DuckDuckKazoo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
