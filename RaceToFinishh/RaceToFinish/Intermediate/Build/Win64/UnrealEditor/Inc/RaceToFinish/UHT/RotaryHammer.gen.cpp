// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/RotaryHammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotaryHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARotaryHammer
void ARotaryHammer::StaticRegisterNativesARotaryHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotaryHammer);
UClass* Z_Construct_UClass_ARotaryHammer_NoRegister()
{
	return ARotaryHammer::StaticClass();
}
struct Z_Construct_UClass_ARotaryHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle/RotaryHammer.h" },
		{ "ModuleRelativePath", "Obstacle/RotaryHammer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed of rotation, editable in the editor\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of rotation, editable in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[] = {
		{ "Category", "Rotation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction of rotation: 1 for clockwise, -1 for counter-clockwise\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of rotation: 1 for clockwise, -1 for counter-clockwise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotaryHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotaryHammer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotaryHammer, RotationDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDirection_MetaData), NewProp_RotationDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotaryHammer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotaryHammer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotaryHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotaryHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotaryHammer_Statics::ClassParams = {
	&ARotaryHammer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotaryHammer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotaryHammer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotaryHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotaryHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotaryHammer()
{
	if (!Z_Registration_Info_UClass_ARotaryHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotaryHammer.OuterSingleton, Z_Construct_UClass_ARotaryHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotaryHammer.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARotaryHammer>()
{
	return ARotaryHammer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotaryHammer);
ARotaryHammer::~ARotaryHammer() {}
// End Class ARotaryHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_RotaryHammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotaryHammer, ARotaryHammer::StaticClass, TEXT("ARotaryHammer"), &Z_Registration_Info_UClass_ARotaryHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotaryHammer), 2705665373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_RotaryHammer_h_4181223315(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_RotaryHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_RotaryHammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
