// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tree;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tree()
	{
		if (!Z_Registration_Info_UPackage__Script_Tree.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tree",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x001417AD,
				0xFB004070,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tree.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tree.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tree(Z_Construct_UPackage__Script_Tree, TEXT("/Script/Tree"), Z_Registration_Info_UPackage__Script_Tree, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x001417AD, 0xFB004070));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
