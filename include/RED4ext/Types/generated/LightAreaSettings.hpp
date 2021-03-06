#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ETimeOfYearSeason.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct LightAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "LightAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> latitude; // 48
    CurveData<float> sunRotationOffset; // 80
    CurveData<float> moonRotationOffset; // B8
    ETimeOfYearSeason season; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
    CurveData<HDRColor> sunColor; // F8
    CurveData<HDRColor> moonColor; // 130
    CurveData<HDRColor> specularTint; // 168
    CurveData<float> sunSize; // 1A0
    CurveData<float> moonSize; // 1D8
};
RED4EXT_ASSERT_SIZE(LightAreaSettings, 0x210);
} // namespace RED4ext
