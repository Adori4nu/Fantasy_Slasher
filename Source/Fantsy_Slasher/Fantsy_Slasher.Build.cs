// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fantsy_Slasher : ModuleRules
{
	public Fantsy_Slasher(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HairStrandsCore", "GeometryCollectionEngine", "Niagara", "UMG", "AIModule" });
	}
}
