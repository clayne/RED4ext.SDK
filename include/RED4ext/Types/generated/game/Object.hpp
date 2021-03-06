#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/GameEntity.hpp>
#include <RED4ext/Types/generated/game/PlayerSocket.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>

namespace RED4ext
{
namespace game { struct PersistentState; }

namespace game { 
struct Object : ent::GameEntity
{
    static constexpr const char* NAME = "gameObject";
    static constexpr const char* ALIAS = "GameObject";

    uint8_t unk160[0x168 - 0x160]; // 160
    Handle<game::PersistentState> persistentState; // 168
    LocalizationString displayName; // 178
    LocalizationString displayDescription; // 1A0
    CName audioResourceName; // 1C8
    game::PlayerSocket playerSocket; // 1D0
    float visibilityCheckDistance; // 1F8
    uint8_t unk1FC[0x220 - 0x1FC]; // 1FC
    red::TagList tags; // 220
};
RED4EXT_ASSERT_SIZE(Object, 0x230);
} // namespace game
using GameObject = game::Object;
} // namespace RED4ext
