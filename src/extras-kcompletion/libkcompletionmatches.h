#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONQT6C_LIBKCOMPLETIONMATCHES_H
#define SRC_EXTRAS_KCOMPLETIONQT6C_LIBKCOMPLETIONMATCHES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcompletionmatches.html

/// k_completionmatches_new constructs a new KCompletionMatches object.
///
/// @param sort bool
KCompletionMatches* k_completionmatches_new(bool sort);

/// k_completionmatches_new2 constructs a new KCompletionMatches object.
///
/// @param param1 KCompletionMatches*
KCompletionMatches* k_completionmatches_new2(void* param1);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#operator-eq)
///
/// @param self KCompletionMatches*
/// @param param1 KCompletionMatches*
void k_completionmatches_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#removeDuplicates)
///
/// @param self KCompletionMatches*
void k_completionmatches_remove_duplicates(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#list)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionMatches*
const char** k_completionmatches_list(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#sorting)
///
/// @param self KCompletionMatches*
bool k_completionmatches_sorting(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#list)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionMatches*
/// @param sort bool
const char** k_completionmatches_list1(void* self, bool sort);

/// [Qt documentation](https://api.kde.org/kcompletionmatches.html#dtor.KCompletionMatches)
///
/// Delete this object from C++ memory.
///
/// @param self KCompletionMatches*
void k_completionmatches_delete(void* self);

#endif
