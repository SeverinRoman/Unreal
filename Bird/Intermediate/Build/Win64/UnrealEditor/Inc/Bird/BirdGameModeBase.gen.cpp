// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bird/BirdGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBirdGameModeBase() {}
// Cross Module References
	BIRD_API UClass* Z_Construct_UClass_ABirdGameModeBase_NoRegister();
	BIRD_API UClass* Z_Construct_UClass_ABirdGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bird();
// End Cross Module References
	void ABirdGameModeBase::StaticRegisterNativesABirdGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABirdGameModeBase);
	UClass* Z_Construct_UClass_ABirdGameModeBase_NoRegister()
	{
		return ABirdGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABirdGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABirdGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bird,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BirdGameModeBase.h" },
		{ "ModuleRelativePath", "BirdGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABirdGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABirdGameModeBase_Statics::ClassParams = {
		&ABirdGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABirdGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABirdGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABirdGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABirdGameModeBase.OuterSingleton, Z_Construct_UClass_ABirdGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABirdGameModeBase.OuterSingleton;
	}
	template<> BIRD_API UClass* StaticClass<ABirdGameModeBase>()
	{
		return ABirdGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABirdGameModeBase);
	struct Z_CompiledInDeferFile_FID_Bird_Source_Bird_BirdGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bird_Source_Bird_BirdGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABirdGameModeBase, ABirdGameModeBase::StaticClass, TEXT("ABirdGameModeBase"), &Z_Registration_Info_UClass_ABirdGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABirdGameModeBase), 324971027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bird_Source_Bird_BirdGameModeBase_h_888949792(TEXT("/Script/Bird"),
		Z_CompiledInDeferFile_FID_Bird_Source_Bird_BirdGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bird_Source_Bird_BirdGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
