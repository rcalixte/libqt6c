#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libsettings.hpp"
#include "libsettings.h"

Sonnet__Settings* k_sonnet__settings_new() {
    return Sonnet__Settings_new();
}

Sonnet__Settings* k_sonnet__settings_new2(void* parent) {
    return Sonnet__Settings_new2((QObject*)parent);
}

const QMetaObject* k_sonnet__settings_meta_object(void* self) {
    return Sonnet__Settings_MetaObject((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Sonnet__Settings_OnMetaObject((Sonnet__Settings*)self, (intptr_t)callback);
}

const QMetaObject* k_sonnet__settings_qbase_meta_object(void* self) {
    return Sonnet__Settings_QBaseMetaObject((Sonnet__Settings*)self);
}

void* k_sonnet__settings_metacast(void* self, const char* param1) {
    return Sonnet__Settings_Metacast((Sonnet__Settings*)self, param1);
}

void k_sonnet__settings_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Sonnet__Settings_OnMetacast((Sonnet__Settings*)self, (intptr_t)callback);
}

void* k_sonnet__settings_qbase_metacast(void* self, const char* param1) {
    return Sonnet__Settings_QBaseMetacast((Sonnet__Settings*)self, param1);
}

int32_t k_sonnet__settings_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Settings_Metacall((Sonnet__Settings*)self, param1, param2, param3);
}

void k_sonnet__settings_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__Settings_OnMetacall((Sonnet__Settings*)self, (intptr_t)callback);
}

int32_t k_sonnet__settings_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Settings_QBaseMetacall((Sonnet__Settings*)self, param1, param2, param3);
}

const char* k_sonnet__settings_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__settings_set_default_language(void* self, const char* lang) {
    Sonnet__Settings_SetDefaultLanguage((Sonnet__Settings*)self, qstring(lang));
}

const char* k_sonnet__settings_default_language(void* self) {
    libqt_string _str = Sonnet__Settings_DefaultLanguage((Sonnet__Settings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__settings_set_preferred_languages(void* self, const char* lang[static 1]) {
    size_t lang_len = libqt_strv_length(lang);
    libqt_string* lang_qstr = (libqt_string*)malloc(lang_len * sizeof(libqt_string));
    if (lang_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_set_preferred_languages\n");
        abort();
    }
    for (size_t i = 0; i < lang_len; ++i) {
        lang_qstr[i] = qstring(lang[i]);
    }
    libqt_list lang_list = qlist(lang_qstr, lang_len);
    Sonnet__Settings_SetPreferredLanguages((Sonnet__Settings*)self, lang_list);
    free(lang_qstr);
}

const char** k_sonnet__settings_preferred_languages(void* self) {
    libqt_list _arr = Sonnet__Settings_PreferredLanguages((Sonnet__Settings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_preferred_languages\n");
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

void k_sonnet__settings_set_default_client(void* self, const char* client) {
    Sonnet__Settings_SetDefaultClient((Sonnet__Settings*)self, qstring(client));
}

const char* k_sonnet__settings_default_client(void* self) {
    libqt_string _str = Sonnet__Settings_DefaultClient((Sonnet__Settings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__settings_set_skip_uppercase(void* self, bool skipUppercase) {
    Sonnet__Settings_SetSkipUppercase((Sonnet__Settings*)self, skipUppercase);
}

bool k_sonnet__settings_skip_uppercase(void* self) {
    return Sonnet__Settings_SkipUppercase((Sonnet__Settings*)self);
}

void k_sonnet__settings_set_autodetect_language(void* self, bool autodetectLanguage) {
    Sonnet__Settings_SetAutodetectLanguage((Sonnet__Settings*)self, autodetectLanguage);
}

bool k_sonnet__settings_autodetect_language(void* self) {
    return Sonnet__Settings_AutodetectLanguage((Sonnet__Settings*)self);
}

void k_sonnet__settings_set_skip_run_together(void* self, bool skipRunTogether) {
    Sonnet__Settings_SetSkipRunTogether((Sonnet__Settings*)self, skipRunTogether);
}

bool k_sonnet__settings_skip_run_together(void* self) {
    return Sonnet__Settings_SkipRunTogether((Sonnet__Settings*)self);
}

void k_sonnet__settings_set_background_checker_enabled(void* self, bool backgroundCheckerEnabled) {
    Sonnet__Settings_SetBackgroundCheckerEnabled((Sonnet__Settings*)self, backgroundCheckerEnabled);
}

bool k_sonnet__settings_background_checker_enabled(void* self) {
    return Sonnet__Settings_BackgroundCheckerEnabled((Sonnet__Settings*)self);
}

void k_sonnet__settings_set_checker_enabled_by_default(void* self, bool checkerEnabledByDefault) {
    Sonnet__Settings_SetCheckerEnabledByDefault((Sonnet__Settings*)self, checkerEnabledByDefault);
}

bool k_sonnet__settings_checker_enabled_by_default(void* self) {
    return Sonnet__Settings_CheckerEnabledByDefault((Sonnet__Settings*)self);
}

void k_sonnet__settings_set_current_ignore_list(void* self, const char* ignores[static 1]) {
    size_t ignores_len = libqt_strv_length(ignores);
    libqt_string* ignores_qstr = (libqt_string*)malloc(ignores_len * sizeof(libqt_string));
    if (ignores_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_set_current_ignore_list\n");
        abort();
    }
    for (size_t i = 0; i < ignores_len; ++i) {
        ignores_qstr[i] = qstring(ignores[i]);
    }
    libqt_list ignores_list = qlist(ignores_qstr, ignores_len);
    Sonnet__Settings_SetCurrentIgnoreList((Sonnet__Settings*)self, ignores_list);
    free(ignores_qstr);
}

const char** k_sonnet__settings_current_ignore_list(void* self) {
    libqt_list _arr = Sonnet__Settings_CurrentIgnoreList((Sonnet__Settings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_current_ignore_list\n");
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

const char** k_sonnet__settings_clients(void* self) {
    libqt_list _arr = Sonnet__Settings_Clients((Sonnet__Settings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_clients\n");
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

bool k_sonnet__settings_modified(void* self) {
    return Sonnet__Settings_Modified((Sonnet__Settings*)self);
}

QAbstractListModel* k_sonnet__settings_dictionary_model(void* self) {
    return Sonnet__Settings_DictionaryModel((Sonnet__Settings*)self);
}

void k_sonnet__settings_save(void* self) {
    Sonnet__Settings_Save((Sonnet__Settings*)self);
}

const char** k_sonnet__settings_default_ignore_list() {
    libqt_list _arr = Sonnet__Settings_DefaultIgnoreList();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_default_ignore_list\n");
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

bool k_sonnet__settings_default_skip_uppercase() {
    return Sonnet__Settings_DefaultSkipUppercase();
}

bool k_sonnet__settings_default_autodetect_language() {
    return Sonnet__Settings_DefaultAutodetectLanguage();
}

bool k_sonnet__settings_default_background_checker_enabled() {
    return Sonnet__Settings_DefaultBackgroundCheckerEnabled();
}

bool k_sonnet__settings_default_checker_enabled_by_default() {
    return Sonnet__Settings_DefaultCheckerEnabledByDefault();
}

bool k_sonnet__settings_defaukt_skip_run_together() {
    return Sonnet__Settings_DefauktSkipRunTogether();
}

const char* k_sonnet__settings_default_default_language() {
    libqt_string _str = Sonnet__Settings_DefaultDefaultLanguage();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_sonnet__settings_default_preferred_languages() {
    libqt_list _arr = Sonnet__Settings_DefaultPreferredLanguages();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_default_preferred_languages\n");
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

void k_sonnet__settings_skip_uppercase_changed(void* self) {
    Sonnet__Settings_SkipUppercaseChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_skip_uppercase_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_SkipUppercaseChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_autodetect_language_changed(void* self) {
    Sonnet__Settings_AutodetectLanguageChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_autodetect_language_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_AutodetectLanguageChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_background_checker_enabled_changed(void* self) {
    Sonnet__Settings_BackgroundCheckerEnabledChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_background_checker_enabled_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_default_client_changed(void* self) {
    Sonnet__Settings_DefaultClientChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_default_client_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_DefaultClientChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_default_language_changed(void* self) {
    Sonnet__Settings_DefaultLanguageChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_default_language_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_DefaultLanguageChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_preferred_languages_changed(void* self) {
    Sonnet__Settings_PreferredLanguagesChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_preferred_languages_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_PreferredLanguagesChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_skip_run_together_changed(void* self) {
    Sonnet__Settings_SkipRunTogetherChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_skip_run_together_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_SkipRunTogetherChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_checker_enabled_by_default_changed(void* self) {
    Sonnet__Settings_CheckerEnabledByDefaultChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_checker_enabled_by_default_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_current_ignore_list_changed(void* self) {
    Sonnet__Settings_CurrentIgnoreListChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_current_ignore_list_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_CurrentIgnoreListChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_modified_changed(void* self) {
    Sonnet__Settings_ModifiedChanged((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_modified_changed(void* self, void (*callback)(void*)) {
    Sonnet__Settings_Connect_ModifiedChanged((Sonnet__Settings*)self, (intptr_t)callback);
}

const char* k_sonnet__settings_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__settings_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__settings_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__settings_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__settings_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__settings_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__settings_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__settings_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__settings_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__settings_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__settings_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__settings_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_sonnet__settings_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_sonnet__settings_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__settings_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__settings_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__settings_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_sonnet__settings_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__settings_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__settings_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_sonnet__settings_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__settings_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__settings_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_sonnet__settings_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__settings_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_sonnet__settings_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_sonnet__settings_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_sonnet__settings_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__settings_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__settings_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__settings_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__settings_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__settings_dynamic_property_names\n");
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

QBindingStorage* k_sonnet__settings_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__settings_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__settings_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__settings_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__settings_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__settings_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__settings_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_sonnet__settings_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_sonnet__settings_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_sonnet__settings_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_sonnet__settings_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sonnet__settings_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_sonnet__settings_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_sonnet__settings_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_sonnet__settings_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_sonnet__settings_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_sonnet__settings_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__settings_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__settings_event(void* self, void* event) {
    return Sonnet__Settings_Event((Sonnet__Settings*)self, (QEvent*)event);
}

bool k_sonnet__settings_qbase_event(void* self, void* event) {
    return Sonnet__Settings_QBaseEvent((Sonnet__Settings*)self, (QEvent*)event);
}

void k_sonnet__settings_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Settings_OnEvent((Sonnet__Settings*)self, (intptr_t)callback);
}

bool k_sonnet__settings_event_filter(void* self, void* watched, void* event) {
    return Sonnet__Settings_EventFilter((Sonnet__Settings*)self, (QObject*)watched, (QEvent*)event);
}

bool k_sonnet__settings_qbase_event_filter(void* self, void* watched, void* event) {
    return Sonnet__Settings_QBaseEventFilter((Sonnet__Settings*)self, (QObject*)watched, (QEvent*)event);
}

void k_sonnet__settings_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__Settings_OnEventFilter((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_timer_event(void* self, void* event) {
    Sonnet__Settings_TimerEvent((Sonnet__Settings*)self, (QTimerEvent*)event);
}

void k_sonnet__settings_qbase_timer_event(void* self, void* event) {
    Sonnet__Settings_QBaseTimerEvent((Sonnet__Settings*)self, (QTimerEvent*)event);
}

void k_sonnet__settings_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Settings_OnTimerEvent((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_child_event(void* self, void* event) {
    Sonnet__Settings_ChildEvent((Sonnet__Settings*)self, (QChildEvent*)event);
}

void k_sonnet__settings_qbase_child_event(void* self, void* event) {
    Sonnet__Settings_QBaseChildEvent((Sonnet__Settings*)self, (QChildEvent*)event);
}

void k_sonnet__settings_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Settings_OnChildEvent((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_custom_event(void* self, void* event) {
    Sonnet__Settings_CustomEvent((Sonnet__Settings*)self, (QEvent*)event);
}

void k_sonnet__settings_qbase_custom_event(void* self, void* event) {
    Sonnet__Settings_QBaseCustomEvent((Sonnet__Settings*)self, (QEvent*)event);
}

void k_sonnet__settings_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Settings_OnCustomEvent((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_connect_notify(void* self, void* signal) {
    Sonnet__Settings_ConnectNotify((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

void k_sonnet__settings_qbase_connect_notify(void* self, void* signal) {
    Sonnet__Settings_QBaseConnectNotify((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

void k_sonnet__settings_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Settings_OnConnectNotify((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_disconnect_notify(void* self, void* signal) {
    Sonnet__Settings_DisconnectNotify((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

void k_sonnet__settings_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__Settings_QBaseDisconnectNotify((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

void k_sonnet__settings_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Settings_OnDisconnectNotify((Sonnet__Settings*)self, (intptr_t)callback);
}

QObject* k_sonnet__settings_sender(void* self) {
    return Sonnet__Settings_Sender((Sonnet__Settings*)self);
}

QObject* k_sonnet__settings_qbase_sender(void* self) {
    return Sonnet__Settings_QBaseSender((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__Settings_OnSender((Sonnet__Settings*)self, (intptr_t)callback);
}

int32_t k_sonnet__settings_sender_signal_index(void* self) {
    return Sonnet__Settings_SenderSignalIndex((Sonnet__Settings*)self);
}

int32_t k_sonnet__settings_qbase_sender_signal_index(void* self) {
    return Sonnet__Settings_QBaseSenderSignalIndex((Sonnet__Settings*)self);
}

void k_sonnet__settings_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__Settings_OnSenderSignalIndex((Sonnet__Settings*)self, (intptr_t)callback);
}

int32_t k_sonnet__settings_receivers(void* self, const char* signal) {
    return Sonnet__Settings_Receivers((Sonnet__Settings*)self, signal);
}

int32_t k_sonnet__settings_qbase_receivers(void* self, const char* signal) {
    return Sonnet__Settings_QBaseReceivers((Sonnet__Settings*)self, signal);
}

void k_sonnet__settings_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__Settings_OnReceivers((Sonnet__Settings*)self, (intptr_t)callback);
}

bool k_sonnet__settings_is_signal_connected(void* self, void* signal) {
    return Sonnet__Settings_IsSignalConnected((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

bool k_sonnet__settings_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__Settings_QBaseIsSignalConnected((Sonnet__Settings*)self, (QMetaMethod*)signal);
}

void k_sonnet__settings_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Settings_OnIsSignalConnected((Sonnet__Settings*)self, (intptr_t)callback);
}

void k_sonnet__settings_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__settings_delete(void* self) {
    Sonnet__Settings_Delete((Sonnet__Settings*)(self));
}
