// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacle/Trampoline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RACETOFINISH_Trampoline_generated_h
#error "Trampoline.generated.h already included, missing '#pragma once' in Trampoline.h"
#endif
#define RACETOFINISH_Trampoline_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrampoline(); \
	friend struct Z_Construct_UClass_ATrampoline_Statics; \
public: \
	DECLARE_CLASS(ATrampoline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(ATrampoline)


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATrampoline(ATrampoline&&); \
	ATrampoline(const ATrampoline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrampoline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrampoline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrampoline) \
	NO_API virtual ~ATrampoline();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_11_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class ATrampoline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Trampoline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
