#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct DelayedNextVOEvt : red::Event
{
    static constexpr const char* NAME = "gameuiDelayedNextVOEvt";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DelayedNextVOEvt, 0x40);
} // namespace game::ui
} // namespace RED4ext
