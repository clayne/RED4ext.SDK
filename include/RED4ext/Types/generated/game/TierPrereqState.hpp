#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct TierPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameTierPrereqState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(TierPrereqState, 0xC8);
} // namespace game
} // namespace RED4ext
