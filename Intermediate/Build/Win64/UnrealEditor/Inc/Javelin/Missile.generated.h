// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBoxComponent;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JAVELIN_Missile_generated_h
#error "Missile.generated.h already included, missing '#pragma once' in Missile.h"
#endif
#define JAVELIN_Missile_generated_h

#define FID_Javelin_Source_Javelin_Missile_h_16_SPARSE_DATA
#define FID_Javelin_Source_Javelin_Missile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeingOverlap); \
	DECLARE_FUNCTION(execLaunch);


#define FID_Javelin_Source_Javelin_Missile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeingOverlap); \
	DECLARE_FUNCTION(execLaunch);


#define FID_Javelin_Source_Javelin_Missile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define FID_Javelin_Source_Javelin_Missile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define FID_Javelin_Source_Javelin_Missile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public:


#define FID_Javelin_Source_Javelin_Missile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissile)


#define FID_Javelin_Source_Javelin_Missile_h_13_PROLOG
#define FID_Javelin_Source_Javelin_Missile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_Missile_h_16_SPARSE_DATA \
	FID_Javelin_Source_Javelin_Missile_h_16_RPC_WRAPPERS \
	FID_Javelin_Source_Javelin_Missile_h_16_INCLASS \
	FID_Javelin_Source_Javelin_Missile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Javelin_Source_Javelin_Missile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_Missile_h_16_SPARSE_DATA \
	FID_Javelin_Source_Javelin_Missile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_Missile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_Missile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAVELIN_API UClass* StaticClass<class AMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Javelin_Source_Javelin_Missile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
