#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/DataNode.hpp>
#include <RED4ext/Types/generated/game/data/GroupNodeGroupVariable.hpp>
#include <RED4ext/Types/generated/game/data/GroupNodeInheritanceState.hpp>

namespace RED4ext
{
namespace game::data { struct FileNode; }
namespace game::data { struct GroupNode; }
namespace game::data { struct PackageNode; }

namespace game::data { 
struct GroupNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataGroupNode";
    static constexpr const char* ALIAS = NAME;

    CString name; // 98
    CString base; // B8
    CString schema; // D8
    bool isInline; // F8
    uint8_t unkF9[0x130 - 0xF9]; // F9
    WeakHandle<game::data::GroupNode> baseGroup; // 130
    WeakHandle<game::data::GroupNode> schemaGroup; // 140
    WeakHandle<game::data::PackageNode> package; // 150
    Handle<game::data::FileNode> fileNode; // 160
    uint32_t inlineGroupId; // 170
    game::data::GroupNodeInheritanceState inheritanceState; // 174
    uint8_t unk178[0x1B0 - 0x178]; // 178
    DynArray<game::data::GroupNodeGroupVariable> serializedVariables; // 1B0
    DynArray<CName> tags; // 1C0
    uint8_t unk1D0[0x1E0 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(GroupNode, 0x1E0);
} // namespace game::data
} // namespace RED4ext