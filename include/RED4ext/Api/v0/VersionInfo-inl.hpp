#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Api/v0/VersionInfo.hpp>
#endif

#include <sstream>

RED4EXT_INLINE RED4ext::v0::VersionInfo RED4ext::v0::CreateVersion(uint8_t aMajor, uint16_t aMinor, uint32_t aPatch,
                                                                   uint32_t aPrereleaseType, uint32_t aPrereleaseNumber)
{
    VersionInfo version;
    version.major = aMajor;
    version.minor = aMinor;
    version.patch = aPatch;
    version.prerelease.type = aPrereleaseType;
    version.prerelease.number = aPrereleaseNumber;

    return version;
}

RED4EXT_INLINE int32_t RED4ext::v0::ComparePrerelease(const RED4ext::v0::PrereleaseInfo& aLhs,
                                                      const RED4ext::v0::PrereleaseInfo& aRhs)
{
    if (aLhs.type != aRhs.type)
    {
        return aLhs.type - aRhs.type;
    }
    else if (aLhs.number != aRhs.number)
    {
        return aLhs.number - aRhs.number;
    }

    return 0;
}

RED4EXT_INLINE int32_t RED4ext::v0::CompareVersion(const RED4ext::v0::VersionInfo& aLhs,
                                                   const RED4ext::v0::VersionInfo& aRhs)
{
    if (aLhs.major != aRhs.major)
    {
        return aLhs.major - aRhs.major;
    }
    else if (aLhs.minor != aRhs.minor)
    {
        return aLhs.minor - aRhs.minor;
    }
    else if (aLhs.patch != aRhs.patch)
    {
        return aLhs.patch - aRhs.patch;
    }

    return ComparePrerelease(aLhs.prerelease, aRhs.prerelease);
}

RED4EXT_INLINE std::wstring std::to_wstring(const RED4ext::v0::VersionInfo& aVersion)
{
    std::wstringstream stream;
    stream << aVersion.major << L"." << aVersion.minor << L"." << aVersion.patch;

    if (aVersion.prerelease.type != RED4EXT_V0_PRERELEASE_TYPE_NONE)
    {
        stream << L"-";
        switch (aVersion.prerelease.type)
        {
        case RED4EXT_V0_PRERELEASE_TYPE_ALPHA:
        {
            stream << L"alpha";
            break;
        }
        case RED4EXT_V0_PRERELEASE_TYPE_BETA:
        {
            stream << L"beta";
            break;
        }
        case RED4EXT_V0_PRERELEASE_TYPE_RC:
        {
            stream << L"rc";
            break;
        }
        default:
        {
            stream << L"unknown";
            break;
        }
        }

        stream << L"." << aVersion.prerelease.number;
    }

    return stream.str();
}
