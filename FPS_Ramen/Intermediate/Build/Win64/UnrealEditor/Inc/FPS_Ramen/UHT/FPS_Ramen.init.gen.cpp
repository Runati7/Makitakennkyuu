// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_Ramen_init() {}
	FPS_RAMEN_API UFunction* Z_Construct_UDelegateFunction_FPS_Ramen_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPS_Ramen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPS_Ramen()
	{
		if (!Z_Registration_Info_UPackage__Script_FPS_Ramen.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_Ramen_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS_Ramen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56B95CB9,
				0x39AD51F8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS_Ramen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS_Ramen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS_Ramen(Z_Construct_UPackage__Script_FPS_Ramen, TEXT("/Script/FPS_Ramen"), Z_Registration_Info_UPackage__Script_FPS_Ramen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56B95CB9, 0x39AD51F8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
