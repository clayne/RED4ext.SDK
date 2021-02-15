#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/scn/RidTag.hpp>

namespace RED4ext
{
namespace anim { struct IAnimationBuffer; }

namespace scn { 
struct CameraAnimationRid
{
    static constexpr const char* NAME = "scnCameraAnimationRid";
    static constexpr const char* ALIAS = NAME;

    scn::RidTag tag; // 00
    Handle<anim::IAnimationBuffer> animation; // 10
};
RED4EXT_ASSERT_SIZE(CameraAnimationRid, 0x20);
} // namespace scn
} // namespace RED4ext