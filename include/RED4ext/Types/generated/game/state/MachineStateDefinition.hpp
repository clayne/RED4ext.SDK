#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/graph/GraphNodeDefinition.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateDefinition : graph::GraphNodeDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xF0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateDefinition, 0xF0);
} // namespace game::state
} // namespace RED4ext
