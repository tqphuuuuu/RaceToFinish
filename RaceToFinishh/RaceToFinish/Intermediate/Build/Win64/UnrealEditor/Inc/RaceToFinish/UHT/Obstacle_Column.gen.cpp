// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Obstacle_Column.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle_Column() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_AHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_AObstacle_Column();
RACETOFINISH_API UClass* Z_Construct_UClass_AObstacle_Column_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AObstacle_Column
void AObstacle_Column::StaticRegisterNativesAObstacle_Column()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle_Column);
UClass* Z_Construct_UClass_AObstacle_Column_NoRegister()
{
	return AObstacle_Column::StaticClass();
}
struct Z_Construct_UClass_AObstacle_Column_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/Obstacle_Column.h" },
		{ "ModuleRelativePath", "Obstacle/Obstacle_Column.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle_Column>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstacle_Column_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHammer,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Column_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Column_Statics::ClassParams = {
	&AObstacle_Column::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Column_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacle_Column_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacle_Column()
{
	if (!Z_Registration_Info_UClass_AObstacle_Column.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle_Column.OuterSingleton, Z_Construct_UClass_AObstacle_Column_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacle_Column.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AObstacle_Column>()
{
	return AObstacle_Column::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle_Column);
AObstacle_Column::~AObstacle_Column() {}
// End Class AObstacle_Column

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Obstacle_Column_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle_Column, AObstacle_Column::StaticClass, TEXT("AObstacle_Column"), &Z_Registration_Info_UClass_AObstacle_Column, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle_Column), 469901299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Obstacle_Column_h_3519931897(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Obstacle_Column_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Obstacle_Column_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
