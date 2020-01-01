#pragma once

#ifdef GTA_UNDERGROUND_CORE
#include "Exports.hpp"
#else
#include <Windows.h>
#include <string>
#include <stdint.h>

namespace UG
{
	typedef bool(*EventHook)(void* pData);

	const uint32_t GetFunctionAddress(const char* szExportName)
	{
		return reinterpret_cast<const uint32_t>(GetProcAddress(GetModuleHandleA("Underground_Core.asi"), szExportName));
	}

	char* GetProjectVersion()																		{ return ((char*(__cdecl*)())GetFunctionAddress("GetProjectVersion"))(); }
	bool IsDevelopmentBuild()																		{ return ((bool(__cdecl*)())GetFunctionAddress("IsDevelopmentBuild"))(); }
	char* GetDevelopmentBuild()																		{ return ((char*(__cdecl*)())GetFunctionAddress("GetDevelopmentBuild"))(); }
	bool ExistsInAtomicModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInAtomicModelStore"))(nModelIndex); }
	bool ExistsInClumpModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInClumpModelStore"))(nModelIndex); }
	bool ExistsInDamageAtomicModelStore(int32_t nModelIndex)										{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInDamageAtomicModelStore"))(nModelIndex); }
	bool ExistsInPedModelStore(int32_t nModelIndex)													{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInPedModelStore"))(nModelIndex); }
	bool ExistsInTimeModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInTimeModelStore"))(nModelIndex); }
	bool ExistsInVehicleModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInVehicleModelStore"))(nModelIndex); }
	bool ExistsInWeaponModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInWeaponModelStore"))(nModelIndex); }
	bool ExistsInLodAtomicModelStore(int32_t nModelIndex)											{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInLodAtomicModelStore"))(nModelIndex); }
	bool ExistsInLodTimeModelStore(int32_t nModelIndex)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("ExistsInLodTimeModelStore"))(nModelIndex); }
	bool ReadSpriteData()																			{ return ((bool(__cdecl*)())GetFunctionAddress("ReadSpriteData"))(); }
	void InitializeSpriteData()																		{ ((void(__cdecl*)())GetFunctionAddress("InitializeSpriteData"))(); }
	int GetNumberOfHudSprites()																		{ return ((int(__cdecl*)())GetFunctionAddress("GetNumberOfHudSprites"))(); }
	const char* GetRadarSpriteGXT(int nBlip)														{ return ((const char*(__cdecl*)(int))GetFunctionAddress("GetRadarSpriteGXT"))(nBlip); }
	bool IsPlayerDrivingVehicleWithSpecialFeature(uint32_t nPlayerId, int8_t nFeatureId)			{ return ((bool(__cdecl*)(uint32_t, int8_t))GetFunctionAddress("IsPlayerDrivingVehicleWithSpecialFeature"))(nPlayerId, nFeatureId); }
	class CZone* GetWeatherZonesPtr()																{ return ((class CZone*(__cdecl*)())GetFunctionAddress("GetWeatherZonesPtr"))(); }
	class CZone* GetForbiddenZonesPtr()																{ return ((class CZone*(__cdecl*)())GetFunctionAddress("GetForbiddenZonesPtr"))(); }
	int GetDefaultCabDriverModel()																	{ return ((int(__cdecl*)())GetFunctionAddress("GetDefaultCabDriverModel"))(); }
	void SetRubbishVisibility(bool bVisibility)														{ ((void(__cdecl*)(bool))GetFunctionAddress("SetRubbishVisibility"))(bVisibility); }
	uint8_t* GetAmbientBlurRedArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientBlurRedArray"))(); }
	uint8_t* GetAmbientBlurGreenArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientBlurGreenArray"))(); }
	uint8_t* GetAmbientBlurBlueArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientBlurBlueArray"))(); }
	uint8_t* GetAmbientObjBlurRedArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientObjBlurRedArray"))(); }
	uint8_t* GetAmbientObjBlurGreenArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientObjBlurGreenArray"))(); }
	uint8_t* GetAmbientObjBlurBlueArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetAmbientObjBlurBlueArray"))(); }
	uint8_t* GetDirectionalRedArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalRedArray"))(); }
	uint8_t* GetDirectionalGreenArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalGreenArray"))(); }
	uint8_t* GetDirectionalBlueArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalBlueArray"))(); }
	uint8_t* GetDirectionalBackRedArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalBackRedArray"))(); }
	uint8_t* GetDirectionalBackGreenArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalBackGreenArray"))(); }
	uint8_t* GetDirectionalBackBlueArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetDirectionalBackBlueArray"))(); }
	float* GetBackIntensityArray()																	{ return ((float*(__cdecl*)())GetFunctionAddress("GetBackIntensityArray"))(); }
	float* GetNightFactorArray()																	{ return ((float*(__cdecl*)())GetFunctionAddress("GetNightFactorArray"))(); }
	uint8_t* GetFluffyCloudsTopRedArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetFluffyCloudsTopRedArray"))(); }
	uint8_t* GetFluffyCloudsTopGreenArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetFluffyCloudsTopGreenArray"))(); }
	uint8_t* GetFluffyCloudsTopBlueArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetFluffyCloudsTopBlueArray"))(); }
	uint8_t* GetGlowThresholdRedArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowThresholdRedArray"))(); }
	uint8_t* GetGlowThresholdGreenArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowThresholdGreenArray"))(); }
	uint8_t* GetGlowThresholdBlueArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowThresholdBlueArray"))(); }
	uint8_t* GetGlowStrengthRedArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowStrengthRedArray"))(); }
	uint8_t* GetGlowStrengthGreenArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowStrengthGreenArray"))(); }
	uint8_t* GetGlowStrengthBlueArray()																{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetGlowStrengthBlueArray"))(); }
	uint8_t* GetRadiosityIntensityArray()															{ return ((uint8_t*(__cdecl*)())GetFunctionAddress("GetRadiosityIntensityArray"))(); }
	float* GetCloudSpeedXArray()																	{ return ((float*(__cdecl*)())GetFunctionAddress("GetCloudSpeedXArray"))(); }
	float* GetCloudSpeedYArray()																	{ return ((float*(__cdecl*)())GetFunctionAddress("GetCloudSpeedYArray"))(); }
	float* GetCloudSpeedZArray()																	{ return ((float*(__cdecl*)())GetFunctionAddress("GetCloudSpeedZArray"))(); }
	float* GetBlurOffsetArray()																		{ return ((float*(__cdecl*)())GetFunctionAddress("GetBlurOffsetArray"))(); }
	float* GetAmbientLowRangeArray()																{ return ((float*(__cdecl*)())GetFunctionAddress("GetAmbientLowRangeArray"))(); }
	float* GetAmbientHighRangeArray()																{ return ((float*(__cdecl*)())GetFunctionAddress("GetAmbientHighRangeArray"))(); }
	float* GetDirectionalLowRangeArray()															{ return ((float*(__cdecl*)())GetFunctionAddress("GetDirectionalLowRangeArray"))(); }
	float* GetDirectionalHighRangeArray()															{ return ((float*(__cdecl*)())GetFunctionAddress("GetDirectionalHighRangeArray"))(); }
	float* GetDirectionalBackLowRangeArray()														{ return ((float*(__cdecl*)())GetFunctionAddress("GetDirectionalBackLowRangeArray"))(); }
	float* GetDirectionalBackHighRangeArray()														{ return ((float*(__cdecl*)())GetFunctionAddress("GetDirectionalBackHighRangeArray"))(); }
	float* GetNearFarClipRatioArray()																{ return ((float*(__cdecl*)())GetFunctionAddress("GetNearFarClipRatioArray"))(); }
	int GetNumberOfWeatherTypes()																	{ return ((int(__cdecl*)())GetFunctionAddress("GetNumberOfWeatherTypes"))(); }
	int GetNumberOfTimeCycleHours()																	{ return ((int(__cdecl*)())GetFunctionAddress("GetNumberOfTimeCycleHours"))(); }
	int GetNumberOfExtraColourWeathers()															{ return ((int(__cdecl*)())GetFunctionAddress("GetNumberOfExtraColourWeathers"))(); }
	class CColourSet* GetCurrentTimeCycColours()													{ return ((class CColourSet*(__cdecl*)())GetFunctionAddress("GetCurrentTimeCycColours"))(); }
	float MoveMiamiCoorX(float fX)																	{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveMiamiCoorX"))(fX); }
	float MoveMiamiCoorY(float fY)																	{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveMiamiCoorY"))(fY); }
	float MoveMiamiCoorZ(float fZ)																	{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveMiamiCoorZ"))(fZ); }
	float MoveNewYorkCoorX(float fX)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewYorkCoorX"))(fX); }
	float MoveNewYorkCoorY(float fY)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewYorkCoorY"))(fY); }
	float MoveNewYorkCoorZ(float fZ)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewYorkCoorZ"))(fZ); }
	float MoveNewEnglandCoorX(float fX)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewEnglandCoorX"))(fX); }
	float MoveNewEnglandCoorY(float fY)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewEnglandCoorY"))(fY); }
	float MoveNewEnglandCoorZ(float fZ)																{ return ((float(__cdecl*)(float))GetFunctionAddress("MoveNewEnglandCoorZ"))(fZ); }
	const char* GetWeatherTypeName(int32_t nWeatherType)											{ return ((const char*(__cdecl*)(int32_t))GetFunctionAddress("GetWeatherTypeName"))(nWeatherType); }
	bool IsExtraSunnyWeatherType(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsExtraSunnyWeatherType"))(nWeatherType); }
	bool IsCloudyWeatherType(int32_t nWeatherType)													{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsCloudyWeatherType"))(nWeatherType); }
	bool IsRainyWeatherType(int32_t nWeatherType)													{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsRainyWeatherType"))(nWeatherType); }
	bool IsHurricaneWeatherType(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsHurricaneWeatherType"))(nWeatherType); }
	bool IsFoggyWeatherType(int32_t nWeatherType)													{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsFoggyWeatherType"))(nWeatherType); }
	bool IsSnowyWeatherType(int32_t nWeatherType)													{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsSnowyWeatherType"))(nWeatherType); }
	bool IsSandstormWeatherType(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("IsSandstormWeatherType"))(nWeatherType); }
	bool WeatherTypeUsesHeatHaze(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeUsesHeatHaze"))(nWeatherType); }
	bool WeatherTypeUsesSunGlare(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeUsesSunGlare"))(nWeatherType); }
	bool WeatherTypeUsesBeastie(int32_t nWeatherType)												{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeUsesBeastie"))(nWeatherType); }
	bool WeatherTypeCausesRainbows(int32_t nWeatherType)											{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeCausesRainbows"))(nWeatherType); }
	bool WeatherTypeIsSuitableForSunbathing(int32_t nWeatherType)									{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeIsSuitableForSunbathing"))(nWeatherType); }
	bool WeatherTypeHasNoCloudCoverage(int32_t nWeatherType)										{ return ((bool(__cdecl*)(int32_t))GetFunctionAddress("WeatherTypeHasNoCloudCoverage"))(nWeatherType); }
	void RegisterEventCallback(const char* szEventType, EventHook fpEventCallback)					{ ((void(__cdecl*)(const char*, EventHook))GetFunctionAddress("RegisterEventCallback"))(szEventType, fpEventCallback); }
}
#endif