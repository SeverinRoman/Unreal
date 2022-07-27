// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Turtle/TestConvertStringToSymbol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestConvertStringToSymbol() {}
// Cross Module References
	TURTLE_API UClass* Z_Construct_UClass_ATestConvertStringToSymbol_NoRegister();
	TURTLE_API UClass* Z_Construct_UClass_ATestConvertStringToSymbol();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Turtle();
// End Cross Module References
	DEFINE_FUNCTION(ATestConvertStringToSymbol::execShowArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowArray();
		P_NATIVE_END;
	}
	void ATestConvertStringToSymbol::StaticRegisterNativesATestConvertStringToSymbol()
	{
		UClass* Class = ATestConvertStringToSymbol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowArray", &ATestConvertStringToSymbol::execShowArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestConvertStringToSymbol, nullptr, "ShowArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestConvertStringToSymbol_NoRegister()
	{
		return ATestConvertStringToSymbol::StaticClass();
	}
	struct Z_Construct_UClass_ATestConvertStringToSymbol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_strings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_strings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestConvertStringToSymbol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Turtle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestConvertStringToSymbol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestConvertStringToSymbol_ShowArray, "ShowArray" }, // 3696157078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestConvertStringToSymbol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestConvertStringToSymbol.h" },
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_Inner = { "strings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_MetaData[] = {
		{ "Category", "TestConvertStringToSymbol" },
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings = { "strings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestConvertStringToSymbol, strings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestConvertStringToSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestConvertStringToSymbol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestConvertStringToSymbol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestConvertStringToSymbol_Statics::ClassParams = {
		&ATestConvertStringToSymbol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestConvertStringToSymbol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestConvertStringToSymbol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestConvertStringToSymbol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestConvertStringToSymbol, 3199878397);
	template<> TURTLE_API UClass* StaticClass<ATestConvertStringToSymbol>()
	{
		return ATestConvertStringToSymbol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestConvertStringToSymbol(Z_Construct_UClass_ATestConvertStringToSymbol, &ATestConvertStringToSymbol::StaticClass, TEXT("/Script/Turtle"), TEXT("ATestConvertStringToSymbol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestConvertStringToSymbol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
