// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/SwimngHamer/SwingHammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_ASwingHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ASwingHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ASwingHammer
void ASwingHammer::StaticRegisterNativesASwingHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwingHammer);
UClass* Z_Construct_UClass_ASwingHammer_NoRegister()
{
	return ASwingHammer::StaticClass();
}
struct Z_Construct_UClass_ASwingHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/SwimngHamer/SwingHammer.h" },
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Swing Hammer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation speed and limits\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation speed and limits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[] = {
		{ "Category", "Swing Hammer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation speed in degrees per second\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation speed in degrees per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotation_MetaData[] = {
		{ "Category", "Swing Hammer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max rotation angle\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max rotation angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current rotation of the hammer\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current rotation of the hammer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction of rotation (1 for clockwise, -1 for counter-clockwise)\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/SwimngHamer/SwingHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of rotation (1 for clockwise, -1 for counter-clockwise)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwingHammer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwingHammer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwingHammer_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwingHammer, MaxRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotation_MetaData), NewProp_MaxRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwingHammer_Statics::NewProp_MinRotation = { "MinRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwingHammer, MinRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotation_MetaData), NewProp_MinRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwingHammer_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwingHammer, CurrentRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRotation_MetaData), NewProp_CurrentRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASwingHammer_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwingHammer, RotationDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDirection_MetaData), NewProp_RotationDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwingHammer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingHammer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingHammer_Statics::NewProp_MaxRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingHammer_Statics::NewProp_MinRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingHammer_Statics::NewProp_CurrentRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingHammer_Statics::NewProp_RotationDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASwingHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwingHammer_Statics::ClassParams = {
	&ASwingHammer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASwingHammer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwingHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwingHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASwingHammer()
{
	if (!Z_Registration_Info_UClass_ASwingHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwingHammer.OuterSingleton, Z_Construct_UClass_ASwingHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASwingHammer.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ASwingHammer>()
{
	return ASwingHammer::StaticClass();
}
void ASwingHammer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentRotation(TEXT("CurrentRotation"));
	const bool bIsValid = true
		&& Name_CurrentRotation == ClassReps[(int32)ENetFields_Private::CurrentRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASwingHammer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingHammer);
ASwingHammer::~ASwingHammer() {}
// End Class ASwingHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASwingHammer, ASwingHammer::StaticClass, TEXT("ASwingHammer"), &Z_Registration_Info_UClass_ASwingHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwingHammer), 2728447649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_2361370234(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
