// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacle/MovingBoard/MovingBoard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACETOFINISH_MovingBoard_generated_h
#error "MovingBoard.generated.h already included, missing '#pragma once' in MovingBoard.h"
#endif
#define RACETOFINISH_MovingBoard_generated_h

#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MoveBoard_Implementation(); \
	DECLARE_FUNCTION(execMoveBoard);


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_CALLBACK_WRAPPERS
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingBoard(); \
	friend struct Z_Construct_UClass_AMovingBoard_Statics; \
public: \
	DECLARE_CLASS(AMovingBoard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceToFinish"), NO_API) \
	DECLARE_SERIALIZER(AMovingBoard)


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingBoard(AMovingBoard&&); \
	AMovingBoard(const AMovingBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingBoard) \
	NO_API virtual ~AMovingBoard();


#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_9_PROLOG
#define FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_CALLBACK_WRAPPERS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_INCLASS_NO_PURE_DECLS \
	FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACETOFINISH_API UClass* StaticClass<class AMovingBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaceToFinish_RaceToFinishh_RaceToFinish_Source_RaceToFinish_Obstacle_MovingBoard_MovingBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
