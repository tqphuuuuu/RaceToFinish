// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/RaceToFinishGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceToFinishGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishGameMode();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARaceToFinishGameMode
void ARaceToFinishGameMode::StaticRegisterNativesARaceToFinishGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaceToFinishGameMode);
UClass* Z_Construct_UClass_ARaceToFinishGameMode_NoRegister()
{
	return ARaceToFinishGameMode::StaticClass();
}
struct Z_Construct_UClass_ARaceToFinishGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RaceToFinishGameMode.h" },
		{ "ModuleRelativePath", "RaceToFinishGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceToFinishGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARaceToFinishGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceToFinishGameMode_Statics::ClassParams = {
	&ARaceToFinishGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARaceToFinishGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARaceToFinishGameMode()
{
	if (!Z_Registration_Info_UClass_ARaceToFinishGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaceToFinishGameMode.OuterSingleton, Z_Construct_UClass_ARaceToFinishGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARaceToFinishGameMode.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARaceToFinishGameMode>()
{
	return ARaceToFinishGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceToFinishGameMode);
ARaceToFinishGameMode::~ARaceToFinishGameMode() {}
// End Class ARaceToFinishGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARaceToFinishGameMode, ARaceToFinishGameMode::StaticClass, TEXT("ARaceToFinishGameMode"), &Z_Registration_Info_UClass_ARaceToFinishGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaceToFinishGameMode), 2969748819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishGameMode_h_721025645(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
