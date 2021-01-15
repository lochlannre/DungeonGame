// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon_2/DungeonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCharacter() {}
// Cross Module References
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeonCharacter_NoRegister();
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Dungeon_2();
// End Cross Module References
	void ADungeonCharacter::StaticRegisterNativesADungeonCharacter()
	{
	}
	UClass* Z_Construct_UClass_ADungeonCharacter_NoRegister()
	{
		return ADungeonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeon_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DungeonCharacter.h" },
		{ "ModuleRelativePath", "DungeonCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCharacter_Statics::ClassParams = {
		&ADungeonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonCharacter, 378651724);
	template<> DUNGEON_2_API UClass* StaticClass<ADungeonCharacter>()
	{
		return ADungeonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonCharacter(Z_Construct_UClass_ADungeonCharacter, &ADungeonCharacter::StaticClass, TEXT("/Script/Dungeon_2"), TEXT("ADungeonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
