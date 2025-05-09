#pragma once

#include "UE/F/FCustomVersionContainer.h"
#include "UE/F/FGuid.h"
#include "UE/F/FPackageFileVersion.h"
#include "UE/F/FPackagePath.h"
#include "UE/U/UObject.h"

namespace UE
{
	class FLinkerLoad;
	class FWorldTileInfo;

	class UPackage :
		public UObject
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr{ FindObject<UClass>("Class /Script/CoreUObject.Package", EClassCastFlags::UClass) };
			return ptr;
		}

		// members
		std::uint8_t            dirty: 1;               // 28
		std::uint8_t            hasBeenFullyLoaded: 1;  // 29
		std::uint8_t            canBeImported: 1;       // 2A
		FGuid                   guid;                   // 2C
		std::uint32_t           packageFlagsPrivate;    // 3C
		std::uint64_t           packageId;              // 40 - FPackageId
		FPackagePath            loadedPath;             // 48
		FPackageFileVersion     linkerPackageVersion;   // 54
		std::int32_t            linkerLicenseeVersion;  // 5C
		FCustomVersionContainer linkerCustomVersion;    // 60
		FLinkerLoad*            linkerLoad;             // 70
		std::uint64_t           fileSize;               // 78
		FName                   fileName;               // 80
		std::uintptr_t          worldTileInfo;          // 88 - TUniquePtr<FWorldTileInfo>
	};
	static_assert(sizeof(UPackage) == 0x90);
}
