// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class IMGD4000_Tutorial_4Target : TargetRules
{
	public IMGD4000_Tutorial_4Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "IMGD4000_Tutorial_4" } );
	}
}
