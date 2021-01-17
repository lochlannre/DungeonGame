// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEON_2_Dungeon_Generator_generated_h
#error "Dungeon_Generator.generated.h already included, missing '#pragma once' in Dungeon_Generator.h"
#endif
#define DUNGEON_2_Dungeon_Generator_generated_h

#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_SPARSE_DATA
#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnMap); \
	DECLARE_FUNCTION(execGenerateDungeon);


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnMap); \
	DECLARE_FUNCTION(execGenerateDungeon);


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeon_Generator(); \
	friend struct Z_Construct_UClass_ADungeon_Generator_Statics; \
public: \
	DECLARE_CLASS(ADungeon_Generator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon_2"), NO_API) \
	DECLARE_SERIALIZER(ADungeon_Generator)


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADungeon_Generator(); \
	friend struct Z_Construct_UClass_ADungeon_Generator_Statics; \
public: \
	DECLARE_CLASS(ADungeon_Generator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon_2"), NO_API) \
	DECLARE_SERIALIZER(ADungeon_Generator)


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeon_Generator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeon_Generator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon_Generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon_Generator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeon_Generator(ADungeon_Generator&&); \
	NO_API ADungeon_Generator(const ADungeon_Generator&); \
public:


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeon_Generator(ADungeon_Generator&&); \
	NO_API ADungeon_Generator(const ADungeon_Generator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon_Generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon_Generator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeon_Generator)


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Map() { return STRUCT_OFFSET(ADungeon_Generator, Map); } \
	FORCEINLINE static uint32 __PPO__MaxSize() { return STRUCT_OFFSET(ADungeon_Generator, MaxSize); } \
	FORCEINLINE static uint32 __PPO__noRoomsToGenerate() { return STRUCT_OFFSET(ADungeon_Generator, noRoomsToGenerate); } \
	FORCEINLINE static uint32 __PPO__roomsGenerated() { return STRUCT_OFFSET(ADungeon_Generator, roomsGenerated); }


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_13_PROLOG
#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_SPARSE_DATA \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_RPC_WRAPPERS \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_INCLASS \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_SPARSE_DATA \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_INCLASS_NO_PURE_DECLS \
	Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_2_API UClass* StaticClass<class ADungeon_Generator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeon_2_Source_Dungeon_2_Dungeon_Generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
