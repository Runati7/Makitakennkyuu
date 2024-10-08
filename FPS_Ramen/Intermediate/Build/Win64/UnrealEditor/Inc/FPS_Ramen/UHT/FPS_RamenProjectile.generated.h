// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_RamenProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPS_RAMEN_FPS_RamenProjectile_generated_h
#error "FPS_RamenProjectile.generated.h already included, missing '#pragma once' in FPS_RamenProjectile.h"
#endif
#define FPS_RAMEN_FPS_RamenProjectile_generated_h

#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_SPARSE_DATA
#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_ACCESSORS
#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_RamenProjectile(); \
	friend struct Z_Construct_UClass_AFPS_RamenProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_RamenProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Ramen"), NO_API) \
	DECLARE_SERIALIZER(AFPS_RamenProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_RamenProjectile(AFPS_RamenProjectile&&); \
	NO_API AFPS_RamenProjectile(const AFPS_RamenProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_RamenProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_RamenProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_RamenProjectile) \
	NO_API virtual ~AFPS_RamenProjectile();


#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_12_PROLOG
#define FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_SPARSE_DATA \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_ACCESSORS \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_RAMEN_API UClass* StaticClass<class AFPS_RamenProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
