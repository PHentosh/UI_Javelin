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
#ifdef JAVELIN_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define JAVELIN_Target_generated_h

#define FID_Javelin_Source_Javelin_Target_h_19_SPARSE_DATA
#define FID_Javelin_Source_Javelin_Target_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeingOverlap);


#define FID_Javelin_Source_Javelin_Target_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeingOverlap);


#define FID_Javelin_Source_Javelin_Target_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define FID_Javelin_Source_Javelin_Target_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Javelin"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define FID_Javelin_Source_Javelin_Target_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define FID_Javelin_Source_Javelin_Target_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define FID_Javelin_Source_Javelin_Target_h_16_PROLOG
#define FID_Javelin_Source_Javelin_Target_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_Target_h_19_SPARSE_DATA \
	FID_Javelin_Source_Javelin_Target_h_19_RPC_WRAPPERS \
	FID_Javelin_Source_Javelin_Target_h_19_INCLASS \
	FID_Javelin_Source_Javelin_Target_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Javelin_Source_Javelin_Target_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Javelin_Source_Javelin_Target_h_19_SPARSE_DATA \
	FID_Javelin_Source_Javelin_Target_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_Target_h_19_INCLASS_NO_PURE_DECLS \
	FID_Javelin_Source_Javelin_Target_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAVELIN_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Javelin_Source_Javelin_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
