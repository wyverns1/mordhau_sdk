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

// Function BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_FLKillObjPerceptionUpdate_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C.ReceiveTickAI");

	UBTService_FLKillObjPerceptionUpdate_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C.ExecuteUbergraph_BTService_FLKillObjPerceptionUpdate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_FLKillObjPerceptionUpdate_C::ExecuteUbergraph_BTService_FLKillObjPerceptionUpdate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C.ExecuteUbergraph_BTService_FLKillObjPerceptionUpdate");

	UBTService_FLKillObjPerceptionUpdate_C_ExecuteUbergraph_BTService_FLKillObjPerceptionUpdate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
