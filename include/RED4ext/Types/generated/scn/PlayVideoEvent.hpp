#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn { 
struct PlayVideoEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnPlayVideoEvent";
    static constexpr const char* ALIAS = NAME;

    CString videoPath; // 58
    bool isPhoneCall; // 78
    bool forceFrameRate; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(PlayVideoEvent, 0x80);
} // namespace scn
} // namespace RED4ext
