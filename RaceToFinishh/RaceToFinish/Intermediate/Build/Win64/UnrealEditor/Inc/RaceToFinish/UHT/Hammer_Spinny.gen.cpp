// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Hammer_Spinny.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer_Spinny() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_Spinny();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_Spinny_NoRegister();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AHammer_Spinny
void AHammer_Spinny::StaticRegisterNativesAHammer_Spinny()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHammer_Spinny);
UClass* Z_Construct_UClass_AHammer_Spinny_NoRegister()
{
	return AHammer_Spinny::StaticClass();
}
struct Z_Construct_UClass_AHammer_Spinny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Hammer_Spinny.h" },
		{ "ModuleRelativePath", "Obstacle/Hammer_Spinny.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer_Spinny>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHammer_Spinny_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARotaryHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Spinny_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHammer_Spinny_Statics::ClassParams = {
	&AHammer_Spinny::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Spinny_Statics::Class_MetaDataParams), Z_Construct_UClass_AHammer_Spinny_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHammer_Spinny()
{
	if (!Z_Registration_Info_UClass_AHammer_Spinny.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHammer_Spinny.OuterSingleton, Z_Construct_UClass_AHammer_Spinny_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHammer_Spinny.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AHammer_Spinny>()
{
	return AHammer_Spinny::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer_Spinny);
AHammer_Spinny::~AHammer_Spinny() {}
// End Class AHammer_Spinny

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Spinny_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHammer_Spinny, AHammer_Spinny::StaticClass, TEXT("AHammer_Spinny"), &Z_Registration_Info_UClass_AHammer_Spinny, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHammer_Spinny), 3048582794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Spinny_h_2696084704(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Spinny_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_Spinny_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
