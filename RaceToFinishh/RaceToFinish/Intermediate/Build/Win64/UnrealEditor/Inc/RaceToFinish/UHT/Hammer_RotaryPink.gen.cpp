// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Hammer_RotaryPink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer_RotaryPink() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_RotaryPink();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_RotaryPink_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AHammer_RotaryPink
void AHammer_RotaryPink::StaticRegisterNativesAHammer_RotaryPink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHammer_RotaryPink);
UClass* Z_Construct_UClass_AHammer_RotaryPink_NoRegister()
{
	return AHammer_RotaryPink::StaticClass();
}
struct Z_Construct_UClass_AHammer_RotaryPink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Hammer_RotaryPink.h" },
		{ "ModuleRelativePath", "Obstacle/Hammer_RotaryPink.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer_RotaryPink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHammer_RotaryPink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_RotaryPink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHammer_RotaryPink_Statics::ClassParams = {
	&AHammer_RotaryPink::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_RotaryPink_Statics::Class_MetaDataParams), Z_Construct_UClass_AHammer_RotaryPink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHammer_RotaryPink()
{
	if (!Z_Registration_Info_UClass_AHammer_RotaryPink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHammer_RotaryPink.OuterSingleton, Z_Construct_UClass_AHammer_RotaryPink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHammer_RotaryPink.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AHammer_RotaryPink>()
{
	return AHammer_RotaryPink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer_RotaryPink);
AHammer_RotaryPink::~AHammer_RotaryPink() {}
// End Class AHammer_RotaryPink

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_RotaryPink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHammer_RotaryPink, AHammer_RotaryPink::StaticClass, TEXT("AHammer_RotaryPink"), &Z_Registration_Info_UClass_AHammer_RotaryPink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHammer_RotaryPink), 2158285608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_RotaryPink_h_2614073934(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_RotaryPink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_RotaryPink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
