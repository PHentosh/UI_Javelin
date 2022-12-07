// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUART_INPUT;
#ifdef JAVELIN_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define JAVELIN_PlayerPawn_generated_h

#define FID_Javelin_Source_Javelin_PlayerPawn_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUART_INPUT_Statics; \
	JAVELIN_API static class UScriptStruct* StaticStruct();


template<> JAVELIN_API UScriptStruct* StaticStruct<struct FUART_INPUT>();

#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_SPARSE_DATA
#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcess_Line); \
	DECLARE_FUNCTION(execMoveLR_ADD); \
	DECLARE_FUNCTION(execMoveUD_ADD);


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcess_Line); \
	DECLARE_FUNCTION(execMoveLR_ADD); \
	DECLARE_FUNCTION(execMoveUD_ADD);


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define FID_Javelin_Source_Javelin_PlayerPawn_h_32_PROLOG
#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_SPARSE_DATA \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_RPC_WRAPPERS \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_INCLASS \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Javelin_Source_Javelin_PlayerPawn_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_SPARSE_DATA \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_INCLASS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_PlayerPawn_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAVELIN_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Javelin_Source_Javelin_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
