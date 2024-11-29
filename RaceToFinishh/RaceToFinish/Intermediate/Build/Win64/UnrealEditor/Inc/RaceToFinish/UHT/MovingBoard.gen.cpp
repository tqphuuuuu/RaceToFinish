// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/MovingBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingBoard() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_AMovingBoard();
RACETOFINISH_API UClass* Z_Construct_UClass_AMovingBoard_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class AMovingBoard
void AMovingBoard::StaticRegisterNativesAMovingBoard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingBoard);
UClass* Z_Construct_UClass_AMovingBoard_NoRegister()
{
	return AMovingBoard::StaticClass();
}
struct Z_Construct_UClass_AMovingBoard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/MovingBoard.h" },
		{ "ModuleRelativePath", "Obstacle/MovingBoard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingBoard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovingBoard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingBoard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingBoard_Statics::ClassParams = {
	&AMovingBoard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingBoard_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingBoard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingBoard()
{
	if (!Z_Registration_Info_UClass_AMovingBoard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingBoard.OuterSingleton, Z_Construct_UClass_AMovingBoard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingBoard.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<AMovingBoard>()
{
	return AMovingBoard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingBoard);
AMovingBoard::~AMovingBoard() {}
// End Class AMovingBoard

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingBoard, AMovingBoard::StaticClass, TEXT("AMovingBoard"), &Z_Registration_Info_UClass_AMovingBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingBoard), 20146015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_2212382855(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
