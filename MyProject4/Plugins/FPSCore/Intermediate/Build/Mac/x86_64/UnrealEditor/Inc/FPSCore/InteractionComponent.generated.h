// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractionBase;
#ifdef FPSCORE_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define FPSCORE_InteractionComponent_generated_h

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_13_DELEGATE \
struct _Script_FPSCore_eventGetCurrentHitActorSignature_Parms \
{ \
	AInteractionBase* HitInteractionBase; \
	bool bIsValid; \
}; \
static inline void FGetCurrentHitActorSignature_DelegateWrapper(const FMulticastScriptDelegate& GetCurrentHitActorSignature, AInteractionBase* HitInteractionBase, bool bIsValid) \
{ \
	_Script_FPSCore_eventGetCurrentHitActorSignature_Parms Parms; \
	Parms.HitInteractionBase=HitInteractionBase; \
	Parms.bIsValid=bIsValid ? true : false; \
	GetCurrentHitActorSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetInteractText);


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetInteractText);


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_16_PROLOG
#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_INCLASS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
