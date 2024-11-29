// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/SpinnyHammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinnyHammer() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ASpinnyHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ASpinnyHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ASpinnyHammer
void ASpinnyHammer::StaticRegisterNativesASpinnyHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpinnyHammer);
UClass* Z_Construct_UClass_ASpinnyHammer_NoRegister()
{
	return ASpinnyHammer::StaticClass();
}
struct Z_Construct_UClass_ASpinnyHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/SpinnyHammer.h" },
		{ "ModuleRelativePath", "Obstacle/SpinnyHammer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpinnyHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpinnyHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARotaryHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpinnyHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpinnyHammer_Statics::ClassParams = {
	&ASpinnyHammer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpinnyHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpinnyHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpinnyHammer()
{
	if (!Z_Registration_Info_UClass_ASpinnyHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpinnyHammer.OuterSingleton, Z_Construct_UClass_ASpinnyHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpinnyHammer.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ASpinnyHammer>()
{
	return ASpinnyHammer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpinnyHammer);
ASpinnyHammer::~ASpinnyHammer() {}
// End Class ASpinnyHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SpinnyHammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpinnyHammer, ASpinnyHammer::StaticClass, TEXT("ASpinnyHammer"), &Z_Registration_Info_UClass_ASpinnyHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpinnyHammer), 1395789448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SpinnyHammer_h_2850648684(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SpinnyHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SpinnyHammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
