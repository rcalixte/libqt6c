#include "libkapplicationtrader.hpp"
#include "libkapplicationtrader.h"

bool k_applicationtrader_is_subsequence(const char* param1, const char* param2, int32_t param3) {
    return KApplicationTrader_IsSubsequence(qstring(param1), qstring(param2), param3);
}
