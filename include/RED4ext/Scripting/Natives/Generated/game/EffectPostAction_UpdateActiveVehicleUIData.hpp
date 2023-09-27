#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPostAction_UpdateActiveVehicleUIData : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_UpdateActiveVehicleUIData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPostAction_UpdateActiveVehicleUIData, 0x40);
} // namespace game
using gameEffectPostAction_UpdateActiveVehicleUIData = game::EffectPostAction_UpdateActiveVehicleUIData;
} // namespace RED4ext

// clang-format on
