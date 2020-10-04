// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTO_TutoCharacter_generated_h
#error "TutoCharacter.generated.h already included, missing '#pragma once' in TutoCharacter.h"
#endif
#define TUTO_TutoCharacter_generated_h

#define Tuto_Source_Tuto_TutoCharacter_h_14_SPARSE_DATA
#define Tuto_Source_Tuto_TutoCharacter_h_14_RPC_WRAPPERS
#define Tuto_Source_Tuto_TutoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Tuto_Source_Tuto_TutoCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutoCharacter(); \
	friend struct Z_Construct_UClass_ATutoCharacter_Statics; \
public: \
	DECLARE_CLASS(ATutoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tuto"), NO_API) \
	DECLARE_SERIALIZER(ATutoCharacter)


#define Tuto_Source_Tuto_TutoCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATutoCharacter(); \
	friend struct Z_Construct_UClass_ATutoCharacter_Statics; \
public: \
	DECLARE_CLASS(ATutoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tuto"), NO_API) \
	DECLARE_SERIALIZER(ATutoCharacter)


#define Tuto_Source_Tuto_TutoCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoCharacter(ATutoCharacter&&); \
	NO_API ATutoCharacter(const ATutoCharacter&); \
public:


#define Tuto_Source_Tuto_TutoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoCharacter(ATutoCharacter&&); \
	NO_API ATutoCharacter(const ATutoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutoCharacter)


#define Tuto_Source_Tuto_TutoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATutoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATutoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATutoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATutoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATutoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATutoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATutoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATutoCharacter, L_MotionController); }


#define Tuto_Source_Tuto_TutoCharacter_h_11_PROLOG
#define Tuto_Source_Tuto_TutoCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tuto_Source_Tuto_TutoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Tuto_Source_Tuto_TutoCharacter_h_14_SPARSE_DATA \
	Tuto_Source_Tuto_TutoCharacter_h_14_RPC_WRAPPERS \
	Tuto_Source_Tuto_TutoCharacter_h_14_INCLASS \
	Tuto_Source_Tuto_TutoCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tuto_Source_Tuto_TutoCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tuto_Source_Tuto_TutoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Tuto_Source_Tuto_TutoCharacter_h_14_SPARSE_DATA \
	Tuto_Source_Tuto_TutoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tuto_Source_Tuto_TutoCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Tuto_Source_Tuto_TutoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTO_API UClass* StaticClass<class ATutoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tuto_Source_Tuto_TutoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
