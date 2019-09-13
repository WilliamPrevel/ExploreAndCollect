// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreAndCollect/Public/MissionInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissionInteractable() {}
// Cross Module References
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AMissionInteractable_NoRegister();
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AMissionInteractable();
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_ExploreAndCollect();
// End Cross Module References
	void AMissionInteractable::StaticRegisterNativesAMissionInteractable()
	{
	}
	UClass* Z_Construct_UClass_AMissionInteractable_NoRegister()
	{
		return AMissionInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AMissionInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MissionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissionInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreAndCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MissionInteractable.h" },
		{ "ModuleRelativePath", "Public/MissionInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionInteractable_Statics::NewProp_MissionID_MetaData[] = {
		{ "Category", "MissionInteractable" },
		{ "ModuleRelativePath", "Public/MissionInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMissionInteractable_Statics::NewProp_MissionID = { "MissionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionInteractable, MissionID), METADATA_PARAMS(Z_Construct_UClass_AMissionInteractable_Statics::NewProp_MissionID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissionInteractable_Statics::NewProp_MissionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionInteractable_Statics::NewProp_Objective_MetaData[] = {
		{ "Category", "MissionInteractable" },
		{ "ModuleRelativePath", "Public/MissionInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMissionInteractable_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionInteractable, Objective), METADATA_PARAMS(Z_Construct_UClass_AMissionInteractable_Statics::NewProp_Objective_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissionInteractable_Statics::NewProp_Objective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissionInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionInteractable_Statics::NewProp_MissionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionInteractable_Statics::NewProp_Objective,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissionInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissionInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMissionInteractable_Statics::ClassParams = {
		&AMissionInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMissionInteractable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMissionInteractable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMissionInteractable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMissionInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissionInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMissionInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMissionInteractable, 2039482492);
	template<> EXPLOREANDCOLLECT_API UClass* StaticClass<AMissionInteractable>()
	{
		return AMissionInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMissionInteractable(Z_Construct_UClass_AMissionInteractable, &AMissionInteractable::StaticClass, TEXT("/Script/ExploreAndCollect"), TEXT("AMissionInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissionInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
