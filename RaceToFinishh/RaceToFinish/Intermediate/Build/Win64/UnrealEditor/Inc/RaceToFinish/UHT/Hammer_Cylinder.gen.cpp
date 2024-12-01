// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Hammer_Cylinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer_Cylinder() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_Cylinder();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_Cylinder_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AHammer_Cylinder
void AHammer_Cylinder::StaticRegisterNativesAHammer_Cylinder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHammer_Cylinder);
UClass* Z_Construct_UClass_AHammer_Cylinder_NoRegister()
{
	return AHammer_Cylinder::StaticClass();
}
struct Z_Construct_UClass_AHammer_Cylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Hammer_Cylinder.h" },
		{ "ModuleRelativePath", "Obstacle/Hammer_Cylinder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer_Cylinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHammer_Cylinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Cylinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHammer_Cylinder_Statics::ClassParams = {
	&AHammer_Cylinder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Cylinder_Statics::Class_MetaDataParams), Z_Construct_UClass_AHammer_Cylinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHammer_Cylinder()
{
	if (!Z_Registration_Info_UClass_AHammer_Cylinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHammer_Cylinder.OuterSingleton, Z_Construct_UClass_AHammer_Cylinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHammer_Cylinder.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AHammer_Cylinder>()
{
	return AHammer_Cylinder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer_Cylinder);
AHammer_Cylinder::~AHammer_Cylinder() {}
// End Class AHammer_Cylinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Cylinder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHammer_Cylinder, AHammer_Cylinder::StaticClass, TEXT("AHammer_Cylinder"), &Z_Registration_Info_UClass_AHammer_Cylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHammer_Cylinder), 1785415365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Cylinder_h_3279046187(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Cylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Cylinder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
