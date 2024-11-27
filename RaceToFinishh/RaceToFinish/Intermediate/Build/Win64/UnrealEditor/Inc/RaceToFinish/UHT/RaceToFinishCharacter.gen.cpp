// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/RaceToFinishCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceToFinishCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishCharacter();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARaceToFinishCharacter
void ARaceToFinishCharacter::StaticRegisterNativesARaceToFinishCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaceToFinishCharacter);
UClass* Z_Construct_UClass_ARaceToFinishCharacter_NoRegister()
{
	return ARaceToFinishCharacter::StaticClass();
}
struct Z_Construct_UClass_ARaceToFinishCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RaceToFinishCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RaceToFinishCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceToFinishCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceToFinishCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mouse_MetaData[] = {
		{ "ModuleRelativePath", "RaceToFinishCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceToFinishCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_Mouse = { "Mouse", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishCharacter, Mouse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mouse_MetaData), NewProp_Mouse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaceToFinishCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishCharacter_Statics::NewProp_Mouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARaceToFinishCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceToFinishCharacter_Statics::ClassParams = {
	&ARaceToFinishCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARaceToFinishCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARaceToFinishCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARaceToFinishCharacter()
{
	if (!Z_Registration_Info_UClass_ARaceToFinishCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaceToFinishCharacter.OuterSingleton, Z_Construct_UClass_ARaceToFinishCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARaceToFinishCharacter.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARaceToFinishCharacter>()
{
	return ARaceToFinishCharacter::StaticClass();
}
void ARaceToFinishCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Mouse(TEXT("Mouse"));
	const bool bIsValid = true
		&& Name_Mouse == ClassReps[(int32)ENetFields_Private::Mouse].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARaceToFinishCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceToFinishCharacter);
ARaceToFinishCharacter::~ARaceToFinishCharacter() {}
// End Class ARaceToFinishCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARaceToFinishCharacter, ARaceToFinishCharacter::StaticClass, TEXT("ARaceToFinishCharacter"), &Z_Registration_Info_UClass_ARaceToFinishCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaceToFinishCharacter), 3028472623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_3141434417(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
