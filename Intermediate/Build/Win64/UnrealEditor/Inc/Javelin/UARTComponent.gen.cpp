// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Javelin/UARTComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUARTComponent() {}
// Cross Module References
	JAVELIN_API UClass* Z_Construct_UClass_UUARTComponent_NoRegister();
	JAVELIN_API UClass* Z_Construct_UClass_UUARTComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Javelin();
// End Cross Module References
	void UUARTComponent::StaticRegisterNativesUUARTComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUARTComponent);
	UClass* Z_Construct_UClass_UUARTComponent_NoRegister()
	{
		return UUARTComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUARTComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUARTComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Javelin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUARTComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UARTComponent.h" },
		{ "ModuleRelativePath", "UARTComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUARTComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUARTComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUARTComponent_Statics::ClassParams = {
		&UUARTComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUARTComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUARTComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUARTComponent()
	{
		if (!Z_Registration_Info_UClass_UUARTComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUARTComponent.OuterSingleton, Z_Construct_UClass_UUARTComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUARTComponent.OuterSingleton;
	}
	template<> JAVELIN_API UClass* StaticClass<UUARTComponent>()
	{
		return UUARTComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUARTComponent);
	struct Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_UARTComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_UARTComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUARTComponent, UUARTComponent::StaticClass, TEXT("UUARTComponent"), &Z_Registration_Info_UClass_UUARTComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUARTComponent), 3640542155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_UARTComponent_h_602758299(TEXT("/Script/Javelin"),
		Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_UARTComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_UARTComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
