// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Javelin/Missile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissile() {}
// Cross Module References
	JAVELIN_API UClass* Z_Construct_UClass_AMissile_NoRegister();
	JAVELIN_API UClass* Z_Construct_UClass_AMissile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Javelin();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMissile::execOnComponentBeingOverlap)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_Component);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeingOverlap(Z_Param_Component,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMissile::execLaunch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Xv);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yv);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Zv);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Launch(Z_Param_Xv,Z_Param_Yv,Z_Param_Zv);
		P_NATIVE_END;
	}
	void AMissile::StaticRegisterNativesAMissile()
	{
		UClass* Class = AMissile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Launch", &AMissile::execLaunch },
			{ "OnComponentBeingOverlap", &AMissile::execOnComponentBeingOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMissile_Launch_Statics
	{
		struct Missile_eventLaunch_Parms
		{
			float Xv;
			float Yv;
			float Zv;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Xv;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yv;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zv;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Xv = { "Xv", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventLaunch_Parms, Xv), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Yv = { "Yv", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventLaunch_Parms, Yv), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Zv = { "Zv", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventLaunch_Parms, Zv), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMissile_Launch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Xv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Yv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_Launch_Statics::NewProp_Zv,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissile_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissile_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissile, nullptr, "Launch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMissile_Launch_Statics::Missile_eventLaunch_Parms), Z_Construct_UFunction_AMissile_Launch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_Launch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissile_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissile_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissile_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics
	{
		struct Missile_eventOnComponentBeingOverlap_Parms
		{
			UBoxComponent* Component;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventOnComponentBeingOverlap_Parms, Component), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventOnComponentBeingOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventOnComponentBeingOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventOnComponentBeingOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Missile_eventOnComponentBeingOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Missile_eventOnComponentBeingOverlap_Parms), &Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Missile_eventOnComponentBeingOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissile, nullptr, "OnComponentBeingOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::Missile_eventOnComponentBeingOverlap_Parms), Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissile_OnComponentBeingOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissile_OnComponentBeingOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMissile);
	UClass* Z_Construct_UClass_AMissile_NoRegister()
	{
		return AMissile::StaticClass();
	}
	struct Z_Construct_UClass_AMissile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Javelin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMissile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMissile_Launch, "Launch" }, // 726935507
		{ &Z_Construct_UFunction_AMissile_OnComponentBeingOverlap, "OnComponentBeingOverlap" }, // 540070408
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Missile.h" },
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Missile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissile, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMissile_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissile_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "Missile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissile_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissile, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMissile_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::NewProp_Sphere_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissile_Statics::NewProp_Sphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMissile_Statics::ClassParams = {
		&AMissile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMissile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissile()
	{
		if (!Z_Registration_Info_UClass_AMissile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMissile.OuterSingleton, Z_Construct_UClass_AMissile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMissile.OuterSingleton;
	}
	template<> JAVELIN_API UClass* StaticClass<AMissile>()
	{
		return AMissile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissile);
	struct Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_Missile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_Missile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMissile, AMissile::StaticClass, TEXT("AMissile"), &Z_Registration_Info_UClass_AMissile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMissile), 1023409560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_Missile_h_787420086(TEXT("/Script/Javelin"),
		Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_Missile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_Missile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
