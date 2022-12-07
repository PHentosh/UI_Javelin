// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Javelin/PlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	JAVELIN_API UScriptStruct* Z_Construct_UScriptStruct_FUART_INPUT();
	UPackage* Z_Construct_UPackage__Script_Javelin();
	JAVELIN_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	JAVELIN_API UClass* Z_Construct_UClass_APlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UART_INPUT;
class UScriptStruct* FUART_INPUT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UART_INPUT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UART_INPUT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUART_INPUT, Z_Construct_UPackage__Script_Javelin(), TEXT("UART_INPUT"));
	}
	return Z_Registration_Info_UScriptStruct_UART_INPUT.OuterSingleton;
}
template<> JAVELIN_API UScriptStruct* StaticStruct<FUART_INPUT>()
{
	return FUART_INPUT::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUART_INPUT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUART_INPUT_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//namespace ba = boost::asio;\n" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "namespace ba = boost::asio;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUART_INPUT>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Struct" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUART_INPUT, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Struct" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUART_INPUT, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Yaw_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUART_INPUT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewProp_Yaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUART_INPUT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Javelin,
		nullptr,
		&NewStructOps,
		"UART_INPUT",
		sizeof(FUART_INPUT),
		alignof(FUART_INPUT),
		Z_Construct_UScriptStruct_FUART_INPUT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUART_INPUT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUART_INPUT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUART_INPUT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUART_INPUT()
	{
		if (!Z_Registration_Info_UScriptStruct_UART_INPUT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UART_INPUT.InnerSingleton, Z_Construct_UScriptStruct_FUART_INPUT_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UART_INPUT.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerPawn::execProcess_Line)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUART_INPUT*)Z_Param__Result=P_THIS->Process_Line(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawn::execMoveLR_ADD)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLR_ADD(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawn::execMoveUD_ADD)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUD_ADD(Z_Param_Value);
		P_NATIVE_END;
	}
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
		UClass* Class = APlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveLR_ADD", &APlayerPawn::execMoveLR_ADD },
			{ "MoveUD_ADD", &APlayerPawn::execMoveUD_ADD },
			{ "Process_Line", &APlayerPawn::execProcess_Line },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics
	{
		struct PlayerPawn_eventMoveLR_ADD_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventMoveLR_ADD_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "MoveLR_ADD", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::PlayerPawn_eventMoveLR_ADD_Parms), Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_MoveLR_ADD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_MoveLR_ADD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics
	{
		struct PlayerPawn_eventMoveUD_ADD_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventMoveUD_ADD_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "MoveUD_ADD", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::PlayerPawn_eventMoveUD_ADD_Parms), Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_MoveUD_ADD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_MoveUD_ADD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_Process_Line_Statics
	{
		struct PlayerPawn_eventProcess_Line_Parms
		{
			FString Value;
			FUART_INPUT ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventProcess_Line_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventProcess_Line_Parms, ReturnValue), Z_Construct_UScriptStruct_FUART_INPUT, METADATA_PARAMS(nullptr, 0) }; // 2870657774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "Process_Line", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::PlayerPawn_eventProcess_Line_Parms), Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_Process_Line()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_Process_Line_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Javelin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawn_MoveLR_ADD, "MoveLR_ADD" }, // 3462803423
		{ &Z_Construct_UFunction_APlayerPawn_MoveUD_ADD, "MoveUD_ADD" }, // 2705011016
		{ &Z_Construct_UFunction_APlayerPawn_Process_Line, "Process_Line" }, // 25532683
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_RotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
	}
	template<> JAVELIN_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
	struct Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ScriptStructInfo[] = {
		{ FUART_INPUT::StaticStruct, Z_Construct_UScriptStruct_FUART_INPUT_Statics::NewStructOps, TEXT("UART_INPUT"), &Z_Registration_Info_UScriptStruct_UART_INPUT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUART_INPUT), 2870657774U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 2154187030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_2156628805(TEXT("/Script/Javelin"),
		Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Javelin_Source_Javelin_PlayerPawn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
