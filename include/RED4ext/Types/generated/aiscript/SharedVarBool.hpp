#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/LibTreeSharedVarReferenceName.hpp>

namespace RED4ext
{
namespace aiscript { 
struct SharedVarBool
{
    static constexpr const char* NAME = "aiscriptSharedVarBool";
    static constexpr const char* ALIAS = "SharedVarBool";

    uint8_t unk00[0x8 - 0x0]; // 0
    LibTreeSharedVarReferenceName varName; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarBool, 0x10);
} // namespace aiscript
using SharedVarBool = aiscript::SharedVarBool;
} // namespace RED4ext
