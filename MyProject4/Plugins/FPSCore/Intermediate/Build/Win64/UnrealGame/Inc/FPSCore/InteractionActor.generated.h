// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FPSCORE_InteractionActor_generated_h
#error "InteractionActor.generated.h already included, missing '#pragma once' in InteractionActor.h"
#endif
#define FPSCORE_InteractionActor_generated_h

#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_SPARSE_DATA
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateInteractionPopupText);


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateInteractionPopupText);


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_EVENT_PARMS \
	struct InteractionActor_eventOnInteraction_Parms \
	{ \
		AActor* ImplementedActor; \
	};


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_CALLBACK_WRAPPERS
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionActor(); \
	friend struct Z_Construct_UClass_AInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AInteractionActor, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActor)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionActor(); \
	friend struct Z_Construct_UClass_AInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AInteractionActor, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActor)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActor(AInteractionActor&&); \
	NO_API AInteractionActor(const AInteractionActor&); \
public:


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionActor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActor(AInteractionActor&&); \
	NO_API AInteractionActor(const AInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionActor)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_12_PROLOG \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_EVENT_PARMS


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_RPC_WRAPPERS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_CALLBACK_WRAPPERS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_INCLASS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_CALLBACK_WRAPPERS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
