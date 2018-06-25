// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Infinario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfinario() {}
// Cross Module References
	INFINARIOSDK_API UClass* Z_Construct_UClass_UInfinario_NoRegister();
	INFINARIOSDK_API UClass* Z_Construct_UClass_UInfinario();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InfinarioSDK();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_CreateEveryCallPayload();
	INFINARIOSDK_API UScriptStruct* Z_Construct_UScriptStruct_FInfinarioData();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Identify();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Initialize();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_SetBoolValue();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_SetFloatValue();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_SetIntValue();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_SetStringValue();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Track();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Track_SessionEnd();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Track_SessionStart();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_BP_Track_VirtualPayment();
	INFINARIOSDK_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualPayment();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_GetAppVersion();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_GetIsInitialized();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_GetPlayerIdentity();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_GetProjectToken();
	INFINARIOSDK_API UFunction* Z_Construct_UFunction_UInfinario_GetTarget();
// End Cross Module References
	void UInfinario::StaticRegisterNativesUInfinario()
	{
		UClass* Class = UInfinario::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateEveryCallPayload", &UInfinario::execBP_CreateEveryCallPayload },
			{ "BP_Identify", &UInfinario::execBP_Identify },
			{ "BP_Initialize", &UInfinario::execBP_Initialize },
			{ "BP_SetBoolValue", &UInfinario::execBP_SetBoolValue },
			{ "BP_SetFloatValue", &UInfinario::execBP_SetFloatValue },
			{ "BP_SetIntValue", &UInfinario::execBP_SetIntValue },
			{ "BP_SetStringValue", &UInfinario::execBP_SetStringValue },
			{ "BP_Track", &UInfinario::execBP_Track },
			{ "BP_Track_SessionEnd", &UInfinario::execBP_Track_SessionEnd },
			{ "BP_Track_SessionStart", &UInfinario::execBP_Track_SessionStart },
			{ "BP_Track_VirtualPayment", &UInfinario::execBP_Track_VirtualPayment },
			{ "GetAppVersion", &UInfinario::execGetAppVersion },
			{ "GetIsInitialized", &UInfinario::execGetIsInitialized },
			{ "GetPlayerIdentity", &UInfinario::execGetPlayerIdentity },
			{ "GetProjectToken", &UInfinario::execGetProjectToken },
			{ "GetTarget", &UInfinario::execGetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_CreateEveryCallPayload()
	{
		struct Infinario_eventBP_CreateEveryCallPayload_Parms
		{
			TMap<FString,FInfinarioData> EveryCallPayloadToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EveryCallPayloadToSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_EveryCallPayloadToSet = { UE4CodeGen_Private::EPropertyClass::Map, "EveryCallPayloadToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_CreateEveryCallPayload_Parms, EveryCallPayloadToSet), METADATA_PARAMS(NewProp_EveryCallPayloadToSet_MetaData, ARRAY_COUNT(NewProp_EveryCallPayloadToSet_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EveryCallPayloadToSet_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "EveryCallPayloadToSet_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EveryCallPayloadToSet_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "EveryCallPayloadToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EveryCallPayloadToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EveryCallPayloadToSet_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EveryCallPayloadToSet_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_CreateEveryCallPayload", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Infinario_eventBP_CreateEveryCallPayload_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Identify()
	{
		struct Infinario_eventBP_Identify_Parms
		{
			FString PlayerIdentityToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIdentityToSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerIdentityToSet = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerIdentityToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Identify_Parms, PlayerIdentityToSet), METADATA_PARAMS(NewProp_PlayerIdentityToSet_MetaData, ARRAY_COUNT(NewProp_PlayerIdentityToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIdentityToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Identify", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Infinario_eventBP_Identify_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Initialize()
	{
		struct Infinario_eventBP_Initialize_Parms
		{
			FString ProjectTokenToSet;
			FString AppVersionToSet;
			FString TargetToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetToSet = { UE4CodeGen_Private::EPropertyClass::Str, "TargetToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Initialize_Parms, TargetToSet), METADATA_PARAMS(NewProp_TargetToSet_MetaData, ARRAY_COUNT(NewProp_TargetToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppVersionToSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppVersionToSet = { UE4CodeGen_Private::EPropertyClass::Str, "AppVersionToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Initialize_Parms, AppVersionToSet), METADATA_PARAMS(NewProp_AppVersionToSet_MetaData, ARRAY_COUNT(NewProp_AppVersionToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectTokenToSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectTokenToSet = { UE4CodeGen_Private::EPropertyClass::Str, "ProjectTokenToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Initialize_Parms, ProjectTokenToSet), METADATA_PARAMS(NewProp_ProjectTokenToSet_MetaData, ARRAY_COUNT(NewProp_ProjectTokenToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppVersionToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectTokenToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Infinario_eventBP_Initialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_SetBoolValue()
	{
		struct Infinario_eventBP_SetBoolValue_Parms
		{
			bool Value;
			FInfinarioData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetBoolValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_Value_SetBit = [](void* Obj){ ((Infinario_eventBP_SetBoolValue_Parms*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Infinario_eventBP_SetBoolValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_SetBoolValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventBP_SetBoolValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_SetFloatValue()
	{
		struct Infinario_eventBP_SetFloatValue_Parms
		{
			float Value;
			FInfinarioData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetFloatValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetFloatValue_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_SetFloatValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventBP_SetFloatValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_SetIntValue()
	{
		struct Infinario_eventBP_SetIntValue_Parms
		{
			int32 Value;
			FInfinarioData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetIntValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetIntValue_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_SetIntValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventBP_SetIntValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_SetStringValue()
	{
		struct Infinario_eventBP_SetStringValue_Parms
		{
			FString Value;
			FInfinarioData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetStringValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_SetStringValue_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_SetStringValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventBP_SetStringValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Track()
	{
		struct Infinario_eventBP_Track_Parms
		{
			FString ActionName;
			TMap<FString,FInfinarioData> Payload;
			float TimeStamp;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_Parms, TimeStamp), METADATA_PARAMS(NewProp_TimeStamp_MetaData, ARRAY_COUNT(NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Map, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_Parms, Payload), METADATA_PARAMS(NewProp_Payload_MetaData, ARRAY_COUNT(NewProp_Payload_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Payload_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionName = { UE4CodeGen_Private::EPropertyClass::Str, "ActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_Parms, ActionName), METADATA_PARAMS(NewProp_ActionName_MetaData, ARRAY_COUNT(NewProp_ActionName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "CPP_Default_TimeStamp", "-1.000000" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Track", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Infinario_eventBP_Track_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Track_SessionEnd()
	{
		struct Infinario_eventBP_Track_SessionEnd_Parms
		{
			TMap<FString,FInfinarioData> Payload;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Map, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_SessionEnd_Parms, Payload), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Payload_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Track_SessionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Infinario_eventBP_Track_SessionEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Track_SessionStart()
	{
		struct Infinario_eventBP_Track_SessionStart_Parms
		{
			TMap<FString,FInfinarioData> Payload;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Map, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_SessionStart_Parms, Payload), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Payload_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Payload_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Track_SessionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Infinario_eventBP_Track_SessionStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_BP_Track_VirtualPayment()
	{
		struct Infinario_eventBP_Track_VirtualPayment_Parms
		{
			FVirtualPayment VirtualPaymentData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualPaymentData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualPaymentData = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualPaymentData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Infinario_eventBP_Track_VirtualPayment_Parms, VirtualPaymentData), Z_Construct_UScriptStruct_FVirtualPayment, METADATA_PARAMS(NewProp_VirtualPaymentData_MetaData, ARRAY_COUNT(NewProp_VirtualPaymentData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualPaymentData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "BP_Track_VirtualPayment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Infinario_eventBP_Track_VirtualPayment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_GetAppVersion()
	{
		struct Infinario_eventGetAppVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventGetAppVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "GetAppVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventGetAppVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_GetIsInitialized()
	{
		struct Infinario_eventGetIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Infinario_eventGetIsInitialized_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Infinario_eventGetIsInitialized_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "GetIsInitialized", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventGetIsInitialized_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_GetPlayerIdentity()
	{
		struct Infinario_eventGetPlayerIdentity_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventGetPlayerIdentity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "GetPlayerIdentity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventGetPlayerIdentity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_GetProjectToken()
	{
		struct Infinario_eventGetProjectToken_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventGetProjectToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "GetProjectToken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventGetProjectToken_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfinario_GetTarget()
	{
		struct Infinario_eventGetTarget_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Infinario_eventGetTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfinario, "GetTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Infinario_eventGetTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInfinario_NoRegister()
	{
		return UInfinario::StaticClass();
	}
	UClass* Z_Construct_UClass_UInfinario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_InfinarioSDK,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInfinario_BP_CreateEveryCallPayload, "BP_CreateEveryCallPayload" }, // 353308908
				{ &Z_Construct_UFunction_UInfinario_BP_Identify, "BP_Identify" }, // 3361672569
				{ &Z_Construct_UFunction_UInfinario_BP_Initialize, "BP_Initialize" }, // 3720141484
				{ &Z_Construct_UFunction_UInfinario_BP_SetBoolValue, "BP_SetBoolValue" }, // 2501139777
				{ &Z_Construct_UFunction_UInfinario_BP_SetFloatValue, "BP_SetFloatValue" }, // 1801842190
				{ &Z_Construct_UFunction_UInfinario_BP_SetIntValue, "BP_SetIntValue" }, // 925981618
				{ &Z_Construct_UFunction_UInfinario_BP_SetStringValue, "BP_SetStringValue" }, // 1086222898
				{ &Z_Construct_UFunction_UInfinario_BP_Track, "BP_Track" }, // 2895218542
				{ &Z_Construct_UFunction_UInfinario_BP_Track_SessionEnd, "BP_Track_SessionEnd" }, // 1002150940
				{ &Z_Construct_UFunction_UInfinario_BP_Track_SessionStart, "BP_Track_SessionStart" }, // 234952349
				{ &Z_Construct_UFunction_UInfinario_BP_Track_VirtualPayment, "BP_Track_VirtualPayment" }, // 2261527844
				{ &Z_Construct_UFunction_UInfinario_GetAppVersion, "GetAppVersion" }, // 1142543334
				{ &Z_Construct_UFunction_UInfinario_GetIsInitialized, "GetIsInitialized" }, // 1905265768
				{ &Z_Construct_UFunction_UInfinario_GetPlayerIdentity, "GetPlayerIdentity" }, // 774376212
				{ &Z_Construct_UFunction_UInfinario_GetProjectToken, "GetProjectToken" }, // 1539151300
				{ &Z_Construct_UFunction_UInfinario_GetTarget, "GetTarget" }, // 1503869436
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Infinario.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Infinario.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInfinario>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInfinario::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfinario, 974538403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfinario(Z_Construct_UClass_UInfinario, &UInfinario::StaticClass, TEXT("/Script/InfinarioSDK"), TEXT("UInfinario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfinario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
