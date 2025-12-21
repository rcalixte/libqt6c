#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBKEYBOARDTRANSLATOR_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBKEYBOARDTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslator_new constructs a new Konsole::KeyboardTranslator object.
///
/// @param name const char*
///
Konsole__KeyboardTranslator* k_onsole__keyboardtranslator_new(const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslator_new2 constructs a new Konsole::KeyboardTranslator object.
///
/// @param param1 Konsole__KeyboardTranslator*
///
Konsole__KeyboardTranslator* k_onsole__keyboardtranslator_new2(void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator*
///
const char* k_onsole__keyboardtranslator_name(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param name const char*
///
void k_onsole__keyboardtranslator_set_name(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator*
///
const char* k_onsole__keyboardtranslator_description(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param description const char*
///
void k_onsole__keyboardtranslator_set_description(void* self, const char* description);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param keyCode int
/// @param modifiers flag of enum Qt__KeyboardModifier
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator_find_entry(void* self, int keyCode, int64_t modifiers);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param entry Konsole__KeyboardTranslator__Entry*
///
void k_onsole__keyboardtranslator_add_entry(void* self, void* entry);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param existing Konsole__KeyboardTranslator__Entry*
/// @param replacement Konsole__KeyboardTranslator__Entry*
///
void k_onsole__keyboardtranslator_replace_entry(void* self, void* existing, void* replacement);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param entry Konsole__KeyboardTranslator__Entry*
///
void k_onsole__keyboardtranslator_remove_entry(void* self, void* entry);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
///
libqt_list /* of Konsole__KeyboardTranslator__Entry* */ k_onsole__keyboardtranslator_entries(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator*
/// @param keyCode int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param state flag of enum Konsole__KeyboardTranslator__State
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator_find_entry3(void* self, int keyCode, int64_t modifiers, int32_t state);

/// Delete this object from C++ memory.
///
/// @param self Konsole__KeyboardTranslator*
///
void k_onsole__keyboardtranslator_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslatorreader_new constructs a new Konsole::KeyboardTranslatorReader object.
///
/// @param source QIODevice*
///
Konsole__KeyboardTranslatorReader* k_onsole__keyboardtranslatorreader_new(void* source);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslatorReader*
///
const char* k_onsole__keyboardtranslatorreader_description(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorReader*
///
bool k_onsole__keyboardtranslatorreader_has_next_entry(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorReader*
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslatorreader_next_entry(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorReader*
///
bool k_onsole__keyboardtranslatorreader_parse_error(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param condition const char*
/// @param result const char*
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslatorreader_create_entry(const char* condition, const char* result);

/// Delete this object from C++ memory.
///
/// @param self Konsole__KeyboardTranslatorReader*
///
void k_onsole__keyboardtranslatorreader_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslatorwriter_new constructs a new Konsole::KeyboardTranslatorWriter object.
///
/// @param destination QIODevice*
///
Konsole__KeyboardTranslatorWriter* k_onsole__keyboardtranslatorwriter_new(void* destination);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorWriter*
/// @param description const char*
///
void k_onsole__keyboardtranslatorwriter_write_header(void* self, const char* description);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorWriter*
/// @param entry Konsole__KeyboardTranslator__Entry*
///
void k_onsole__keyboardtranslatorwriter_write_entry(void* self, void* entry);

/// Delete this object from C++ memory.
///
/// @param self Konsole__KeyboardTranslatorWriter*
///
void k_onsole__keyboardtranslatorwriter_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslatormanager_new constructs a new Konsole::KeyboardTranslatorManager object.
///
Konsole__KeyboardTranslatorManager* k_onsole__keyboardtranslatormanager_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorManager*
/// @param translator Konsole__KeyboardTranslator*
///
void k_onsole__keyboardtranslatormanager_add_translator(void* self, void* translator);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorManager*
/// @param name const char*
///
bool k_onsole__keyboardtranslatormanager_delete_translator(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorManager*
///
const Konsole__KeyboardTranslator* k_onsole__keyboardtranslatormanager_default_translator(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslatorManager*
/// @param name const char*
///
const Konsole__KeyboardTranslator* k_onsole__keyboardtranslatormanager_find_translator(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslatorManager*
///
const char** k_onsole__keyboardtranslatormanager_all_translators(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
Konsole__KeyboardTranslatorManager* k_onsole__keyboardtranslatormanager_instance();

/// Delete this object from C++ memory.
///
/// @param self Konsole__KeyboardTranslatorManager*
///
void k_onsole__keyboardtranslatormanager_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param param1 int
///
int32_t k_onsole_one_or_zero(int param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslator__entry_new constructs a new Konsole::KeyboardTranslator::Entry object.
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator__entry_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__keyboardtranslator__entry_new2 constructs a new Konsole::KeyboardTranslator::Entry object.
///
/// @param param1 Konsole__KeyboardTranslator__Entry*
///
Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator__entry_new2(void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
bool k_onsole__keyboardtranslator__entry_is_null(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
/// @return enum Konsole__KeyboardTranslator__Command
///
int32_t k_onsole__keyboardtranslator__entry_command(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param command enum Konsole__KeyboardTranslator__Command
///
void k_onsole__keyboardtranslator__entry_set_command(void* self, int32_t command);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
char* k_onsole__keyboardtranslator__entry_text(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param text const char*
///
void k_onsole__keyboardtranslator__entry_set_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
char* k_onsole__keyboardtranslator__entry_escaped_text(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
int32_t k_onsole__keyboardtranslator__entry_key_code(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param keyCode int
///
void k_onsole__keyboardtranslator__entry_set_key_code(void* self, int keyCode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t k_onsole__keyboardtranslator__entry_modifiers(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t k_onsole__keyboardtranslator__entry_modifier_mask(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void k_onsole__keyboardtranslator__entry_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void k_onsole__keyboardtranslator__entry_set_modifier_mask(void* self, int64_t modifiers);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
/// @return flag of enum Konsole__KeyboardTranslator__State
///
int32_t k_onsole__keyboardtranslator__entry_state(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
/// @return flag of enum Konsole__KeyboardTranslator__State
///
int32_t k_onsole__keyboardtranslator__entry_state_mask(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param state flag of enum Konsole__KeyboardTranslator__State
///
void k_onsole__keyboardtranslator__entry_set_state(void* self, int32_t state);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param mask flag of enum Konsole__KeyboardTranslator__State
///
void k_onsole__keyboardtranslator__entry_set_state_mask(void* self, int32_t mask);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
const char* k_onsole__keyboardtranslator__entry_condition_to_string(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
const char* k_onsole__keyboardtranslator__entry_result_to_string(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param keyCode int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param flags flag of enum Konsole__KeyboardTranslator__State
///
bool k_onsole__keyboardtranslator__entry_matches(void* self, int keyCode, int64_t modifiers, int32_t flags);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param rhs Konsole__KeyboardTranslator__Entry*
///
bool k_onsole__keyboardtranslator__entry_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
///
char* k_onsole__keyboardtranslator__entry_text1(void* self, bool expandWildCards);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
/// @param modifiers flag of enum Qt__KeyboardModifier
///
char* k_onsole__keyboardtranslator__entry_text2(void* self, bool expandWildCards, int64_t modifiers);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
///
char* k_onsole__keyboardtranslator__entry_escaped_text1(void* self, bool expandWildCards);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
/// @param modifiers flag of enum Qt__KeyboardModifier
///
char* k_onsole__keyboardtranslator__entry_escaped_text2(void* self, bool expandWildCards, int64_t modifiers);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
///
const char* k_onsole__keyboardtranslator__entry_result_to_string1(void* self, bool expandWildCards);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Konsole__KeyboardTranslator__Entry*
/// @param expandWildCards bool
/// @param modifiers flag of enum Qt__KeyboardModifier
///
const char* k_onsole__keyboardtranslator__entry_result_to_string2(void* self, bool expandWildCards, int64_t modifiers);

/// Delete this object from C++ memory.
///
/// @param self Konsole__KeyboardTranslator__Entry*
///
void k_onsole__keyboardtranslator__entry_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE_KEYBOARDTRANSLATOR_STATE_NOSTATE = 0,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_NEWLINESTATE = 1,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_ANSISTATE = 2,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_CURSORKEYSSTATE = 4,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_ALTERNATESCREENSTATE = 8,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_ANYMODIFIERSTATE = 16,
    KONSOLE_KEYBOARDTRANSLATOR_STATE_APPLICATIONKEYPADSTATE = 32
} Konsole__KeyboardTranslator__State;

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_NOCOMMAND = 0,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SENDCOMMAND = 1,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLPAGEUPCOMMAND = 2,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLPAGEDOWNCOMMAND = 4,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLLINEUPCOMMAND = 8,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLLINEDOWNCOMMAND = 16,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLLOCKCOMMAND = 32,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLUPTOTOPCOMMAND = 64,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_SCROLLDOWNTOBOTTOMCOMMAND = 128,
    KONSOLE_KEYBOARDTRANSLATOR_COMMAND_ERASECOMMAND = 256
} Konsole__KeyboardTranslator__Command;

#endif
