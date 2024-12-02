// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/Obstacle/Rotary Hammer/RotaryHammer.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotaryHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer();
RACETOFINISH_API UClass* Z_Construct_UClass_ARotaryHammer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ARotaryHammer Function OnHammerOverlapBegin
struct Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics
{
	struct RotaryHammer_eventOnHammerOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handle overlap events\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle overlap events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotaryHammer_eventOnHammerOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotaryHammer_eventOnHammerOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotaryHammer_eventOnHammerOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotaryHammer_eventOnHammerOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((RotaryHammer_eventOnHammerOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotaryHammer_eventOnHammerOverlapBegin_Parms), &Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotaryHammer_eventOnHammerOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotaryHammer, nullptr, "OnHammerOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::RotaryHammer_eventOnHammerOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::RotaryHammer_eventOnHammerOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARotaryHammer::execOnHammerOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHammerOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ARotaryHammer Function OnHammerOverlapBegin

// Begin Class ARotaryHammer
void ARotaryHammer::StaticRegisterNativesARotaryHammer()
{
	UClass* Class = ARotaryHammer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHammerOverlapBegin", &ARotaryHammer::execOnHammerOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed of rotation\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "Knockback Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Knockback force\n" },
#endif
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Knockback force" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle/Rotary Hammer/RotaryHammer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARotaryHammer_OnHammerOverlapBegin, "OnHammerOverlapBegin" }, // 2807222186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotaryHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotaryHammer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotaryHammer_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotaryHammer, KnockbackForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotaryHammer_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotaryHammer, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotaryHammer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotaryHammer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotaryHammer_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotaryHammer_Statics::NewProp_CollisionBox,
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
	FuncInfo,
	Z_Construct_UClass_ARotaryHammer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotaryHammer, ARotaryHammer::StaticClass, TEXT("ARotaryHammer"), &Z_Registration_Info_UClass_ARotaryHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotaryHammer), 3265943650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_492895444(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
