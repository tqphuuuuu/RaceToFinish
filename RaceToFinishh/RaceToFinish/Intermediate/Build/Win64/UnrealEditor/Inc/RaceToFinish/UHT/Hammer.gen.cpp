// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Hammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AHammer
void AHammer::StaticRegisterNativesAHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHammer);
UClass* Z_Construct_UClass_AHammer_NoRegister()
{
	return AHammer::StaticClass();
}
struct Z_Construct_UClass_AHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Hammer.h" },
		{ "ModuleRelativePath", "Obstacle/Hammer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHammer_Statics::ClassParams = {
	&AHammer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_AHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHammer()
{
	if (!Z_Registration_Info_UClass_AHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHammer.OuterSingleton, Z_Construct_UClass_AHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHammer.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AHammer>()
{
	return AHammer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer);
AHammer::~AHammer() {}
// End Class AHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHammer, AHammer::StaticClass, TEXT("AHammer"), &Z_Registration_Info_UClass_AHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHammer), 3184188040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_h_640942191(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Hammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
