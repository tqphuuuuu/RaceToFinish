// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacle/Rotary Hammer/RotaryHammer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RACETOFINISH_RotaryHammer_generated_h
#error "RotaryHammer.generated.h already included, missing '#pragma once' in RotaryHammer.h"
#endif
#define RACETOFINISH_RotaryHammer_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRotateHammer_Implementation(); \
	virtual void ClientRequestRotation_Implementation(); \
	DECLARE_FUNCTION(execOnHammerOverlapBegin); \
	DECLARE_FUNCTION(execServerRotateHammer); \
	DECLARE_FUNCTION(execClientRequestRotation);


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_CALLBACK_WRAPPERS
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotaryHammer(); \
	friend struct Z_Construct_UClass_ARotaryHammer_Statics; \
public: \
	DECLARE_CLASS(ARotaryHammer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(ARotaryHammer)


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARotaryHammer(ARotaryHammer&&); \
	ARotaryHammer(const ARotaryHammer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotaryHammer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotaryHammer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotaryHammer) \
	NO_API virtual ~ARotaryHammer();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_7_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_CALLBACK_WRAPPERS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class ARotaryHammer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_Rotary_Hammer_RotaryHammer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
