// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon_2/RoomInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomInfo() {}
// Cross Module References
	DUNGEON_2_API UScriptStruct* Z_Construct_UScriptStruct_FRoomInfo();
	UPackage* Z_Construct_UPackage__Script_Dungeon_2();
// End Cross Module References
class UScriptStruct* FRoomInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DUNGEON_2_API uint32 Get_Z_Construct_UScriptStruct_FRoomInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomInfo, Z_Construct_UPackage__Script_Dungeon_2(), TEXT("RoomInfo"), sizeof(FRoomInfo), Get_Z_Construct_UScriptStruct_FRoomInfo_Hash());
	}
	return Singleton;
}
template<> DUNGEON_2_API UScriptStruct* StaticStruct<FRoomInfo>()
{
	return FRoomInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoomInfo(FRoomInfo::StaticStruct, TEXT("/Script/Dungeon_2"), TEXT("RoomInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Dungeon_2_StaticRegisterNativesFRoomInfo
{
	FScriptStruct_Dungeon_2_StaticRegisterNativesFRoomInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoomInfo")),new UScriptStruct::TCppStructOps<FRoomInfo>);
	}
} ScriptStruct_Dungeon_2_StaticRegisterNativesFRoomInfo;
	struct Z_Construct_UScriptStruct_FRoomInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "RoomInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeon_2,
		nullptr,
		&NewStructOps,
		"RoomInfo",
		sizeof(FRoomInfo),
		alignof(FRoomInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoomInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoomInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dungeon_2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoomInfo"), sizeof(FRoomInfo), Get_Z_Construct_UScriptStruct_FRoomInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoomInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoomInfo_Hash() { return 1948459423U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
