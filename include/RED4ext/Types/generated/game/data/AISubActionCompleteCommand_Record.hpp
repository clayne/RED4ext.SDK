#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionCompleteCommand_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCompleteCommand_Record";
    static constexpr const char* ALIAS = "AISubActionCompleteCommand_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCompleteCommand_Record, 0x58);
} // namespace game::data
using AISubActionCompleteCommand_Record = game::data::AISubActionCompleteCommand_Record;
} // namespace RED4ext
