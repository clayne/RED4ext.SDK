#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/scn/AICommandFactory.hpp>

namespace RED4ext
{
namespace quest { 
struct AICommandParams : scn::AICommandFactory
{
    static constexpr const char* NAME = "questAICommandParams";
    static constexpr const char* ALIAS = "AICommandParams";

};
RED4EXT_ASSERT_SIZE(AICommandParams, 0x40);
} // namespace quest
using AICommandParams = quest::AICommandParams;
} // namespace RED4ext
