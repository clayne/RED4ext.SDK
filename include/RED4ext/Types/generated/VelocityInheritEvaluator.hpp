#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/PhysicsParticleInitializer.hpp>

namespace RED4ext
{
struct VelocityInheritEvaluator : PhysicsParticleInitializer
{
    static constexpr const char* NAME = "VelocityInheritEvaluator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(VelocityInheritEvaluator, 0x40);
} // namespace RED4ext
