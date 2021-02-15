#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/PointerEvent.hpp>

namespace RED4ext
{
struct OnPress : ink::PointerEvent
{
    static constexpr const char* NAME = "OnPress";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OnPress, 0xA8);
} // namespace RED4ext
