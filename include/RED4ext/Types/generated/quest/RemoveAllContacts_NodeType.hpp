#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct RemoveAllContacts_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questRemoveAllContacts_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::JournalPath>> excludedContacts; // 38
};
RED4EXT_ASSERT_SIZE(RemoveAllContacts_NodeType, 0x48);
} // namespace quest
} // namespace RED4ext
