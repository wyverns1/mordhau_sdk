// Name: MORDHAU, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.h"

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Tier0UpperChestWearable.BP_Tier0UpperChestWearable_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Tier0UpperChestWearable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tier0UpperChestWearable.BP_Tier0UpperChestWearable_C.UserConstructionScript");

	UBP_Tier0UpperChestWearable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
