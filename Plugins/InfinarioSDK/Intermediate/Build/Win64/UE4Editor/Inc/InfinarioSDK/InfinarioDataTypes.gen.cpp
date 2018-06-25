// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InfinarioDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfinarioDataTypes() {}
// Cross Module References
	INFINARIOSDK_API UEnum* Z_Construct_UEnum_InfinarioSDK_EDataStatus();
	UPackage* Z_Construct_UPackage__Script_InfinarioSDK();
	INFINARIOSDK_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualPayment();
	INFINARIOSDK_API UScriptStruct* Z_Construct_UScriptStruct_FInfinarioData();
// End Cross Module References
	static UEnum* EDataStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InfinarioSDK_EDataStatus, Z_Construct_UPackage__Script_InfinarioSDK(), TEXT("EDataStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataStatus(EDataStatus_StaticEnum, TEXT("/Script/InfinarioSDK"), TEXT("EDataStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InfinarioSDK_EDataStatus_CRC() { return 1819600009U; }
	UEnum* Z_Construct_UEnum_InfinarioSDK_EDataStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InfinarioSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataStatus"), 0, Get_Z_Construct_UEnum_InfinarioSDK_EDataStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataStatus::None", (int64)EDataStatus::None },
				{ "EDataStatus::FString", (int64)EDataStatus::FString },
				{ "EDataStatus::Int", (int64)EDataStatus::Int },
				{ "EDataStatus::Float", (int64)EDataStatus::Float },
				{ "EDataStatus::Bool", (int64)EDataStatus::Bool },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InfinarioSDK,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDataStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDataStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVirtualPayment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INFINARIOSDK_API uint32 Get_Z_Construct_UScriptStruct_FVirtualPayment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualPayment, Z_Construct_UPackage__Script_InfinarioSDK(), TEXT("VirtualPayment"), sizeof(FVirtualPayment), Get_Z_Construct_UScriptStruct_FVirtualPayment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualPayment(FVirtualPayment::StaticStruct, TEXT("/Script/InfinarioSDK"), TEXT("VirtualPayment"), false, nullptr, nullptr);
static struct FScriptStruct_InfinarioSDK_StaticRegisterNativesFVirtualPayment
{
	FScriptStruct_InfinarioSDK_StaticRegisterNativesFVirtualPayment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualPayment")),new UScriptStruct::TCppStructOps<FVirtualPayment>);
	}
} ScriptStruct_InfinarioSDK_StaticRegisterNativesFVirtualPayment;
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualPayment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualPayment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_InfinarioSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualPayment"), sizeof(FVirtualPayment), Get_Z_Construct_UScriptStruct_FVirtualPayment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualPayment>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVirtualPayment, ItemType), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(NewProp_ItemType_MetaData, ARRAY_COUNT(NewProp_ItemType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVirtualPayment, ItemName), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(NewProp_ItemName_MetaData, ARRAY_COUNT(NewProp_ItemName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Struct, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVirtualPayment, Amount), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(NewProp_Amount_MetaData, ARRAY_COUNT(NewProp_Amount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
				{ "Category", "Infinario" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Currency = { UE4CodeGen_Private::EPropertyClass::Struct, "Currency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVirtualPayment, Currency), Z_Construct_UScriptStruct_FInfinarioData, METADATA_PARAMS(NewProp_Currency_MetaData, ARRAY_COUNT(NewProp_Currency_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Currency,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_InfinarioSDK,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VirtualPayment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVirtualPayment),
				alignof(FVirtualPayment),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualPayment_CRC() { return 2754183808U; }
class UScriptStruct* FInfinarioData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INFINARIOSDK_API uint32 Get_Z_Construct_UScriptStruct_FInfinarioData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInfinarioData, Z_Construct_UPackage__Script_InfinarioSDK(), TEXT("InfinarioData"), sizeof(FInfinarioData), Get_Z_Construct_UScriptStruct_FInfinarioData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInfinarioData(FInfinarioData::StaticStruct, TEXT("/Script/InfinarioSDK"), TEXT("InfinarioData"), false, nullptr, nullptr);
static struct FScriptStruct_InfinarioSDK_StaticRegisterNativesFInfinarioData
{
	FScriptStruct_InfinarioSDK_StaticRegisterNativesFInfinarioData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InfinarioData")),new UScriptStruct::TCppStructOps<FInfinarioData>);
	}
} ScriptStruct_InfinarioSDK_StaticRegisterNativesFInfinarioData;
	UScriptStruct* Z_Construct_UScriptStruct_FInfinarioData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInfinarioData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_InfinarioSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InfinarioData"), sizeof(FInfinarioData), Get_Z_Construct_UScriptStruct_FInfinarioData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInfinarioData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bo_MetaData[] = {
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			auto NewProp_Bo_SetBit = [](void* Obj){ ((FInfinarioData*)Obj)->Bo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bo = { UE4CodeGen_Private::EPropertyClass::Bool, "Bo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInfinarioData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Bo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Bo_MetaData, ARRAY_COUNT(NewProp_Bo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fl_MetaData[] = {
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fl = { UE4CodeGen_Private::EPropertyClass::Float, "Fl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInfinarioData, Fl), METADATA_PARAMS(NewProp_Fl_MetaData, ARRAY_COUNT(NewProp_Fl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_St_MetaData[] = {
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_St = { UE4CodeGen_Private::EPropertyClass::Str, "St", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInfinarioData, St), METADATA_PARAMS(NewProp_St_MetaData, ARRAY_COUNT(NewProp_St_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_In = { UE4CodeGen_Private::EPropertyClass::Int, "In", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInfinarioData, In), METADATA_PARAMS(NewProp_In_MetaData, ARRAY_COUNT(NewProp_In_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "ModuleRelativePath", "Public/InfinarioDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Enum, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInfinarioData, Status), Z_Construct_UEnum_InfinarioSDK_EDataStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_St,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_In,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_InfinarioSDK,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InfinarioData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInfinarioData),
				alignof(FInfinarioData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInfinarioData_CRC() { return 2465488316U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
