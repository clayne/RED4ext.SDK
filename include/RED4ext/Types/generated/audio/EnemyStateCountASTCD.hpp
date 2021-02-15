#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/audio/AudioStateTransitionConditionData.hpp>
#include <RED4ext/Types/generated/audio/EnemyState.hpp>
#include <RED4ext/Types/generated/audio/NumberComparer.hpp>

namespace RED4ext
{
namespace audio { 
struct EnemyStateCountASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioEnemyStateCountASTCD";
    static constexpr const char* ALIAS = NAME;

    audio::EnemyState enemiesState; // 38
    audio::NumberComparer countComparer; // 39
    uint8_t unk3A[0x3C - 0x3A]; // 3A
    uint32_t enemiesCount; // 3C
};
RED4EXT_ASSERT_SIZE(EnemyStateCountASTCD, 0x40);
} // namespace audio
} // namespace RED4ext
