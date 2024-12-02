// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RaceToFinishPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACETOFINISH_RaceToFinishPlayerController_generated_h
#error "RaceToFinishPlayerController.generated.h already included, missing '#pragma once' in RaceToFinishPlayerController.h"
#endif
#define RACETOFINISH_RaceToFinishPlayerController_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_Test_Implementation(FVector MouseLocation); \
	DECLARE_FUNCTION(execServer_Test);


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_CALLBACK_WRAPPERS
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaceToFinishPlayerController(); \
	friend struct Z_Construct_UClass_ARaceToFinishPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARaceToFinishPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(ARaceToFinishPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bJump=NETFIELD_REP_START, \
		NETFIELD_REP_END=bJump	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARaceToFinishPlayerController(ARaceToFinishPlayerController&&); \
	ARaceToFinishPlayerController(const ARaceToFinishPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaceToFinishPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaceToFinishPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARaceToFinishPlayerController) \
	NO_API virtual ~ARaceToFinishPlayerController();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_18_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_CALLBACK_WRAPPERS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class ARaceToFinishPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_RaceToFinishPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
