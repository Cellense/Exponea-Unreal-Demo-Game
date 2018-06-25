// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FInfinarioData;
struct FVirtualPayment;
struct FInfinarioData;
#ifdef INFINARIOSDK_Infinario_generated_h
#error "Infinario.generated.h already included, missing '#pragma once' in Infinario.h"
#endif
#define INFINARIOSDK_Infinario_generated_h

#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_CreateEveryCallPayload) \
	{ \
		P_GET_TMAP_REF(FString,FInfinarioData,Z_Param_Out_EveryCallPayloadToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CreateEveryCallPayload(Z_Param_Out_EveryCallPayloadToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_VirtualPayment) \
	{ \
		P_GET_STRUCT_REF(FVirtualPayment,Z_Param_Out_VirtualPaymentData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_VirtualPayment(Z_Param_Out_VirtualPaymentData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_SessionEnd) \
	{ \
		P_GET_TMAP(FString,FInfinarioData,Z_Param_Payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_SessionEnd(Z_Param_Payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_SessionStart) \
	{ \
		P_GET_TMAP(FString,FInfinarioData,Z_Param_Payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_SessionStart(Z_Param_Payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Identify) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerIdentityToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Identify(Z_Param_PlayerIdentityToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetStringValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetStringValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetBoolValue) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetBoolValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetFloatValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetFloatValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetIntValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetIntValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActionName); \
		P_GET_TMAP_REF(FString,FInfinarioData,Z_Param_Out_Payload); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track(Z_Param_ActionName,Z_Param_Out_Payload,Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Initialize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ProjectTokenToSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppVersionToSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Initialize(Z_Param_ProjectTokenToSet,Z_Param_AppVersionToSet,Z_Param_TargetToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerIdentity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPlayerIdentity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInitialized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInitialized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAppVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAppVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectToken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectToken(); \
		P_NATIVE_END; \
	}


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_CreateEveryCallPayload) \
	{ \
		P_GET_TMAP_REF(FString,FInfinarioData,Z_Param_Out_EveryCallPayloadToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CreateEveryCallPayload(Z_Param_Out_EveryCallPayloadToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_VirtualPayment) \
	{ \
		P_GET_STRUCT_REF(FVirtualPayment,Z_Param_Out_VirtualPaymentData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_VirtualPayment(Z_Param_Out_VirtualPaymentData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_SessionEnd) \
	{ \
		P_GET_TMAP(FString,FInfinarioData,Z_Param_Payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_SessionEnd(Z_Param_Payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track_SessionStart) \
	{ \
		P_GET_TMAP(FString,FInfinarioData,Z_Param_Payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track_SessionStart(Z_Param_Payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Identify) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerIdentityToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Identify(Z_Param_PlayerIdentityToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetStringValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetStringValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetBoolValue) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetBoolValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetFloatValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetFloatValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetIntValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInfinarioData*)Z_Param__Result=P_THIS->BP_SetIntValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Track) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActionName); \
		P_GET_TMAP_REF(FString,FInfinarioData,Z_Param_Out_Payload); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Track(Z_Param_ActionName,Z_Param_Out_Payload,Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_Initialize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ProjectTokenToSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AppVersionToSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_Initialize(Z_Param_ProjectTokenToSet,Z_Param_AppVersionToSet,Z_Param_TargetToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerIdentity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPlayerIdentity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInitialized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInitialized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAppVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAppVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectToken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectToken(); \
		P_NATIVE_END; \
	}


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfinario(); \
	friend INFINARIOSDK_API class UClass* Z_Construct_UClass_UInfinario(); \
public: \
	DECLARE_CLASS(UInfinario, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InfinarioSDK"), NO_API) \
	DECLARE_SERIALIZER(UInfinario) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInfinario(); \
	friend INFINARIOSDK_API class UClass* Z_Construct_UClass_UInfinario(); \
public: \
	DECLARE_CLASS(UInfinario, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InfinarioSDK"), NO_API) \
	DECLARE_SERIALIZER(UInfinario) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfinario(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfinario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfinario); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfinario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfinario(UInfinario&&); \
	NO_API UInfinario(const UInfinario&); \
public:


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfinario(UInfinario&&); \
	NO_API UInfinario(const UInfinario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfinario); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfinario); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInfinario)


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_PRIVATE_PROPERTY_OFFSET
#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_19_PROLOG
#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_PRIVATE_PROPERTY_OFFSET \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_RPC_WRAPPERS \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_INCLASS \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_PRIVATE_PROPERTY_OFFSET \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_INCLASS_NO_PURE_DECLS \
	InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InfinarioPlugin_Plugins_InfinarioSDK_Source_InfinarioSDK_Public_Infinario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
