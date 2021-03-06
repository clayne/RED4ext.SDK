#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/move/IPoliciesSystem.hpp>

namespace RED4ext
{
namespace move { 
struct PoliciesSystem : move::IPoliciesSystem
{
    static constexpr const char* NAME = "movePoliciesSystem";
    static constexpr const char* ALIAS = "MovePoliciesSystem";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PoliciesSystem, 0x70);
} // namespace move
using MovePoliciesSystem = move::PoliciesSystem;
} // namespace RED4ext
