#pragma once

#include "UE/T/TObjectPtr.h"

namespace UE
{
	class UClass;

	template <class T>
	class TSubclassOf
	{
	public:
		// members
		TObjectPtr<UClass> _class;  // 00
	};
	static_assert(sizeof(TSubclassOf<void*>) == 0x08);
}
