// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Bird;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Bird()
	{
		if (!Z_Registration_Info_UPackage__Script_Bird.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Bird",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3F240D2D,
				0x12A13AC6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Bird.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Bird.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Bird(Z_Construct_UPackage__Script_Bird, TEXT("/Script/Bird"), Z_Registration_Info_UPackage__Script_Bird, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F240D2D, 0x12A13AC6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
