// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/CheckWin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckWin() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_ACheckWin();
RACETOFINISH_API UClass* Z_Construct_UClass_ACheckWin_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ACheckWin
void ACheckWin::StaticRegisterNativesACheckWin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckWin);
UClass* Z_Construct_UClass_ACheckWin_NoRegister()
{
	return ACheckWin::StaticClass();
}
struct Z_Construct_UClass_ACheckWin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CheckWin.h" },
		{ "ModuleRelativePath", "CheckWin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckWin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACheckWin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckWin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckWin_Statics::ClassParams = {
	&ACheckWin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckWin_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckWin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckWin()
{
	if (!Z_Registration_Info_UClass_ACheckWin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckWin.OuterSingleton, Z_Construct_UClass_ACheckWin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckWin.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ACheckWin>()
{
	return ACheckWin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckWin);
ACheckWin::~ACheckWin() {}
// End Class ACheckWin

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_CheckWin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckWin, ACheckWin::StaticClass, TEXT("ACheckWin"), &Z_Registration_Info_UClass_ACheckWin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckWin), 125104614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_CheckWin_h_2293775521(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_CheckWin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_CheckWin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
