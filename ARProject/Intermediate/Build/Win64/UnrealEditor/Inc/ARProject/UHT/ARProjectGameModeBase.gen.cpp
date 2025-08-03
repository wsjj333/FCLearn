// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARProject/ARProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARProjectGameModeBase() {}
// Cross Module References
	ARPROJECT_API UClass* Z_Construct_UClass_AARProjectGameModeBase();
	ARPROJECT_API UClass* Z_Construct_UClass_AARProjectGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARProject();
// End Cross Module References
	void AARProjectGameModeBase::StaticRegisterNativesAARProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARProjectGameModeBase);
	UClass* Z_Construct_UClass_AARProjectGameModeBase_NoRegister()
	{
		return AARProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AARProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ARProjectGameModeBase.h" },
		{ "ModuleRelativePath", "ARProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARProjectGameModeBase_Statics::ClassParams = {
		&AARProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AARProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AARProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARProjectGameModeBase.OuterSingleton;
	}
	template<> ARPROJECT_API UClass* StaticClass<AARProjectGameModeBase>()
	{
		return AARProjectGameModeBase::StaticClass();
	}
	AARProjectGameModeBase::AARProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARProjectGameModeBase);
	AARProjectGameModeBase::~AARProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Jeon_Documents_FCLearn_ARProject_Source_ARProject_ARProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_FCLearn_ARProject_Source_ARProject_ARProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARProjectGameModeBase, AARProjectGameModeBase::StaticClass, TEXT("AARProjectGameModeBase"), &Z_Registration_Info_UClass_AARProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARProjectGameModeBase), 4216007412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_FCLearn_ARProject_Source_ARProject_ARProjectGameModeBase_h_2541942309(TEXT("/Script/ARProject"),
		Z_CompiledInDeferFile_FID_Users_Jeon_Documents_FCLearn_ARProject_Source_ARProject_ARProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jeon_Documents_FCLearn_ARProject_Source_ARProject_ARProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
