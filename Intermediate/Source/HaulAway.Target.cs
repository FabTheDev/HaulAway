using UnrealBuildTool;

public class HaulAwayTarget : TargetRules
{
	public HaulAwayTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("HaulAway");
	}
}
