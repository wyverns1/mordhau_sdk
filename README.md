# mordhau_sdk
Dumped on June 13, 2019

### Usage

```
#include "SDK.h"

void init_sdk()
{
	const auto gname_addr = find_pattern("48 8B 05 ? ? ? ? 48 85 C0 75 5F");
	auto offset = *(uint32_t*)(gname_addr + 3);
	SDK::FName::GNames = (SDK::TNameEntryArray*)(*(uintptr_t*)(gname_addr + 7 + offset));

	const auto objects_addr = find_pattern("4C 8B 15 ? ? ? ? 8D 43 01");
	offset = *(int32_t*)(objects_addr + 3);
	SDK::TUObjectArray::g_objects = (uintptr_t)(objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);

	const auto total_objects_addr = find_pattern("44 8B 15 ? ? ? ? 45 33 C9 45 85 D2");
	offset = *(int32_t*)(total_objects_addr + 3);
	SDK::TUObjectArray::g_total_objects = (uintptr_t)(total_objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);

	const auto world_addr = find_pattern("48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01");
	offset = *(int32_t*)(world_addr + 3);
	gworld = (SDK::UWorld*)(*(uintptr_t*)(world_addr + 7 + offset));
}
```

### Useful files

```
#include "SDK\Basic.cpp"
#include "SDK\Engine_functions.cpp"
#include "SDK\CoreUObject_functions.cpp"
#include "SDK\Mordhau_functions.cpp"
```

### Credits

Hinnie (UnknownCheats)
CorrM (UnknownCheats)
Wyverns (UnknownCheats)
KN4CK3R (https://github.com/KN4CK3R)
