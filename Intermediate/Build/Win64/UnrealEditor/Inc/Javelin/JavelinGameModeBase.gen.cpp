// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Javelin/JavelinGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJavelinGameModeBase() {}
// Cross Module References
	JAVELIN_API UClass* Z_Construct_UClass_AJavelinGameModeBase_NoRegister();
	JAVELIN_API UClass* Z_Construct_UClass_AJavelinGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Javelin();
// End Cross Module References
	void AJavelinGameModeBase::StaticRegisterNativesAJavelinGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJavelinGameModeBase);
	UClass* Z_Construct_UClass_AJavelinGameModeBase_NoRegister()
	{
		return AJavelinGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJavelinGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJavelinGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Javelin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJavelinGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JavelinGameModeBase.h" },
		{ "ModuleRelativePath", "JavelinGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJavelinGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJavelinGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJavelinGameModeBase_Statics::ClassParams = {
		&AJavelinGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJavelinGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJavelinGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJavelinGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AJavelinGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJavelinGameModeBase.OuterSingleton, Z_Construct_UClass_AJavelinGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJavelinGameModeBase.OuterSingleton;
	}
	template<> JAVELIN_API UClass* StaticClass<AJavelinGameModeBase>()
	{
		return AJavelinGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJavelinGameModeBase);
	struct Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_JavelinGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_JavelinGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJavelinGameModeBase, AJavelinGameModeBase::StaticClass, TEXT("AJavelinGameModeBase"), &Z_Registration_Info_UClass_AJavelinGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJavelinGameModeBase), 187024287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_JavelinGameModeBase_h_3112205303(TEXT("/Script/Javelin"),
		Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_JavelinGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_JavelinGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
