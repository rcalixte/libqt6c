#include "libkapplicationtrader.hpp"
#include "libkapplicationtrader.h"

bool k_applicationtrader_is_subsequence(const char* pattern, const char* text, int32_t cs) {
    return KApplicationTrader_IsSubsequence(qstring(pattern), qstring(text), cs);
}
