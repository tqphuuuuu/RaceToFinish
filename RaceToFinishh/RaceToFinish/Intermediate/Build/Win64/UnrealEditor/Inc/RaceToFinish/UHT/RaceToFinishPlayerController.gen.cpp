// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/RaceToFinishPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceToFinishPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishPlayerController();
RACETOFINISH_API UClass* Z_Construct_UClass_ARaceToFinishPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARaceToFinishPlayerController Function Server_Test
struct RaceToFinishPlayerController_eventServer_Test_Parms
{
	FVector MouseLocation;
};
static const FName NAME_ARaceToFinishPlayerController_Server_Test = FName(TEXT("Server_Test"));
void ARaceToFinishPlayerController::Server_Test(FVector MouseLocation)
{
	RaceToFinishPlayerController_eventServer_Test_Parms Parms;
	Parms.MouseLocation=MouseLocation;
	UFunction* Func = FindFunctionChecked(NAME_ARaceToFinishPlayerController_Server_Test);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::NewProp_MouseLocation = { "MouseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaceToFinishPlayerController_eventServer_Test_Parms, MouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::NewProp_MouseLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaceToFinishPlayerController, nullptr, "Server_Test", nullptr, nullptr, Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::PropPointers), sizeof(RaceToFinishPlayerController_eventServer_Test_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::Function_MetaDataParams) };
static_assert(sizeof(RaceToFinishPlayerController_eventServer_Test_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARaceToFinishPlayerController::execServer_Test)
{
	P_GET_STRUCT(FVector,Z_Param_MouseLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Test_Implementation(Z_Param_MouseLocation);
	P_NATIVE_END;
}
// End Class ARaceToFinishPlayerController Function Server_Test

// Begin Class ARaceToFinishPlayerController
void ARaceToFinishPlayerController::StaticRegisterNativesARaceToFinishPlayerController()
{
	UClass* Class = ARaceToFinishPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_Test", &ARaceToFinishPlayerController::execServer_Test },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaceToFinishPlayerController);
UClass* Z_Construct_UClass_ARaceToFinishPlayerController_NoRegister()
{
	return ARaceToFinishPlayerController::StaticClass();
}
struct Z_Construct_UClass_ARaceToFinishPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RaceToFinishPlayerController.h" },
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Action\n" },
#endif
		{ "ModuleRelativePath", "RaceToFinishPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaceToFinishPlayerController_Server_Test, "Server_Test" }, // 2703679597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceToFinishPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaceToFinishPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaceToFinishPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_SetDestinationTouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceToFinishPlayerController_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARaceToFinishPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceToFinishPlayerController_Statics::ClassParams = {
	&ARaceToFinishPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARaceToFinishPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaceToFinishPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARaceToFinishPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARaceToFinishPlayerController()
{
	if (!Z_Registration_Info_UClass_ARaceToFinishPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaceToFinishPlayerController.OuterSingleton, Z_Construct_UClass_ARaceToFinishPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARaceToFinishPlayerController.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ARaceToFinishPlayerController>()
{
	return ARaceToFinishPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceToFinishPlayerController);
ARaceToFinishPlayerController::~ARaceToFinishPlayerController() {}
// End Class ARaceToFinishPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARaceToFinishPlayerController, ARaceToFinishPlayerController::StaticClass, TEXT("ARaceToFinishPlayerController"), &Z_Registration_Info_UClass_ARaceToFinishPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaceToFinishPlayerController), 3250106735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_1439123137(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
