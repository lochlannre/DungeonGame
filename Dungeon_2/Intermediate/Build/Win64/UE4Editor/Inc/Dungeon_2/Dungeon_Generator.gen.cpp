// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon_2/Dungeon_Generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon_Generator() {}
// Cross Module References
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeon_Generator_NoRegister();
	DUNGEON_2_API UClass* Z_Construct_UClass_ADungeon_Generator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dungeon_2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DUNGEON_2_API UScriptStruct* Z_Construct_UScriptStruct_FRoomInfo();
// End Cross Module References
	DEFINE_FUNCTION(ADungeon_Generator::execSpawnMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeon_Generator::execGenerateDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateDungeon();
		P_NATIVE_END;
	}
	void ADungeon_Generator::StaticRegisterNativesADungeon_Generator()
	{
		UClass* Class = ADungeon_Generator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateDungeon", &ADungeon_Generator::execGenerateDungeon },
			{ "SpawnMap", &ADungeon_Generator::execSpawnMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Value is 1 since started room is always generated\n" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
		{ "ToolTip", "Value is 1 since started room is always generated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon_Generator, nullptr, "GenerateDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon_Generator, nullptr, "SpawnMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_Generator_SpawnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeon_Generator_SpawnMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADungeon_Generator_NoRegister()
	{
		return ADungeon_Generator::StaticClass();
	}
	struct Z_Construct_UClass_ADungeon_Generator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ARoom;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noRoomsToGenerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_noRoomsToGenerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomsGenerated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomsGenerated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeon_Generator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeon_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeon_Generator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_Generator_GenerateDungeon, "GenerateDungeon" }, // 4279242862
		{ &Z_Construct_UFunction_ADungeon_Generator_SpawnMap, "SpawnMap" }, // 3095721541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dungeon_Generator.h" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_ARoom_MetaData[] = {
		{ "Category", "Dungeon_Generator" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_ARoom = { "ARoom", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon_Generator, ARoom), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_ARoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_ARoom_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map_Inner = { "Map", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRoomInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "Dungeon_Generator" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon_Generator, Map), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_MaxSize_MetaData[] = {
		{ "Category", "Dungeon_Generator" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon_Generator, MaxSize), METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_MaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_noRoomsToGenerate_MetaData[] = {
		{ "Category", "Dungeon_Generator" },
		{ "Comment", "//Basically a 10x10 grid\n" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
		{ "ToolTip", "Basically a 10x10 grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_noRoomsToGenerate = { "noRoomsToGenerate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon_Generator, noRoomsToGenerate), METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_noRoomsToGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_noRoomsToGenerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_roomsGenerated_MetaData[] = {
		{ "Category", "Dungeon_Generator" },
		{ "Comment", "//Number of rooms for this maze\n" },
		{ "ModuleRelativePath", "Dungeon_Generator.h" },
		{ "ToolTip", "Number of rooms for this maze" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_roomsGenerated = { "roomsGenerated", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon_Generator, roomsGenerated), METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_roomsGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_roomsGenerated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Generator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_ARoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_noRoomsToGenerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Generator_Statics::NewProp_roomsGenerated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeon_Generator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon_Generator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Generator_Statics::ClassParams = {
		&ADungeon_Generator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeon_Generator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeon_Generator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Generator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeon_Generator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeon_Generator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeon_Generator, 3578610098);
	template<> DUNGEON_2_API UClass* StaticClass<ADungeon_Generator>()
	{
		return ADungeon_Generator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeon_Generator(Z_Construct_UClass_ADungeon_Generator, &ADungeon_Generator::StaticClass, TEXT("/Script/Dungeon_2"), TEXT("ADungeon_Generator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeon_Generator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
