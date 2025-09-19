#include "libversion.hpp"
#include "libversion.h"

uint32_t k_attica_version_major() {
    return Attica_VersionMajor();
}

uint32_t k_attica_version_minor() {
    return Attica_VersionMinor();
}

uint32_t k_attica_version_release() {
    return Attica_VersionRelease();
}

const char* k_attica_version_string() {
    return Attica_VersionString();
}
