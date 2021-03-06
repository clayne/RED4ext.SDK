#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/CoverSelectionParameters.hpp>

namespace RED4ext
{
namespace AI { 
struct RandomCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AIRandomCoverSelection";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RandomCoverSelection, 0x10);
} // namespace AI
} // namespace RED4ext
