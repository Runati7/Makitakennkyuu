// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Ramen/FPS_RamenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_RamenGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPS_RAMEN_API UClass* Z_Construct_UClass_AFPS_RamenGameMode();
	FPS_RAMEN_API UClass* Z_Construct_UClass_AFPS_RamenGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Ramen();
// End Cross Module References
	void AFPS_RamenGameMode::StaticRegisterNativesAFPS_RamenGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_RamenGameMode);
	UClass* Z_Construct_UClass_AFPS_RamenGameMode_NoRegister()
	{
		return AFPS_RamenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_RamenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_RamenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Ramen,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_RamenGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_RamenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_RamenGameMode.h" },
		{ "ModuleRelativePath", "FPS_RamenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_RamenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_RamenGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_RamenGameMode_Statics::ClassParams = {
		&AFPS_RamenGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_RamenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_RamenGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPS_RamenGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPS_RamenGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_RamenGameMode.OuterSingleton, Z_Construct_UClass_AFPS_RamenGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_RamenGameMode.OuterSingleton;
	}
	template<> FPS_RAMEN_API UClass* StaticClass<AFPS_RamenGameMode>()
	{
		return AFPS_RamenGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_RamenGameMode);
	AFPS_RamenGameMode::~AFPS_RamenGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_RamenGameMode, AFPS_RamenGameMode::StaticClass, TEXT("AFPS_RamenGameMode"), &Z_Registration_Info_UClass_AFPS_RamenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_RamenGameMode), 2245608018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenGameMode_h_4201063516(TEXT("/Script/FPS_Ramen"),
		Z_CompiledInDeferFile_FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_A22042_Documents_Sotusei_Project_FPS_Ramen_Source_FPS_Ramen_FPS_RamenGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
