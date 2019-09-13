// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExploreAndCollect/Public/GameplayController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayController() {}
// Cross Module References
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AGameplayController_NoRegister();
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AGameplayController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ExploreAndCollect();
	EXPLOREANDCOLLECT_API UFunction* Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID();
	EXPLOREANDCOLLECT_API UFunction* Z_Construct_UFunction_AGameplayController_CraftItem();
	EXPLOREANDCOLLECT_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	EXPLOREANDCOLLECT_API UFunction* Z_Construct_UFunction_AGameplayController_ReloadInventory();
	EXPLOREANDCOLLECT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
// End Cross Module References
	static FName NAME_AGameplayController_ReloadInventory = FName(TEXT("ReloadInventory"));
	void AGameplayController::ReloadInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayController_ReloadInventory),NULL);
	}
	void AGameplayController::StaticRegisterNativesAGameplayController()
	{
		UClass* Class = AGameplayController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventoryByID", &AGameplayController::execAddItemToInventoryByID },
			{ "CraftItem", &AGameplayController::execCraftItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics
	{
		struct GameplayController_eventAddItemToInventoryByID_Parms
		{
			FName ID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayController_eventAddItemToInventoryByID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/GameplayController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayController, nullptr, "AddItemToInventoryByID", sizeof(GameplayController_eventAddItemToInventoryByID_Parms), Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayController_CraftItem_Statics
	{
		struct GameplayController_eventCraftItem_Parms
		{
			FInventoryItem ItemA;
			FInventoryItem ItemB;
			AGameplayController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayController_eventCraftItem_Parms, Controller), Z_Construct_UClass_AGameplayController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayController_eventCraftItem_Parms, ItemB), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayController_eventCraftItem_Parms, ItemA), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayController_CraftItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_ItemB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayController_CraftItem_Statics::NewProp_ItemA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayController_CraftItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/GameplayController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayController_CraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayController, nullptr, "CraftItem", sizeof(GameplayController_eventCraftItem_Parms), Z_Construct_UFunction_AGameplayController_CraftItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_CraftItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayController_CraftItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_CraftItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayController_CraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayController_CraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayController.h" },
		{ "ToolTip", "Reloads player inventory  call when you made changes to the inventory.\nand want to see the changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayController, nullptr, "ReloadInventory", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayController_ReloadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayController_ReloadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayController_NoRegister()
	{
		return AGameplayController::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ExploreAndCollect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID, "AddItemToInventoryByID" }, // 2525532253
		{ &Z_Construct_UFunction_AGameplayController_CraftItem, "CraftItem" }, // 3166169622
		{ &Z_Construct_UFunction_AGameplayController_ReloadInventory, "ReloadInventory" }, // 1892837424
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameplayController.h" },
		{ "ModuleRelativePath", "Public/GameplayController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "GameplayController" },
		{ "ModuleRelativePath", "Public/GameplayController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayController, Inventory), METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "GameplayController" },
		{ "ModuleRelativePath", "Public/GameplayController.h" },
		{ "ToolTip", "The interactable that the player is currently looking at. This will be a nullptr if the player is not looking at something that isnt an interactable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayController, CurrentInteractable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayController_Statics::ClassParams = {
		&AGameplayController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayController, 214637718);
	template<> EXPLOREANDCOLLECT_API UClass* StaticClass<AGameplayController>()
	{
		return AGameplayController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayController(Z_Construct_UClass_AGameplayController, &AGameplayController::StaticClass, TEXT("/Script/ExploreAndCollect"), TEXT("AGameplayController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
