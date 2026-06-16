#include "libwildcardmatcher.hpp"
#include "libwildcardmatcher.h"

bool k_syntaxhighlighting__wildcardmatcher_exact_match(const char* candidate, const char* wildcard) {
    return KSyntaxHighlighting__WildcardMatcher_ExactMatch(qstring(candidate), qstring(wildcard));
}
