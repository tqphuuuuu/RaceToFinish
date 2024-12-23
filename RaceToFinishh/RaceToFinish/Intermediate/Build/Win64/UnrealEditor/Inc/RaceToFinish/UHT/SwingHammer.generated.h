// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacle/SwimngHamer/SwingHammer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACETOFINISH_SwingHammer_generated_h
#error "SwingHammer.generated.h already included, missing '#pragma once' in SwingHammer.h"
#endif
#define RACETOFINISH_SwingHammer_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerRotateHammer_Validate(); \
	virtual void ServerRotateHammer_Implementation(); \
	DECLARE_FUNCTION(execServerRotateHammer);


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_CALLBACK_WRAPPERS
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwingHammer(); \
	friend struct Z_Construct_UClass_ASwingHammer_Statics; \
public: \
	DECLARE_CLASS(ASwingHammer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(ASwingHammer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASwingHammer(ASwingHammer&&); \
	ASwingHammer(const ASwingHammer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingHammer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingHammer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwingHammer) \
	NO_API virtual ~ASwingHammer();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_9_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_CALLBACK_WRAPPERS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class ASwingHammer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_SwimngHamer_SwingHammer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
