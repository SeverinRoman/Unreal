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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(ATestConvertStringToSymbol::execWriteResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->WriteResult(Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestConvertStringToSymbol::execSymbolCount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SymbolCount(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestConvertStringToSymbol::execShowDebug)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_showString);
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDebug(Z_Param_showString,Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestConvertStringToSymbol::execShowResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowResult();
		P_NATIVE_END;
	}
	void ATestConvertStringToSymbol::StaticRegisterNativesATestConvertStringToSymbol()
	{
		UClass* Class = ATestConvertStringToSymbol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowDebug", &ATestConvertStringToSymbol::execShowDebug },
			{ "ShowResult", &ATestConvertStringToSymbol::execShowResult },
			{ "SymbolCount", &ATestConvertStringToSymbol::execSymbolCount },
			{ "WriteResult", &ATestConvertStringToSymbol::execWriteResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics
	{
		struct TestConvertStringToSymbol_eventShowDebug_Parms
		{
			FString showString;
			FColor color;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_showString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::NewProp_showString = { "showString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventShowDebug_Parms, showString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventShowDebug_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::NewProp_showString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestConvertStringToSymbol, nullptr, "ShowDebug", nullptr, nullptr, sizeof(TestConvertStringToSymbol_eventShowDebug_Parms), Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestConvertStringToSymbol, nullptr, "ShowResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics
	{
		struct TestConvertStringToSymbol_eventSymbolCount_Parms
		{
			FString text;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventSymbolCount_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventSymbolCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestConvertStringToSymbol, nullptr, "SymbolCount", nullptr, nullptr, sizeof(TestConvertStringToSymbol_eventSymbolCount_Parms), Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics
	{
		struct TestConvertStringToSymbol_eventWriteResult_Parms
		{
			int32 count;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventWriteResult_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestConvertStringToSymbol_eventWriteResult_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestConvertStringToSymbol, nullptr, "WriteResult", nullptr, nullptr, sizeof(TestConvertStringToSymbol_eventWriteResult_Parms), Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replacementIfOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_replacementIfOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replacementIfTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_replacementIfTwo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestConvertStringToSymbol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Turtle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestConvertStringToSymbol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestConvertStringToSymbol_ShowDebug, "ShowDebug" }, // 1677941684
		{ &Z_Construct_UFunction_ATestConvertStringToSymbol_ShowResult, "ShowResult" }, // 1243967279
		{ &Z_Construct_UFunction_ATestConvertStringToSymbol_SymbolCount, "SymbolCount" }, // 1179664788
		{ &Z_Construct_UFunction_ATestConvertStringToSymbol_WriteResult, "WriteResult" }, // 2542129307
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfOne_MetaData[] = {
		{ "Category", "TestConvertStringToSymbol" },
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfOne = { "replacementIfOne", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestConvertStringToSymbol, replacementIfOne), METADATA_PARAMS(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfTwo_MetaData[] = {
		{ "Category", "TestConvertStringToSymbol" },
		{ "ModuleRelativePath", "TestConvertStringToSymbol.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfTwo = { "replacementIfTwo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestConvertStringToSymbol, replacementIfTwo), METADATA_PARAMS(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfTwo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestConvertStringToSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_strings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestConvertStringToSymbol_Statics::NewProp_replacementIfTwo,
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
	IMPLEMENT_CLASS(ATestConvertStringToSymbol, 2545629775);
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
