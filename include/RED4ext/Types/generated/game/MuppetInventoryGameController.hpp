#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetInventoryGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameMuppetInventoryGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0x130 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(MuppetInventoryGameController, 0x130);
} // namespace game
} // namespace RED4ext
