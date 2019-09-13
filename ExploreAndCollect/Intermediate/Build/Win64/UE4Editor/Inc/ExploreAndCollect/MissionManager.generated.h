// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef EXPLOREANDCOLLECT_MissionManager_generated_h
#error "MissionManager.generated.h already included, missing '#pragma once' in MissionManager.h"
#endif
#define EXPLOREANDCOLLECT_MissionManager_generated_h

#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_EVENT_PARMS
#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_CALLBACK_WRAPPERS
#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissionManager(); \
	friend struct Z_Construct_UClass_AMissionManager_Statics; \
public: \
	DECLARE_CLASS(AMissionManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AMissionManager)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMissionManager(); \
	friend struct Z_Construct_UClass_AMissionManager_Statics; \
public: \
	DECLARE_CLASS(AMissionManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AMissionManager)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionManager(AMissionManager&&); \
	NO_API AMissionManager(const AMissionManager&); \
public:


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionManager(AMissionManager&&); \
	NO_API AMissionManager(const AMissionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionManager)


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_PRIVATE_PROPERTY_OFFSET
#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_13_PROLOG \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_EVENT_PARMS


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_RPC_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_CALLBACK_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_INCLASS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_CALLBACK_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_INCLASS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREANDCOLLECT_API UClass* StaticClass<class AMissionManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreAndCollect_Source_ExploreAndCollect_Public_MissionManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
