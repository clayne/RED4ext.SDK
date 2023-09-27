#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AITicketFilter_Record : game::data::AITicketCondition_Record
{
    static constexpr const char* NAME = "gamedataAITicketFilter_Record";
    static constexpr const char* ALIAS = "AITicketFilter_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AITicketFilter_Record, 0x80);
} // namespace game::data
using gamedataAITicketFilter_Record = game::data::AITicketFilter_Record;
using AITicketFilter_Record = game::data::AITicketFilter_Record;
} // namespace RED4ext

// clang-format on
