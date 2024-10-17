// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tree/MainTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainTree() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TREE_API UClass* Z_Construct_UClass_AMainTree();
TREE_API UClass* Z_Construct_UClass_AMainTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tree();
// End Cross Module References

// Begin Class AMainTree
void AMainTree::StaticRegisterNativesAMainTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainTree);
UClass* Z_Construct_UClass_AMainTree_NoRegister()
{
	return AMainTree::StaticClass();
}
struct Z_Construct_UClass_AMainTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MainTree.h" },
		{ "ModuleRelativePath", "MainTree.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainTree_Statics::ClassParams = {
	&AMainTree::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainTree_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainTree()
{
	if (!Z_Registration_Info_UClass_AMainTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainTree.OuterSingleton, Z_Construct_UClass_AMainTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainTree.OuterSingleton;
}
template<> TREE_API UClass* StaticClass<AMainTree>()
{
	return AMainTree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainTree);
AMainTree::~AMainTree() {}
// End Class AMainTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_MainTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainTree, AMainTree::StaticClass, TEXT("AMainTree"), &Z_Registration_Info_UClass_AMainTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainTree), 2134165230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_MainTree_h_636773353(TEXT("/Script/Tree"),
	Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_MainTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_MainTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
