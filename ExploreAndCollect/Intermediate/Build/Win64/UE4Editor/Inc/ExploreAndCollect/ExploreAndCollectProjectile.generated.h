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
struct FVector;
struct FHitResult;
#ifdef EXPLOREANDCOLLECT_ExploreAndCollectProjectile_generated_h
#error "ExploreAndCollectProjectile.generated.h already included, missing '#pragma once' in ExploreAndCollectProjectile.h"
#endif
#define EXPLOREANDCOLLECT_ExploreAndCollectProjectile_generated_h

#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExploreAndCollectProjectile(); \
	friend struct Z_Construct_UClass_AExploreAndCollectProjectile_Statics; \
public: \
	DECLARE_CLASS(AExploreAndCollectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AExploreAndCollectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExploreAndCollectProjectile(); \
	friend struct Z_Construct_UClass_AExploreAndCollectProjectile_Statics; \
public: \
	DECLARE_CLASS(AExploreAndCollectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExploreAndCollect"), NO_API) \
	DECLARE_SERIALIZER(AExploreAndCollectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExploreAndCollectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExploreAndCollectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExploreAndCollectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExploreAndCollectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExploreAndCollectProjectile(AExploreAndCollectProjectile&&); \
	NO_API AExploreAndCollectProjectile(const AExploreAndCollectProjectile&); \
public:


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExploreAndCollectProjectile(AExploreAndCollectProjectile&&); \
	NO_API AExploreAndCollectProjectile(const AExploreAndCollectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExploreAndCollectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExploreAndCollectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExploreAndCollectProjectile)


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AExploreAndCollectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AExploreAndCollectProjectile, ProjectileMovement); }


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_9_PROLOG
#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_RPC_WRAPPERS \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_INCLASS \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPLOREANDCOLLECT_API UClass* StaticClass<class AExploreAndCollectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExploreAndCollect_Source_ExploreAndCollect_ExploreAndCollectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
