#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFUZZYMATCHER_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFUZZYMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)

/// k_fuzzymatcher__result_new constructs a new KFuzzyMatcher::Result object.
///
/// @param other KFuzzyMatcher__Result*
///
KFuzzyMatcher__Result* k_fuzzymatcher__result_new(void* other);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)

/// k_fuzzymatcher__result_new2 constructs a new KFuzzyMatcher::Result object and invalidates the source KFuzzyMatcher::Result object.
///
/// @param other KFuzzyMatcher__Result*
///
KFuzzyMatcher__Result* k_fuzzymatcher__result_new2(void* other);

/// k_fuzzymatcher__result_copy_assign shallow copies `other` into `self`.
///
/// @param self KFuzzyMatcher__Result*
/// @param other KFuzzyMatcher__Result*
///
void k_fuzzymatcher__result_copy_assign(void* self, void* other);

/// k_fuzzymatcher__result_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KFuzzyMatcher__Result*
/// @param other KFuzzyMatcher__Result*
///
void k_fuzzymatcher__result_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
///
/// @param self KFuzzyMatcher__Result*
///
int32_t k_fuzzymatcher__result_score(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
///
/// @param self KFuzzyMatcher__Result*
/// @param score int
///
void k_fuzzymatcher__result_set_score(void* self, int score);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
///
/// @param self KFuzzyMatcher__Result*
///
bool k_fuzzymatcher__result_matched(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
///
/// @param self KFuzzyMatcher__Result*
/// @param matched bool
///
void k_fuzzymatcher__result_set_matched(void* self, bool matched);

/// Delete this object from C++ memory.
///
/// @param self KFuzzyMatcher__Result*
///
void k_fuzzymatcher__result_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html)

/// k_fuzzymatcher__range_new constructs a new KFuzzyMatcher::Range object.
///
KFuzzyMatcher__Range* k_fuzzymatcher__range_new();

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html)

/// k_fuzzymatcher__range_new2 constructs a new KFuzzyMatcher::Range object.
///
/// @param param1 KFuzzyMatcher__Range*
///
KFuzzyMatcher__Range* k_fuzzymatcher__range_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
///
/// @param self KFuzzyMatcher__Range*
///
int32_t k_fuzzymatcher__range_start(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
///
/// @param self KFuzzyMatcher__Range*
/// @param start int
///
void k_fuzzymatcher__range_set_start(void* self, int start);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
///
/// @param self KFuzzyMatcher__Range*
///
int32_t k_fuzzymatcher__range_length(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
///
/// @param self KFuzzyMatcher__Range*
/// @param length int
///
void k_fuzzymatcher__range_set_length(void* self, int length);

/// Delete this object from C++ memory.
///
/// @param self KFuzzyMatcher__Range*
///
void k_fuzzymatcher__range_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfuzzymatcher.html#public-types)

typedef enum {
    KFUZZYMATCHER_RANGETYPE_FULLYMATCHED = 0,
    KFUZZYMATCHER_RANGETYPE_ALL = 1
} KFuzzyMatcher__RangeType;

#endif
