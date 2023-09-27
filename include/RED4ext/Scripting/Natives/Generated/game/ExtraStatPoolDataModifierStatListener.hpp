#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolDataModifierStatListener.hpp>

namespace RED4ext
{
namespace game
{
struct ExtraStatPoolDataModifierStatListener : game::StatPoolDataModifierStatListener
{
    static constexpr const char* NAME = "gameExtraStatPoolDataModifierStatListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(ExtraStatPoolDataModifierStatListener, 0x78);
} // namespace game
using gameExtraStatPoolDataModifierStatListener = game::ExtraStatPoolDataModifierStatListener;
} // namespace RED4ext

// clang-format on
