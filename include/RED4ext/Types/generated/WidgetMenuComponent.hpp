#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/WidgetMenuComponentInterface.hpp>

namespace RED4ext
{
struct WidgetMenuComponent : WidgetMenuComponentInterface
{
    static constexpr const char* NAME = "WidgetMenuComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk200[0x220 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(WidgetMenuComponent, 0x220);
} // namespace RED4ext
