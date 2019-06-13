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

// BlueprintGeneratedClass BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C
// 0x0008 (0x0898 - 0x0890)
class ABP_ThrownWeaponProjectile_C : public ABP_MordhauProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped);
	void ExecuteUbergraph_BP_ThrownWeaponProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
