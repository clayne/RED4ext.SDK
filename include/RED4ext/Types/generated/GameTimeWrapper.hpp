#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/GameTime.hpp>

namespace RED4ext
{
struct GameTimeWrapper
{
    static constexpr const char* NAME = "GameTimeWrapper";
    static constexpr const char* ALIAS = NAME;

    GameTime gameTime; // 00
};
RED4EXT_ASSERT_SIZE(GameTimeWrapper, 0x4);
} // namespace RED4ext
