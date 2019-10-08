// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COOPFPS/COOPFPSGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOOPFPSGameModeBase() {}
// Cross Module References
	COOPFPS_API UClass* Z_Construct_UClass_ACOOPFPSGameModeBase_NoRegister();
	COOPFPS_API UClass* Z_Construct_UClass_ACOOPFPSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COOPFPS();
// End Cross Module References
	void ACOOPFPSGameModeBase::StaticRegisterNativesACOOPFPSGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACOOPFPSGameModeBase_NoRegister()
	{
		return ACOOPFPSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACOOPFPSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COOPFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "COOPFPSGameModeBase.h" },
		{ "ModuleRelativePath", "COOPFPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOOPFPSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::ClassParams = {
		&ACOOPFPSGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOOPFPSGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOOPFPSGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOOPFPSGameModeBase, 3718984227);
	template<> COOPFPS_API UClass* StaticClass<ACOOPFPSGameModeBase>()
	{
		return ACOOPFPSGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOOPFPSGameModeBase(Z_Construct_UClass_ACOOPFPSGameModeBase, &ACOOPFPSGameModeBase::StaticClass, TEXT("/Script/COOPFPS"), TEXT("ACOOPFPSGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOOPFPSGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
