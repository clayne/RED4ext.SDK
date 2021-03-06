#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game::aim { 
struct AssistAimAssistRemotePlayer
{
    static constexpr const char* NAME = "gameaimAssistAimAssistRemotePlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xC60 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AssistAimAssistRemotePlayer, 0xC60);
} // namespace game::aim
} // namespace RED4ext
