// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tree/ProceduralTreeMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralTreeMeshComponent() {}

// Begin Cross Module References
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
TREE_API UClass* Z_Construct_UClass_UProceduralTreeMeshComponent();
TREE_API UClass* Z_Construct_UClass_UProceduralTreeMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tree();
// End Cross Module References

// Begin Class UProceduralTreeMeshComponent
void UProceduralTreeMeshComponent::StaticRegisterNativesUProceduralTreeMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralTreeMeshComponent);
UClass* Z_Construct_UClass_UProceduralTreeMeshComponent_NoRegister()
{
	return UProceduralTreeMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UProceduralTreeMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "ProceduralTreeMeshComponent.h" },
		{ "ModuleRelativePath", "ProceduralTreeMeshComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralTreeMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Tree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::ClassParams = {
	&UProceduralTreeMeshComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralTreeMeshComponent()
{
	if (!Z_Registration_Info_UClass_UProceduralTreeMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralTreeMeshComponent.OuterSingleton, Z_Construct_UClass_UProceduralTreeMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralTreeMeshComponent.OuterSingleton;
}
template<> TREE_API UClass* StaticClass<UProceduralTreeMeshComponent>()
{
	return UProceduralTreeMeshComponent::StaticClass();
}
UProceduralTreeMeshComponent::UProceduralTreeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralTreeMeshComponent);
UProceduralTreeMeshComponent::~UProceduralTreeMeshComponent() {}
// End Class UProceduralTreeMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_ProceduralTreeMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralTreeMeshComponent, UProceduralTreeMeshComponent::StaticClass, TEXT("UProceduralTreeMeshComponent"), &Z_Registration_Info_UClass_UProceduralTreeMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralTreeMeshComponent), 3210753934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_ProceduralTreeMeshComponent_h_1902112976(TEXT("/Script/Tree"),
	Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_ProceduralTreeMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Documents_Code_ProceduralTree_3D_Tree_Source_Tree_ProceduralTreeMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
