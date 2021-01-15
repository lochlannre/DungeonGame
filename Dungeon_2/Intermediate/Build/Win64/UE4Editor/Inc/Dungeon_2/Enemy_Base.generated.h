// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEON_2_Enemy_Base_generated_h
#error "Enemy_Base.generated.h already included, missing '#pragma once' in Enemy_Base.h"
#endif
#define DUNGEON_2_Enemy_Base_generated_h

#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_SPARSE_DATA
#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_RPC_WRAPPERS
#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon_2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon_2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public:


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Base)


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(AEnemy_Base, maxHealth); }


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_17_PROLOG
#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_PRIVATE_PROPERTY_OFFSET \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_SPARSE_DATA \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_RPC_WRAPPERS \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_INCLASS \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_PRIVATE_PROPERTY_OFFSET \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_SPARSE_DATA \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_INCLASS_NO_PURE_DECLS \
	Dungeon_2_Source_Dungeon_2_Enemy_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_2_API UClass* StaticClass<class AEnemy_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeon_2_Source_Dungeon_2_Enemy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
