// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon_2/RoomGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomGenerator() {}
// Cross Module References
	DUNGEON_2_API UClass* Z_Construct_UClass_URoomGenerator_NoRegister();
	DUNGEON_2_API UClass* Z_Construct_UClass_URoomGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Dungeon_2();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void URoomGenerator::StaticRegisterNativesURoomGenerator()
	{
	}
	UClass* Z_Construct_UClass_URoomGenerator_NoRegister()
	{
		return URoomGenerator::StaticClass();
	}
	struct Z_Construct_UClass_URoomGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Wall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeon_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RoomGenerator.h" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Wall_MetaData[] = {
		{ "Category", "RoomGenerator" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Wall = { "SM_Wall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomGenerator, SM_Wall), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Wall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Wall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Door_MetaData[] = {
		{ "Category", "RoomGenerator" },
		{ "ModuleRelativePath", "RoomGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Door = { "SM_Door", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomGenerator, SM_Door), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Wall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomGenerator_Statics::NewProp_SM_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoomGenerator_Statics::ClassParams = {
		&URoomGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoomGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoomGenerator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoomGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoomGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoomGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoomGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoomGenerator, 2017961244);
	template<> DUNGEON_2_API UClass* StaticClass<URoomGenerator>()
	{
		return URoomGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoomGenerator(Z_Construct_UClass_URoomGenerator, &URoomGenerator::StaticClass, TEXT("/Script/Dungeon_2"), TEXT("URoomGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
