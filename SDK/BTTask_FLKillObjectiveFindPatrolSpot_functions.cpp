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

// Function BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FLKillObjectiveFindPatrolSpot_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C.ReceiveExecuteAI");

	UBTTask_FLKillObjectiveFindPatrolSpot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C.ExecuteUbergraph_BTTask_FLKillObjectiveFindPatrolSpot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FLKillObjectiveFindPatrolSpot_C::ExecuteUbergraph_BTTask_FLKillObjectiveFindPatrolSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C.ExecuteUbergraph_BTTask_FLKillObjectiveFindPatrolSpot");

	UBTTask_FLKillObjectiveFindPatrolSpot_C_ExecuteUbergraph_BTTask_FLKillObjectiveFindPatrolSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
