// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/MovingBoard/Moving_ObstacleRail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoving_ObstacleRail() {}

// Begin Cross Module References
RACETOFINISH_API UClass* Z_Construct_UClass_AMoving_ObstacleRail();
RACETOFINISH_API UClass* Z_Construct_UClass_AMoving_ObstacleRail_NoRegister();
RACETOFINISH_API UClass* Z_Construct_UClass_AMovingBoard();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AMoving_ObstacleRail
void AMoving_ObstacleRail::StaticRegisterNativesAMoving_ObstacleRail()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoving_ObstacleRail);
UClass* Z_Construct_UClass_AMoving_ObstacleRail_NoRegister()
{
	return AMoving_ObstacleRail::StaticClass();
}
struct Z_Construct_UClass_AMoving_ObstacleRail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/MovingBoard/Moving_ObstacleRail.h" },
		{ "ModuleRelativePath", "Obstacle/MovingBoard/Moving_ObstacleRail.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoving_ObstacleRail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoving_ObstacleRail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMovingBoard,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_ObstacleRail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoving_ObstacleRail_Statics::ClassParams = {
	&AMoving_ObstacleRail::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_ObstacleRail_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoving_ObstacleRail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoving_ObstacleRail()
{
	if (!Z_Registration_Info_UClass_AMoving_ObstacleRail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoving_ObstacleRail.OuterSingleton, Z_Construct_UClass_AMoving_ObstacleRail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoving_ObstacleRail.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AMoving_ObstacleRail>()
{
	return AMoving_ObstacleRail::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoving_ObstacleRail);
AMoving_ObstacleRail::~AMoving_ObstacleRail() {}
// End Class AMoving_ObstacleRail

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_Moving_ObstacleRail_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoving_ObstacleRail, AMoving_ObstacleRail::StaticClass, TEXT("AMoving_ObstacleRail"), &Z_Registration_Info_UClass_AMoving_ObstacleRail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoving_ObstacleRail), 3402701096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_Moving_ObstacleRail_h_2933086700(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_Moving_ObstacleRail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_Moving_ObstacleRail_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
