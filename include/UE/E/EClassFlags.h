#pragma once

namespace UE
{
	enum class EClassFlags : std::uint32_t
	{
		None = 0x00000000u,
		Abstract = 0x00000001u,
		DefaultConfig = 0x00000002u,
		Config = 0x00000004u,
		Transient = 0x00000008u,
		Optional = 0x00000010u,
		MatchedSerializers = 0x00000020u,
		ProjectUserConfig = 0x00000040u,
		Native = 0x00000080u,
		NoExport = 0x00000100u,
		NotPlaceable = 0x00000200u,
		PerObjectConfig = 0x00000400u,
		ReplicationDataIsSetUp = 0x00000800u,
		EditInlineNew = 0x00001000u,
		CollapseCategories = 0x00002000u,
		Interface = 0x00004000u,
		CustomConstructor = 0x00008000u,
		Const = 0x00010000u,
		NeedsDeferredDependencyLoading = 0x00020000u,
		CompiledFromBlueprint = 0x00040000u,
		MinimalAPI = 0x00080000u,
		RequiredAPI = 0x00100000u,
		DefaultToInstanced = 0x00200000u,
		TokenStreamAssembled = 0x00400000u,
		HasInstancedReference = 0x00800000u,
		Hidden = 0x01000000u,
		Deprecated = 0x02000000u,
		HideDropDown = 0x04000000u,
		GlobalUserConfig = 0x08000000u,
		Intrinsic = 0x10000000u,
		Constructed = 0x20000000u,
		ConfigDoNotCheckDefaults = 0x40000000u,
		NewerVersionExists = 0x80000000u,
	};
	REX_DEFINE_ENUM_CLASS_FLAGS(EClassFlags);
}
