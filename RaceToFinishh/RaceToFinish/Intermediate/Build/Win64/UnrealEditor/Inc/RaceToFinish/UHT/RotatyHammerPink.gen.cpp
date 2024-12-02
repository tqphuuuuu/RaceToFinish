// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Rotary Hammer/RotatyHammerPink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatyHammerPink() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotatyHammerPink();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotatyHammerPink_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARotatyHammerPink
void ARotatyHammerPink::StaticRegisterNativesARotatyHammerPink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatyHammerPink);
UClass* Z_Construct_UClass_ARotatyHammerPink_NoRegister()
{
	return ARotatyHammerPink::StaticClass();
}
struct Z_Construct_UClass_ARotatyHammerPink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Rotary Hammer/RotatyHammerPink.h" },
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotatyHammerPink.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatyHammerPink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARotatyHammerPink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARotaryHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatyHammerPink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatyHammerPink_Statics::ClassParams = {
	&ARotatyHammerPink::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatyHammerPink_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatyHammerPink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatyHammerPink()
{
	if (!Z_Registration_Info_UClass_ARotatyHammerPink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatyHammerPink.OuterSingleton, Z_Construct_UClass_ARotatyHammerPink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatyHammerPink.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARotatyHammerPink>()
{
	return ARotatyHammerPink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatyHammerPink);
ARotatyHammerPink::~ARotatyHammerPink() {}
// End Class ARotatyHammerPink

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotatyHammerPink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatyHammerPink, ARotatyHammerPink::StaticClass, TEXT("ARotatyHammerPink"), &Z_Registration_Info_UClass_ARotatyHammerPink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatyHammerPink), 4218586507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotatyHammerPink_h_566857431(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotatyHammerPink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotatyHammerPink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
