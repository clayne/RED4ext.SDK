#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct EffectAttachmentComponent : ent::IComponent
{
    static constexpr const char* NAME = "entEffectAttachmentComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xD8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(EffectAttachmentComponent, 0xD8);
} // namespace ent
} // namespace RED4ext
