#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ILoadingScreenData.hpp>

namespace RED4ext
{
namespace ink { 
struct ILoadingScreenPersistentData : ink::ILoadingScreenData
{
    static constexpr const char* NAME = "inkILoadingScreenPersistentData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ILoadingScreenPersistentData, 0x8);
} // namespace ink
} // namespace RED4ext
