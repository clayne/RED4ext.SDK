#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game { 
struct ItemDropStorageManager
{
    static constexpr const char* NAME = "gameItemDropStorageManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xB0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemDropStorageManager, 0xB0);
} // namespace game
} // namespace RED4ext
