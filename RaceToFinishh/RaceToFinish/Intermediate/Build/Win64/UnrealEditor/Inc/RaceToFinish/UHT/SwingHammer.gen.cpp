// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/SwingHammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_ASwingHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ASwingHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ASwingHammer
void ASwingHammer::StaticRegisterNativesASwingHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwingHammer);
UClass* Z_Construct_UClass_ASwingHammer_NoRegister()
{
	return ASwingHammer::StaticClass();
}
struct Z_Construct_UClass_ASwingHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/SwingHammer.h" },
		{ "ModuleRelativePath", "Obstacle/SwingHammer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASwingHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwingHammer_Statics::ClassParams = {
	&ASwingHammer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwingHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASwingHammer()
{
	if (!Z_Registration_Info_UClass_ASwingHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwingHammer.OuterSingleton, Z_Construct_UClass_ASwingHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASwingHammer.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ASwingHammer>()
{
	return ASwingHammer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingHammer);
ASwingHammer::~ASwingHammer() {}
// End Class ASwingHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwingHammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASwingHammer, ASwingHammer::StaticClass, TEXT("ASwingHammer"), &Z_Registration_Info_UClass_ASwingHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwingHammer), 3848488012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwingHammer_h_4063513116(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwingHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwingHammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
