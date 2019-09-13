// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
class AGameplayController;
#ifdef EXPLOREANDCOLLECT_GameplayController_generated_h
#error "GameplayController.generated.h already included, missing '#pragma once' in GameplayController.h"
#endif
#define EXPLOREANDCOLLECT_GameplayController_generated_h

#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCraftItem) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_ItemA); \
		P_GET_STRUCT(FInventoryItem,Z_Param_ItemB); \
		P_GET_OBJECT(AGameplayController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CraftItem(Z_Param_ItemA,Z_Param_ItemB,Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventoryByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventoryByID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCraftItem) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_ItemA); \
		P_GET_STRUCT(FInventoryItem,Z_Param_ItemB); \
		P_GET_OBJECT(AGameplayController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CraftItem(Z_Param_ItemA,Z_Param_ItemB,Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventoryByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventoryByID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_EVENT_PARMS
#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_CALLBACK_WRAPPERS
#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayController(); \
	friend struct Z_Construct_UClass_AGameplayController_Statics; \
public: \
	DECLARE_CLASS(AGameplayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AGameplayController)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayController(); \
	friend struct Z_Construct_UClass_AGameplayController_Statics; \
public: \
	DECLARE_CLASS(AGameplayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AGameplayController)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayController(AGameplayController&&); \
	NO_API AGameplayController(const AGameplayController&); \
public:


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayController(AGameplayController&&); \
	NO_API AGameplayController(const AGameplayController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayController)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_PRIVATE_PROPERTY_OFFSET
#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_13_PROLOG \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_EVENT_PARMS


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_RPC_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_CALLBACK_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_INCLASS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_CALLBACK_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_INCLASS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREANDCOLLECT_API UClass* StaticClass<class AGameplayController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreAndCollect_Source_ExploreAndCollect_Public_GameplayController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
