#include "../libqiodevice.hpp"
#include "libKeyboardTranslator.hpp"
#include "libKeyboardTranslator.h"

Konsole__KeyboardTranslator* k_onsole__keyboardtranslator_new(const char* name) {
    return Konsole__KeyboardTranslator_new(qstring(name));
}

Konsole__KeyboardTranslator* k_onsole__keyboardtranslator_new2(void* param1) {
    return Konsole__KeyboardTranslator_new2((Konsole__KeyboardTranslator*)param1);
}

const char* k_onsole__keyboardtranslator_name(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator_Name((Konsole__KeyboardTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__keyboardtranslator_set_name(void* self, const char* name) {
    Konsole__KeyboardTranslator_SetName((Konsole__KeyboardTranslator*)self, qstring(name));
}

const char* k_onsole__keyboardtranslator_description(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator_Description((Konsole__KeyboardTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__keyboardtranslator_set_description(void* self, const char* description) {
    Konsole__KeyboardTranslator_SetDescription((Konsole__KeyboardTranslator*)self, qstring(description));
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator_find_entry(void* self, int keyCode, int64_t modifiers) {
    return Konsole__KeyboardTranslator_FindEntry((Konsole__KeyboardTranslator*)self, keyCode, modifiers);
}

void k_onsole__keyboardtranslator_add_entry(void* self, void* entry) {
    Konsole__KeyboardTranslator_AddEntry((Konsole__KeyboardTranslator*)self, (Konsole__KeyboardTranslator__Entry*)entry);
}

void k_onsole__keyboardtranslator_replace_entry(void* self, void* existing, void* replacement) {
    Konsole__KeyboardTranslator_ReplaceEntry((Konsole__KeyboardTranslator*)self, (Konsole__KeyboardTranslator__Entry*)existing, (Konsole__KeyboardTranslator__Entry*)replacement);
}

void k_onsole__keyboardtranslator_remove_entry(void* self, void* entry) {
    Konsole__KeyboardTranslator_RemoveEntry((Konsole__KeyboardTranslator*)self, (Konsole__KeyboardTranslator__Entry*)entry);
}

libqt_list /* of Konsole__KeyboardTranslator__Entry* */ k_onsole__keyboardtranslator_entries(void* self) {
    libqt_list _arr = Konsole__KeyboardTranslator_Entries((Konsole__KeyboardTranslator*)self);
    return _arr;
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator_find_entry3(void* self, int keyCode, int64_t modifiers, int32_t state) {
    return Konsole__KeyboardTranslator_FindEntry3((Konsole__KeyboardTranslator*)self, keyCode, modifiers, state);
}

void k_onsole__keyboardtranslator_delete(void* self) {
    Konsole__KeyboardTranslator_Delete((Konsole__KeyboardTranslator*)(self));
}

Konsole__KeyboardTranslatorReader* k_onsole__keyboardtranslatorreader_new(void* source) {
    return Konsole__KeyboardTranslatorReader_new((QIODevice*)source);
}

const char* k_onsole__keyboardtranslatorreader_description(void* self) {
    libqt_string _str = Konsole__KeyboardTranslatorReader_Description((Konsole__KeyboardTranslatorReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_onsole__keyboardtranslatorreader_has_next_entry(void* self) {
    return Konsole__KeyboardTranslatorReader_HasNextEntry((Konsole__KeyboardTranslatorReader*)self);
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslatorreader_next_entry(void* self) {
    return Konsole__KeyboardTranslatorReader_NextEntry((Konsole__KeyboardTranslatorReader*)self);
}

bool k_onsole__keyboardtranslatorreader_parse_error(void* self) {
    return Konsole__KeyboardTranslatorReader_ParseError((Konsole__KeyboardTranslatorReader*)self);
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslatorreader_create_entry(const char* condition, const char* result) {
    return Konsole__KeyboardTranslatorReader_CreateEntry(qstring(condition), qstring(result));
}

void k_onsole__keyboardtranslatorreader_delete(void* self) {
    Konsole__KeyboardTranslatorReader_Delete((Konsole__KeyboardTranslatorReader*)(self));
}

Konsole__KeyboardTranslatorWriter* k_onsole__keyboardtranslatorwriter_new(void* destination) {
    return Konsole__KeyboardTranslatorWriter_new((QIODevice*)destination);
}

void k_onsole__keyboardtranslatorwriter_write_header(void* self, const char* description) {
    Konsole__KeyboardTranslatorWriter_WriteHeader((Konsole__KeyboardTranslatorWriter*)self, qstring(description));
}

void k_onsole__keyboardtranslatorwriter_write_entry(void* self, void* entry) {
    Konsole__KeyboardTranslatorWriter_WriteEntry((Konsole__KeyboardTranslatorWriter*)self, (Konsole__KeyboardTranslator__Entry*)entry);
}

void k_onsole__keyboardtranslatorwriter_delete(void* self) {
    Konsole__KeyboardTranslatorWriter_Delete((Konsole__KeyboardTranslatorWriter*)(self));
}

Konsole__KeyboardTranslatorManager* k_onsole__keyboardtranslatormanager_new() {
    return Konsole__KeyboardTranslatorManager_new();
}

void k_onsole__keyboardtranslatormanager_add_translator(void* self, void* translator) {
    Konsole__KeyboardTranslatorManager_AddTranslator((Konsole__KeyboardTranslatorManager*)self, (Konsole__KeyboardTranslator*)translator);
}

bool k_onsole__keyboardtranslatormanager_delete_translator(void* self, const char* name) {
    return Konsole__KeyboardTranslatorManager_DeleteTranslator((Konsole__KeyboardTranslatorManager*)self, qstring(name));
}

const Konsole__KeyboardTranslator* k_onsole__keyboardtranslatormanager_default_translator(void* self) {
    return Konsole__KeyboardTranslatorManager_DefaultTranslator((Konsole__KeyboardTranslatorManager*)self);
}

const Konsole__KeyboardTranslator* k_onsole__keyboardtranslatormanager_find_translator(void* self, const char* name) {
    return Konsole__KeyboardTranslatorManager_FindTranslator((Konsole__KeyboardTranslatorManager*)self, qstring(name));
}

const char** k_onsole__keyboardtranslatormanager_all_translators(void* self) {
    libqt_list _arr = Konsole__KeyboardTranslatorManager_AllTranslators((Konsole__KeyboardTranslatorManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_onsole__keyboardtranslatormanager_all_translators");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

Konsole__KeyboardTranslatorManager* k_onsole__keyboardtranslatormanager_instance() {
    return Konsole__KeyboardTranslatorManager_Instance();
}

void k_onsole__keyboardtranslatormanager_delete(void* self) {
    Konsole__KeyboardTranslatorManager_Delete((Konsole__KeyboardTranslatorManager*)(self));
}

int32_t k_onsole_one_or_zero(int param1) {
    return Konsole_OneOrZero(param1);
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator__entry_new() {
    return Konsole__KeyboardTranslator__Entry_new();
}

Konsole__KeyboardTranslator__Entry* k_onsole__keyboardtranslator__entry_new2(void* param1) {
    return Konsole__KeyboardTranslator__Entry_new2((Konsole__KeyboardTranslator__Entry*)param1);
}

bool k_onsole__keyboardtranslator__entry_is_null(void* self) {
    return Konsole__KeyboardTranslator__Entry_IsNull((Konsole__KeyboardTranslator__Entry*)self);
}

int32_t k_onsole__keyboardtranslator__entry_command(void* self) {
    return Konsole__KeyboardTranslator__Entry_Command((Konsole__KeyboardTranslator__Entry*)self);
}

void k_onsole__keyboardtranslator__entry_set_command(void* self, int32_t command) {
    Konsole__KeyboardTranslator__Entry_SetCommand((Konsole__KeyboardTranslator__Entry*)self, command);
}

char* k_onsole__keyboardtranslator__entry_text(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_Text((Konsole__KeyboardTranslator__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__keyboardtranslator__entry_set_text(void* self, const char* text) {
    Konsole__KeyboardTranslator__Entry_SetText((Konsole__KeyboardTranslator__Entry*)self, qstring(text));
}

char* k_onsole__keyboardtranslator__entry_escaped_text(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_EscapedText((Konsole__KeyboardTranslator__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_onsole__keyboardtranslator__entry_key_code(void* self) {
    return Konsole__KeyboardTranslator__Entry_KeyCode((Konsole__KeyboardTranslator__Entry*)self);
}

void k_onsole__keyboardtranslator__entry_set_key_code(void* self, int keyCode) {
    Konsole__KeyboardTranslator__Entry_SetKeyCode((Konsole__KeyboardTranslator__Entry*)self, keyCode);
}

int64_t k_onsole__keyboardtranslator__entry_modifiers(void* self) {
    return Konsole__KeyboardTranslator__Entry_Modifiers((Konsole__KeyboardTranslator__Entry*)self);
}

int64_t k_onsole__keyboardtranslator__entry_modifier_mask(void* self) {
    return Konsole__KeyboardTranslator__Entry_ModifierMask((Konsole__KeyboardTranslator__Entry*)self);
}

void k_onsole__keyboardtranslator__entry_set_modifiers(void* self, int64_t modifiers) {
    Konsole__KeyboardTranslator__Entry_SetModifiers((Konsole__KeyboardTranslator__Entry*)self, modifiers);
}

void k_onsole__keyboardtranslator__entry_set_modifier_mask(void* self, int64_t modifiers) {
    Konsole__KeyboardTranslator__Entry_SetModifierMask((Konsole__KeyboardTranslator__Entry*)self, modifiers);
}

int32_t k_onsole__keyboardtranslator__entry_state(void* self) {
    return Konsole__KeyboardTranslator__Entry_State((Konsole__KeyboardTranslator__Entry*)self);
}

int32_t k_onsole__keyboardtranslator__entry_state_mask(void* self) {
    return Konsole__KeyboardTranslator__Entry_StateMask((Konsole__KeyboardTranslator__Entry*)self);
}

void k_onsole__keyboardtranslator__entry_set_state(void* self, int32_t state) {
    Konsole__KeyboardTranslator__Entry_SetState((Konsole__KeyboardTranslator__Entry*)self, state);
}

void k_onsole__keyboardtranslator__entry_set_state_mask(void* self, int32_t mask) {
    Konsole__KeyboardTranslator__Entry_SetStateMask((Konsole__KeyboardTranslator__Entry*)self, mask);
}

const char* k_onsole__keyboardtranslator__entry_condition_to_string(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_ConditionToString((Konsole__KeyboardTranslator__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__keyboardtranslator__entry_result_to_string(void* self) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_ResultToString((Konsole__KeyboardTranslator__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_onsole__keyboardtranslator__entry_matches(void* self, int keyCode, int64_t modifiers, int32_t flags) {
    return Konsole__KeyboardTranslator__Entry_Matches((Konsole__KeyboardTranslator__Entry*)self, keyCode, modifiers, flags);
}

bool k_onsole__keyboardtranslator__entry_operator_equal(void* self, void* rhs) {
    return Konsole__KeyboardTranslator__Entry_OperatorEqual((Konsole__KeyboardTranslator__Entry*)self, (Konsole__KeyboardTranslator__Entry*)rhs);
}

char* k_onsole__keyboardtranslator__entry_text1(void* self, bool expandWildCards) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_Text1((Konsole__KeyboardTranslator__Entry*)self, expandWildCards);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_onsole__keyboardtranslator__entry_text2(void* self, bool expandWildCards, int64_t modifiers) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_Text2((Konsole__KeyboardTranslator__Entry*)self, expandWildCards, modifiers);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_onsole__keyboardtranslator__entry_escaped_text1(void* self, bool expandWildCards) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_EscapedText1((Konsole__KeyboardTranslator__Entry*)self, expandWildCards);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_onsole__keyboardtranslator__entry_escaped_text2(void* self, bool expandWildCards, int64_t modifiers) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_EscapedText2((Konsole__KeyboardTranslator__Entry*)self, expandWildCards, modifiers);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__keyboardtranslator__entry_result_to_string1(void* self, bool expandWildCards) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_ResultToString1((Konsole__KeyboardTranslator__Entry*)self, expandWildCards);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__keyboardtranslator__entry_result_to_string2(void* self, bool expandWildCards, int64_t modifiers) {
    libqt_string _str = Konsole__KeyboardTranslator__Entry_ResultToString2((Konsole__KeyboardTranslator__Entry*)self, expandWildCards, modifiers);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__keyboardtranslator__entry_delete(void* self) {
    Konsole__KeyboardTranslator__Entry_Delete((Konsole__KeyboardTranslator__Entry*)(self));
}
