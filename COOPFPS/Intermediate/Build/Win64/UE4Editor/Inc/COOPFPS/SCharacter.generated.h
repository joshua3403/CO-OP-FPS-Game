// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPFPS_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPFPS_SCharacter_generated_h

#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_RPC_WRAPPERS
#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPFPS"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPFPS"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_9_PROLOG
#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_RPC_WRAPPERS \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_INCLASS \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_INCLASS_NO_PURE_DECLS \
	COOPFPS_Source_COOPFPS_Public_SCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPFPS_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COOPFPS_Source_COOPFPS_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
