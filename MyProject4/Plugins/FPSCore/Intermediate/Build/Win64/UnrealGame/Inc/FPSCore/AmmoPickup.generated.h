// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_AmmoPickup_generated_h
#error "AmmoPickup.generated.h already included, missing '#pragma once' in AmmoPickup.h"
#endif
#define FPSCORE_AmmoPickup_generated_h

#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoTypeData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FAmmoTypeData>();

#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_SPARSE_DATA
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_RPC_WRAPPERS
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public:


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoPickup)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_43_PROLOG
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_RPC_WRAPPERS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_INCLASS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h


#define FOREACH_ENUM_EAMMOAMOUNT(op) \
	op(EAmmoAmount::Low) \
	op(EAmmoAmount::Medium) \
	op(EAmmoAmount::High) 

enum class EAmmoAmount : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAmmoAmount>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
