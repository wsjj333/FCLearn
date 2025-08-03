// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ARProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ARProject()
	{
		if (!Z_Registration_Info_UPackage__Script_ARProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ARProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC0A3D12F,
				0xAD24A435,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ARProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ARProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ARProject(Z_Construct_UPackage__Script_ARProject, TEXT("/Script/ARProject"), Z_Registration_Info_UPackage__Script_ARProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC0A3D12F, 0xAD24A435));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
