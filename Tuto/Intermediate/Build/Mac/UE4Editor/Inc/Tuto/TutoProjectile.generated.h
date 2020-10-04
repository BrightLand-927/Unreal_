// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TUTO_TutoProjectile_generated_h
#error "TutoProjectile.generated.h already included, missing '#pragma once' in TutoProjectile.h"
#endif
#define TUTO_TutoProjectile_generated_h

#define Tuto_Source_Tuto_TutoProjectile_h_12_SPARSE_DATA
#define Tuto_Source_Tuto_TutoProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Tuto_Source_Tuto_TutoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Tuto_Source_Tuto_TutoProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutoProjectile(); \
	friend struct Z_Construct_UClass_ATutoProjectile_Statics; \
public: \
	DECLARE_CLASS(ATutoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tuto"), NO_API) \
	DECLARE_SERIALIZER(ATutoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Tuto_Source_Tuto_TutoProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATutoProjectile(); \
	friend struct Z_Construct_UClass_ATutoProjectile_Statics; \
public: \
	DECLARE_CLASS(ATutoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tuto"), NO_API) \
	DECLARE_SERIALIZER(ATutoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Tuto_Source_Tuto_TutoProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoProjectile(ATutoProjectile&&); \
	NO_API ATutoProjectile(const ATutoProjectile&); \
public:


#define Tuto_Source_Tuto_TutoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoProjectile(ATutoProjectile&&); \
	NO_API ATutoProjectile(const ATutoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutoProjectile)


#define Tuto_Source_Tuto_TutoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATutoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATutoProjectile, ProjectileMovement); }


#define Tuto_Source_Tuto_TutoProjectile_h_9_PROLOG
#define Tuto_Source_Tuto_TutoProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tuto_Source_Tuto_TutoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Tuto_Source_Tuto_TutoProjectile_h_12_SPARSE_DATA \
	Tuto_Source_Tuto_TutoProjectile_h_12_RPC_WRAPPERS \
	Tuto_Source_Tuto_TutoProjectile_h_12_INCLASS \
	Tuto_Source_Tuto_TutoProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tuto_Source_Tuto_TutoProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tuto_Source_Tuto_TutoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Tuto_Source_Tuto_TutoProjectile_h_12_SPARSE_DATA \
	Tuto_Source_Tuto_TutoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tuto_Source_Tuto_TutoProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Tuto_Source_Tuto_TutoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTO_API UClass* StaticClass<class ATutoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tuto_Source_Tuto_TutoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
