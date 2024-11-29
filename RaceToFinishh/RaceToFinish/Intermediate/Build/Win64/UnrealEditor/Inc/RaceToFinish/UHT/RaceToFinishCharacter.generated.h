// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RaceToFinishCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACETOFINISH_RaceToFinishCharacter_generated_h
#error "RaceToFinishCharacter.generated.h already included, missing '#pragma once' in RaceToFinishCharacter.h"
#endif
#define RACETOFINISH_RaceToFinishCharacter_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaceToFinishCharacter(); \
	friend struct Z_Construct_UClass_ARaceToFinishCharacter_Statics; \
public: \
	DECLARE_CLASS(ARaceToFinishCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(ARaceToFinishCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Mouse=NETFIELD_REP_START, \
		NETFIELD_REP_END=Mouse	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARaceToFinishCharacter(ARaceToFinishCharacter&&); \
	ARaceToFinishCharacter(const ARaceToFinishCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaceToFinishCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaceToFinishCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARaceToFinishCharacter) \
	NO_API virtual ~ARaceToFinishCharacter();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_9_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class ARaceToFinishCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
