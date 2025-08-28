#pragma once
#ifndef SRC_EXTRAS_SONNETQT6C_LIBGUESSLANGUAGE_H
#define SRC_EXTRAS_SONNETQT6C_LIBGUESSLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/sonnet-guesslanguage.html

/// k_sonnet__guesslanguage_new constructs a new Sonnet::GuessLanguage object.
///
Sonnet__GuessLanguage* k_sonnet__guesslanguage_new();

/// [Qt documentation](https://api-staging.kde.org/sonnet-guesslanguage.html#setLimits)
///
/// @param self Sonnet__GuessLanguage*
/// @param maxItems int
/// @param minConfidence double
void k_sonnet__guesslanguage_set_limits(void* self, int maxItems, double minConfidence);

/// [Qt documentation](https://api-staging.kde.org/sonnet-guesslanguage.html#identify)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__GuessLanguage*
/// @param text const char*
const char* k_sonnet__guesslanguage_identify(void* self, const char* text);

/// [Qt documentation](https://api-staging.kde.org/sonnet-guesslanguage.html#identify)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__GuessLanguage*
/// @param text const char*
/// @param suggestions const char**
const char* k_sonnet__guesslanguage_identify2(void* self, const char* text, const char* suggestions[]);

/// Delete this object from C++ memory.
///
/// @param self Sonnet__GuessLanguage*
void k_sonnet__guesslanguage_delete(void* self);

#endif
