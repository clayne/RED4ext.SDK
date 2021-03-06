#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct InteriorAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldInteriorAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InteriorAreaNodeInstance, 0x100);
} // namespace world
} // namespace RED4ext
