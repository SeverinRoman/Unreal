// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIRD_BirdGameModeBase_generated_h
#error "BirdGameModeBase.generated.h already included, missing '#pragma once' in BirdGameModeBase.h"
#endif
#define BIRD_BirdGameModeBase_generated_h

#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_SPARSE_DATA
#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_RPC_WRAPPERS
#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABirdGameModeBase(); \
	friend struct Z_Construct_UClass_ABirdGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABirdGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bird"), NO_API) \
	DECLARE_SERIALIZER(ABirdGameModeBase)


#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABirdGameModeBase(); \
	friend struct Z_Construct_UClass_ABirdGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABirdGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bird"), NO_API) \
	DECLARE_SERIALIZER(ABirdGameModeBase)


#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABirdGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABirdGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABirdGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABirdGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABirdGameModeBase(ABirdGameModeBase&&); \
	NO_API ABirdGameModeBase(const ABirdGameModeBase&); \
public:


#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABirdGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABirdGameModeBase(ABirdGameModeBase&&); \
	NO_API ABirdGameModeBase(const ABirdGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABirdGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABirdGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABirdGameModeBase)


#define FID_Bird_Source_Bird_BirdGameModeBase_h_12_PROLOG
#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_SPARSE_DATA \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_RPC_WRAPPERS \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_INCLASS \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bird_Source_Bird_BirdGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_SPARSE_DATA \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Bird_Source_Bird_BirdGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIRD_API UClass* StaticClass<class ABirdGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bird_Source_Bird_BirdGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
