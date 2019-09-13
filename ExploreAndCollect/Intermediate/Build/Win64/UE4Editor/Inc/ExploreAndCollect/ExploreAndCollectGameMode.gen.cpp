// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreAndCollect/ExploreAndCollectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExploreAndCollectGameMode() {}
// Cross Module References
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AExploreAndCollectGameMode_NoRegister();
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AExploreAndCollectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExploreAndCollect();
// End Cross Module References
	void AExploreAndCollectGameMode::StaticRegisterNativesAExploreAndCollectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExploreAndCollectGameMode_NoRegister()
	{
		return AExploreAndCollectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExploreAndCollectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExploreAndCollectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreAndCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExploreAndCollectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExploreAndCollectGameMode.h" },
		{ "ModuleRelativePath", "ExploreAndCollectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExploreAndCollectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExploreAndCollectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExploreAndCollectGameMode_Statics::ClassParams = {
		&AExploreAndCollectGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AExploreAndCollectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AExploreAndCollectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExploreAndCollectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExploreAndCollectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExploreAndCollectGameMode, 3285008420);
	template<> EXPLOREANDCOLLECT_API UClass* StaticClass<AExploreAndCollectGameMode>()
	{
		return AExploreAndCollectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExploreAndCollectGameMode(Z_Construct_UClass_AExploreAndCollectGameMode, &AExploreAndCollectGameMode::StaticClass, TEXT("/Script/ExploreAndCollect"), TEXT("AExploreAndCollectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExploreAndCollectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
