// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceToFinish/NPC/NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
RACETOFINISH_API UClass* Z_Construct_UClass_ANPC();
RACETOFINISH_API UClass* Z_Construct_UClass_ANPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_RaceToFinish();
// End Cross Module References

// Begin Class ANPC
void ANPC::StaticRegisterNativesANPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC);
UClass* Z_Construct_UClass_ANPC_NoRegister()
{
	return ANPC::StaticClass();
}
struct Z_Construct_UClass_ANPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/NPC.h" },
		{ "ModuleRelativePath", "NPC/NPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RaceToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
	&ANPC::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC()
{
	if (!Z_Registration_Info_UClass_ANPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC.OuterSingleton, Z_Construct_UClass_ANPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC.OuterSingleton;
}
template<> RACETOFINISH_API UClass* StaticClass<ANPC>()
{
	return ANPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
ANPC::~ANPC() {}
// End Class ANPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_NPC_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC, ANPC::StaticClass, TEXT("ANPC"), &Z_Registration_Info_UClass_ANPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC), 244767803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_NPC_NPC_h_2015764126(TEXT("/Script/RaceToFinish"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_NPC_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHub_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_NPC_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
