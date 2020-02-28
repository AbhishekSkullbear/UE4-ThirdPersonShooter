// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_TPSWeapon_generated_h
#error "TPSWeapon.generated.h already included, missing '#pragma once' in TPSWeapon.h"
#endif
#define THIRDPERSONSHOOTER_TPSWeapon_generated_h

#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSWeapon(); \
	friend struct Z_Construct_UClass_ATPSWeapon_Statics; \
public: \
	DECLARE_CLASS(ATPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSWeapon)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSWeapon(); \
	friend struct Z_Construct_UClass_ATPSWeapon_Statics; \
public: \
	DECLARE_CLASS(ATPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSWeapon)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSWeapon(ATPSWeapon&&); \
	NO_API ATPSWeapon(const ATPSWeapon&); \
public:


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSWeapon(ATPSWeapon&&); \
	NO_API ATPSWeapon(const ATPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSWeapon)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ATPSWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ATPSWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ATPSWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectBlood() { return STRUCT_OFFSET(ATPSWeapon, ImpactEffectBlood); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectConcrete() { return STRUCT_OFFSET(ATPSWeapon, ImpactEffectConcrete); } \
	FORCEINLINE static uint32 __PPO__TrailEffect() { return STRUCT_OFFSET(ATPSWeapon, TrailEffect); } \
	FORCEINLINE static uint32 __PPO__TrailEffectParam() { return STRUCT_OFFSET(ATPSWeapon, TrailEffectParam); } \
	FORCEINLINE static uint32 __PPO__weaponIcon() { return STRUCT_OFFSET(ATPSWeapon, weaponIcon); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(ATPSWeapon, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__fireRate() { return STRUCT_OFFSET(ATPSWeapon, fireRate); } \
	FORCEINLINE static uint32 __PPO__magazineSize() { return STRUCT_OFFSET(ATPSWeapon, magazineSize); } \
	FORCEINLINE static uint32 __PPO__totalNumberOfBullets() { return STRUCT_OFFSET(ATPSWeapon, totalNumberOfBullets); } \
	FORCEINLINE static uint32 __PPO__ammoCount() { return STRUCT_OFFSET(ATPSWeapon, ammoCount); } \
	FORCEINLINE static uint32 __PPO__accuracy() { return STRUCT_OFFSET(ATPSWeapon, accuracy); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ATPSWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__DamageMultiplier() { return STRUCT_OFFSET(ATPSWeapon, DamageMultiplier); }


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_12_PROLOG
#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_RPC_WRAPPERS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_INCLASS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_INCLASS_NO_PURE_DECLS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonShooter_Source_ThirdPersonShooter_TPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
