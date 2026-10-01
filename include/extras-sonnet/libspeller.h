#pragma once
#ifndef EXTRAS_SONNET_LIBSPELLER_H
#define EXTRAS_SONNET_LIBSPELLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/sonnet-speller.html)

/// k_sonnet__speller_new constructs a new Sonnet::Speller object.
///
Sonnet__Speller* k_sonnet__speller_new();

/// [Upstream resources](https://api.kde.org/sonnet-speller.html)

/// k_sonnet__speller_new2 constructs a new Sonnet::Speller object.
///
/// @param speller Sonnet__Speller*
///
Sonnet__Speller* k_sonnet__speller_new2(const void* speller);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html)

/// k_sonnet__speller_new3 constructs a new Sonnet::Speller object.
///
/// @param lang const char*
///
Sonnet__Speller* k_sonnet__speller_new3(const char* lang);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#operator-eq)
///
/// @param self Sonnet__Speller*
/// @param speller Sonnet__Speller*
///
void k_sonnet__speller_operator_assign(void* self, const void* speller);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#isValid)
///
/// @param self const Sonnet__Speller*
///
bool k_sonnet__speller_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#setLanguage)
///
/// @param self Sonnet__Speller*
/// @param lang const char*
///
void k_sonnet__speller_set_language(void* self, const char* lang);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#language)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Speller*
///
const char* k_sonnet__speller_language(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#isCorrect)
///
/// @param self const Sonnet__Speller*
/// @param word const char*
///
bool k_sonnet__speller_is_correct(const void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#isMisspelled)
///
/// @param self const Sonnet__Speller*
/// @param word const char*
///
bool k_sonnet__speller_is_misspelled(const void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#suggest)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Speller*
/// @param word const char*
///
const char** k_sonnet__speller_suggest(const void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#checkAndSuggest)
///
/// @param self const Sonnet__Speller*
/// @param word const char*
/// @param suggestions const char**
///
bool k_sonnet__speller_check_and_suggest(const void* self, const char* word, const char* suggestions[static 1]);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#storeReplacement)
///
/// @param self Sonnet__Speller*
/// @param bad const char*
/// @param good const char*
///
bool k_sonnet__speller_store_replacement(void* self, const char* bad, const char* good);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#addToPersonal)
///
/// @param self Sonnet__Speller*
/// @param word const char*
///
bool k_sonnet__speller_add_to_personal(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#addToSession)
///
/// @param self Sonnet__Speller*
/// @param word const char*
///
bool k_sonnet__speller_add_to_session(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#save)
///
/// @param self Sonnet__Speller*
///
void k_sonnet__speller_save(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#restore)
///
/// @param self Sonnet__Speller*
///
void k_sonnet__speller_restore(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#availableBackends)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Speller*
///
const char** k_sonnet__speller_available_backends(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguages)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Speller*
///
const char** k_sonnet__speller_available_languages(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguageNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Speller*
///
const char** k_sonnet__speller_available_language_names(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#availableDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const Sonnet__Speller*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_sonnet__speller_available_dictionaries(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#preferredDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const Sonnet__Speller*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_sonnet__speller_preferred_dictionaries(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultLanguage)
///
/// @param self Sonnet__Speller*
/// @param lang const char*
///
void k_sonnet__speller_set_default_language(void* self, const char* lang);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Speller*
///
const char* k_sonnet__speller_default_language(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultClient)
///
/// @param self Sonnet__Speller*
/// @param client const char*
///
void k_sonnet__speller_set_default_client(void* self, const char* client);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultClient)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Speller*
///
const char* k_sonnet__speller_default_client(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#setAttribute)
///
/// @param self Sonnet__Speller*
/// @param attr enum Sonnet__Speller__Attribute
///
void k_sonnet__speller_set_attribute(void* self, int32_t attr);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#testAttribute)
///
/// @param self const Sonnet__Speller*
/// @param attr enum Sonnet__Speller__Attribute
///
bool k_sonnet__speller_test_attribute(const void* self, int32_t attr);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#setAttribute)
///
/// @param self Sonnet__Speller*
/// @param attr enum Sonnet__Speller__Attribute
/// @param b bool
///
void k_sonnet__speller_set_attribute2(void* self, int32_t attr, bool b);

/// Delete this object from C++ memory.
///
/// @param self Sonnet__Speller*
///
void k_sonnet__speller_delete(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-speller.html#public-types)

typedef enum {
    SONNET_SPELLER_ATTRIBUTE_CHECKUPPERCASE = 0,
    SONNET_SPELLER_ATTRIBUTE_SKIPRUNTOGETHER = 1,
    SONNET_SPELLER_ATTRIBUTE_AUTODETECTLANGUAGE = 2
} Sonnet__Speller__Attribute;

#endif
