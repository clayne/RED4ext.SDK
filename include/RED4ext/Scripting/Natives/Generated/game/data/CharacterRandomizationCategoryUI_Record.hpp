#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct CharacterRandomizationCategoryUI_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCharacterRandomizationCategoryUI_Record";
    static constexpr const char* ALIAS = "CharacterRandomizationCategoryUI_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CharacterRandomizationCategoryUI_Record, 0x60);
} // namespace game::data
using gamedataCharacterRandomizationCategoryUI_Record = game::data::CharacterRandomizationCategoryUI_Record;
using CharacterRandomizationCategoryUI_Record = game::data::CharacterRandomizationCategoryUI_Record;
} // namespace RED4ext

// clang-format on
