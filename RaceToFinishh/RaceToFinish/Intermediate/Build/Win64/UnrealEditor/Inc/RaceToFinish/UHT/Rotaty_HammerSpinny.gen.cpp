// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Rotary Hammer/Rotaty_HammerSpinny.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotaty_HammerSpinny() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaty_HammerSpinny();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaty_HammerSpinny_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARotaty_HammerSpinny
void ARotaty_HammerSpinny::StaticRegisterNativesARotaty_HammerSpinny()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotaty_HammerSpinny);
UClass* Z_Construct_UClass_ARotaty_HammerSpinny_NoRegister()
{
	return ARotaty_HammerSpinny::StaticClass();
}
struct Z_Construct_UClass_ARotaty_HammerSpinny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Rotary Hammer/Rotaty_HammerSpinny.h" },
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/Rotaty_HammerSpinny.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotaty_HammerSpinny>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARotaty_HammerSpinny_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARotaryHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotaty_HammerSpinny_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotaty_HammerSpinny_Statics::ClassParams = {
	&ARotaty_HammerSpinny::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotaty_HammerSpinny_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotaty_HammerSpinny_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotaty_HammerSpinny()
{
	if (!Z_Registration_Info_UClass_ARotaty_HammerSpinny.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotaty_HammerSpinny.OuterSingleton, Z_Construct_UClass_ARotaty_HammerSpinny_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotaty_HammerSpinny.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARotaty_HammerSpinny>()
{
	return ARotaty_HammerSpinny::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotaty_HammerSpinny);
ARotaty_HammerSpinny::~ARotaty_HammerSpinny() {}
// End Class ARotaty_HammerSpinny

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_Rotaty_HammerSpinny_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotaty_HammerSpinny, ARotaty_HammerSpinny::StaticClass, TEXT("ARotaty_HammerSpinny"), &Z_Registration_Info_UClass_ARotaty_HammerSpinny, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotaty_HammerSpinny), 2060137261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_Rotaty_HammerSpinny_h_2469663637(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_Rotaty_HammerSpinny_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_Rotaty_HammerSpinny_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
