#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLibraryReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiInputHintController";
    static constexpr const char* ALIAS = "InputHintController";

    ink::WidgetLibraryReference inputDisplayLibRef; // 68
    ink::CompoundWidgetReference inputDisplayContainer; // 78
    ink::TextWidgetReference textWidgetRef; // 90
    uint8_t unkA8[0xC0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(InputHintController, 0xC0);
} // namespace game::ui
using InputHintController = game::ui::InputHintController;
} // namespace RED4ext
