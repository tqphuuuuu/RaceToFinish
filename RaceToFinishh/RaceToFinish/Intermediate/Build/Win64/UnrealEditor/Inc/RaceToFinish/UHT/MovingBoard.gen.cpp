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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// T\xe1\xbb\x91""c \xc4\x91\xe1\xbb\x99 di chuy\xe1\xbb\x83n\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/MovingBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "T\xe1\xbb\x91""c \xc4\x91\xe1\xbb\x99 di chuy\xe1\xbb\x83n" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[] = {
		{ "Category", "Time Move" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Th\xe1\xbb\x9di gian chuy\xe1\xbb\x83n \xc4\x91\xe1\xbb\x99ng\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/MovingBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Th\xe1\xbb\x9di gian chuy\xe1\xbb\x83n \xc4\x91\xe1\xbb\x99ng" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveForward_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Obstacle/MovingBoard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Obstacle/MovingBoard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
	static void NewProp_bMoveForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingBoard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingBoard_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingBoard, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingBoard_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingBoard, MoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTime_MetaData), NewProp_MoveTime_MetaData) };
void Z_Construct_UClass_AMovingBoard_Statics::NewProp_bMoveForward_SetBit(void* Obj)
{
	((AMovingBoard*)Obj)->bMoveForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingBoard_Statics::NewProp_bMoveForward = { "bMoveForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingBoard), &Z_Construct_UClass_AMovingBoard_Statics::NewProp_bMoveForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveForward_MetaData), NewProp_bMoveForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingBoard_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingBoard, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingBoard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingBoard_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingBoard_Statics::NewProp_MoveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingBoard_Statics::NewProp_bMoveForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingBoard_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingBoard_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AMovingBoard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingBoard_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMovingBoard, AMovingBoard::StaticClass, TEXT("AMovingBoard"), &Z_Registration_Info_UClass_AMovingBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingBoard), 927316177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_110719442(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
