// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPLOREANDCOLLECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define EXPLOREANDCOLLECT_Interactable_generated_h

#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET
#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_9_PROLOG
#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_RPC_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_INCLASS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREANDCOLLECT_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreAndCollect_Source_ExploreAndCollect_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
