#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/SceneCustomData_DistantShadowsCommon.hpp>

namespace RED4ext
{
struct SceneCustomData_DistantShadows : SceneCustomData_DistantShadowsCommon
{
    static constexpr const char* NAME = "SceneCustomData_DistantShadows";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk3E0[0x6E840 - 0x3E0]; // 3E0
};
RED4EXT_ASSERT_SIZE(SceneCustomData_DistantShadows, 0x6E840);
} // namespace RED4ext
