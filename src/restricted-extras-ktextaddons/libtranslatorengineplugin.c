#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtranslatorengineplugin.hpp"
#include "libtranslatorengineplugin.h"

TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineplugin_new() {
    return TextTranslator__TranslatorEnginePlugin_new();
}

TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineplugin_new2(void* parent) {
    return TextTranslator__TranslatorEnginePlugin_new2((QObject*)parent);
}

const QMetaObject* k_texttranslator__translatorengineplugin_meta_object(void* self) {
    return TextTranslator__TranslatorEnginePlugin_MetaObject((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnMetaObject((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorengineplugin_super_meta_object(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SuperMetaObject((TextTranslator__TranslatorEnginePlugin*)self);
}

void* k_texttranslator__translatorengineplugin_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEnginePlugin_Metacast((TextTranslator__TranslatorEnginePlugin*)self, param1);
}

void k_texttranslator__translatorengineplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEnginePlugin_OnMetacast((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorengineplugin_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEnginePlugin_SuperMetacast((TextTranslator__TranslatorEnginePlugin*)self, param1);
}

int32_t k_texttranslator__translatorengineplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEnginePlugin_Metacall((TextTranslator__TranslatorEnginePlugin*)self, param1, param2, param3);
}

void k_texttranslator__translatorengineplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnMetacall((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEnginePlugin_SuperMetacall((TextTranslator__TranslatorEnginePlugin*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorengineplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineplugin_translate(void* self) {
    TextTranslator__TranslatorEnginePlugin_Translate((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_translate(void* self, void (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnTranslate((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_super_translate(void* self) {
    TextTranslator__TranslatorEnginePlugin_SuperTranslate((TextTranslator__TranslatorEnginePlugin*)self);
}

const char* k_texttranslator__translatorengineplugin_result_translate(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_ResultTranslate((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineplugin_set_input_text(void* self, const char* text) {
    TextTranslator__TranslatorEnginePlugin_SetInputText((TextTranslator__TranslatorEnginePlugin*)self, qstring(text));
}

void k_texttranslator__translatorengineplugin_set_from(void* self, const char* language) {
    TextTranslator__TranslatorEnginePlugin_SetFrom((TextTranslator__TranslatorEnginePlugin*)self, qstring(language));
}

void k_texttranslator__translatorengineplugin_set_to(void* self, const char* language) {
    TextTranslator__TranslatorEnginePlugin_SetTo((TextTranslator__TranslatorEnginePlugin*)self, qstring(language));
}

void k_texttranslator__translatorengineplugin_set_result(void* self, const char* result) {
    TextTranslator__TranslatorEnginePlugin_SetResult((TextTranslator__TranslatorEnginePlugin*)self, qstring(result));
}

void k_texttranslator__translatorengineplugin_set_json_debug(void* self, const char* debug) {
    TextTranslator__TranslatorEnginePlugin_SetJsonDebug((TextTranslator__TranslatorEnginePlugin*)self, qstring(debug));
}

const char* k_texttranslator__translatorengineplugin_input_text(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_InputText((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_from(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_From((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_to(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_To((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_result(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_Result((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_json_debug(void* self) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_JsonDebug((TextTranslator__TranslatorEnginePlugin*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineplugin_clear(void* self) {
    TextTranslator__TranslatorEnginePlugin_Clear((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_translate_done(void* self) {
    TextTranslator__TranslatorEnginePlugin_TranslateDone((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_translate_done(void* self, void (*callback)(void*)) {
    TextTranslator__TranslatorEnginePlugin_Connect_TranslateDone((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_translate_failed(void* self, const char* errorMessage) {
    TextTranslator__TranslatorEnginePlugin_TranslateFailed((TextTranslator__TranslatorEnginePlugin*)self, qstring(errorMessage));
}

void k_texttranslator__translatorengineplugin_on_translate_failed(void* self, void (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEnginePlugin_Connect_TranslateFailed((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_languages_changed(void* self) {
    TextTranslator__TranslatorEnginePlugin_LanguagesChanged((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_languages_changed(void* self, void (*callback)(void*)) {
    TextTranslator__TranslatorEnginePlugin_Connect_LanguagesChanged((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_append_result(void* self, const char* result) {
    TextTranslator__TranslatorEnginePlugin_AppendResult((TextTranslator__TranslatorEnginePlugin*)self, qstring(result));
}

void k_texttranslator__translatorengineplugin_on_append_result(void* self, void (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEnginePlugin_OnAppendResult((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_super_append_result(void* self, const char* result) {
    TextTranslator__TranslatorEnginePlugin_SuperAppendResult((TextTranslator__TranslatorEnginePlugin*)self, qstring(result));
}

void k_texttranslator__translatorengineplugin_slot_error(void* self, int32_t error) {
    TextTranslator__TranslatorEnginePlugin_SlotError((TextTranslator__TranslatorEnginePlugin*)self, error);
}

void k_texttranslator__translatorengineplugin_on_slot_error(void* self, void (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorEnginePlugin_OnSlotError((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_super_slot_error(void* self, int32_t error) {
    TextTranslator__TranslatorEnginePlugin_SuperSlotError((TextTranslator__TranslatorEnginePlugin*)self, error);
}

bool k_texttranslator__translatorengineplugin_verify_from_and_to_language(void* self) {
    return TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_verify_from_and_to_language(void* self, bool (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnVerifyFromAndToLanguage((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineplugin_super_verify_from_and_to_language(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SuperVerifyFromAndToLanguage((TextTranslator__TranslatorEnginePlugin*)self);
}

bool k_texttranslator__translatorengineplugin_has_debug(void* self) {
    return TextTranslator__TranslatorEnginePlugin_HasDebug((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_has_debug(void* self, bool (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnHasDebug((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineplugin_super_has_debug(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SuperHasDebug((TextTranslator__TranslatorEnginePlugin*)self);
}

const char* k_texttranslator__translatorengineplugin_language_code(void* self, const char* langStr) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_LanguageCode((TextTranslator__TranslatorEnginePlugin*)self, qstring(langStr));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineplugin_on_language_code(void* self, const char* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEnginePlugin_OnLanguageCode((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

const char* k_texttranslator__translatorengineplugin_super_language_code(void* self, const char* langStr) {
    libqt_string _str = TextTranslator__TranslatorEnginePlugin_SuperLanguageCode((TextTranslator__TranslatorEnginePlugin*)self, qstring(langStr));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorengineplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorengineplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorengineplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorengineplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorengineplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorengineplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorengineplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorengineplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texttranslator__translatorengineplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorengineplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorengineplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorengineplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorengineplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorengineplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorengineplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorengineplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorengineplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorengineplugin_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatorengineplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorengineplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorengineplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorengineplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorengineplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorengineplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorengineplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorengineplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorengineplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorengineplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorengineplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorengineplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorengineplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorengineplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineplugin_event(void* self, void* event) {
    return TextTranslator__TranslatorEnginePlugin_Event((TextTranslator__TranslatorEnginePlugin*)self, (QEvent*)event);
}

bool k_texttranslator__translatorengineplugin_super_event(void* self, void* event) {
    return TextTranslator__TranslatorEnginePlugin_SuperEvent((TextTranslator__TranslatorEnginePlugin*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnEvent((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineplugin_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEnginePlugin_EventFilter((TextTranslator__TranslatorEnginePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorengineplugin_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEnginePlugin_SuperEventFilter((TextTranslator__TranslatorEnginePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorengineplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnEventFilter((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_TimerEvent((TextTranslator__TranslatorEnginePlugin*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineplugin_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_SuperTimerEvent((TextTranslator__TranslatorEnginePlugin*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnTimerEvent((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_child_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_ChildEvent((TextTranslator__TranslatorEnginePlugin*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineplugin_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_SuperChildEvent((TextTranslator__TranslatorEnginePlugin*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnChildEvent((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_CustomEvent((TextTranslator__TranslatorEnginePlugin*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineplugin_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEnginePlugin_SuperCustomEvent((TextTranslator__TranslatorEnginePlugin*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnCustomEvent((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEnginePlugin_ConnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineplugin_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEnginePlugin_SuperConnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnConnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEnginePlugin_DisconnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineplugin_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnDisconnectNotify((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineplugin_sender(void* self) {
    return TextTranslator__TranslatorEnginePlugin_Sender((TextTranslator__TranslatorEnginePlugin*)self);
}

QObject* k_texttranslator__translatorengineplugin_super_sender(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SuperSender((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnSender((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineplugin_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SenderSignalIndex((TextTranslator__TranslatorEnginePlugin*)self);
}

int32_t k_texttranslator__translatorengineplugin_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEnginePlugin_SuperSenderSignalIndex((TextTranslator__TranslatorEnginePlugin*)self);
}

void k_texttranslator__translatorengineplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorEnginePlugin_OnSenderSignalIndex((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineplugin_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEnginePlugin_Receivers((TextTranslator__TranslatorEnginePlugin*)self, signal);
}

int32_t k_texttranslator__translatorengineplugin_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEnginePlugin_SuperReceivers((TextTranslator__TranslatorEnginePlugin*)self, signal);
}

void k_texttranslator__translatorengineplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEnginePlugin_OnReceivers((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineplugin_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEnginePlugin_IsSignalConnected((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatorengineplugin_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEnginePlugin_SuperIsSignalConnected((TextTranslator__TranslatorEnginePlugin*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEnginePlugin_OnIsSignalConnected((TextTranslator__TranslatorEnginePlugin*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineplugin_delete(void* self) {
    TextTranslator__TranslatorEnginePlugin_Delete((TextTranslator__TranslatorEnginePlugin*)(self));
}
