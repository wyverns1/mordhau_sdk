#pragma once

// Name: MORDHAU, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HordeChestBase.BP_HordeChestBase_C
// 0x0034 (0x05D8 - 0x05A4)
class ABP_HordeChestBase_C : public ABP_BattleRoyaleChest_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Cost;                                                     // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailable;                                              // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x05C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeChestBase.BP_HordeChestBase_C");
		return ptr;
	}


	void UpdateVisuals();
	void SetAvailability(bool NewAvailable);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExecuteUbergraph_BP_HordeChestBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
