// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon_2/DungeonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGameMode() {}
// Cross Module References
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeonGameMode_NoRegister();
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeonGameMode();
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeon_2GameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dungeon_2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeonCharacter_NoRegister();
// End Cross Module References
	void ADungeonGameMode::StaticRegisterNativesADungeonGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADungeonGameMode_NoRegister()
	{
		return ADungeonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLevelCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultLevelCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADungeon_2GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeon_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonGameMode.h" },
		{ "ModuleRelativePath", "DungeonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGameMode_Statics::NewProp_DefaultLevelCharacter_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DungeonGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeonGameMode_Statics::NewProp_DefaultLevelCharacter = { "DefaultLevelCharacter", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGameMode, DefaultLevelCharacter), Z_Construct_UClass_ADungeonCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADungeonGameMode_Statics::NewProp_DefaultLevelCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGameMode_Statics::NewProp_DefaultLevelCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGameMode_Statics::NewProp_DefaultLevelCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGameMode_Statics::ClassParams = {
		&ADungeonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeonGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonGameMode, 393924689);
	template<> DUNGEON_2_API UClass* StaticClass<ADungeonGameMode>()
	{
		return ADungeonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonGameMode(Z_Construct_UClass_ADungeonGameMode, &ADungeonGameMode::StaticClass, TEXT("/Script/Dungeon_2"), TEXT("ADungeonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
