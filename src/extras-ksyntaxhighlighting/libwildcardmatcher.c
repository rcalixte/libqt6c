#include "libwildcardmatcher.hpp"
#include "libwildcardmatcher.h"

bool k_syntaxhighlighting__wildcardmatcher_exact_match(const char* param1, const char* param2) {
    return KSyntaxHighlighting__WildcardMatcher_ExactMatch(qstring(param1), qstring(param2));
}
