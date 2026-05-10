#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libtranslatorengineplugin.hpp"
#include "libtranslatorengineclient.hpp"
#include "libtranslatorengineclient.h"

TextTranslator__TranslatorEngineClient* k_texttranslator__translatorengineclient_new() {
    return TextTranslator__TranslatorEngineClient_new();
}

TextTranslator__TranslatorEngineClient* k_texttranslator__translatorengineclient_new2(void* parent) {
    return TextTranslator__TranslatorEngineClient_new2((QObject*)parent);
}

const QMetaObject* k_texttranslator__translatorengineclient_meta_object(void* self) {
    return TextTranslator__TranslatorEngineClient_MetaObject((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnMetaObject((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorengineclient_super_meta_object(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperMetaObject((TextTranslator__TranslatorEngineClient*)self);
}

void* k_texttranslator__translatorengineclient_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEngineClient_Metacast((TextTranslator__TranslatorEngineClient*)self, param1);
}

void k_texttranslator__translatorengineclient_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEngineClient_OnMetacast((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorengineclient_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEngineClient_SuperMetacast((TextTranslator__TranslatorEngineClient*)self, param1);
}

int32_t k_texttranslator__translatorengineclient_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEngineClient_Metacall((TextTranslator__TranslatorEngineClient*)self, param1, param2, param3);
}

void k_texttranslator__translatorengineclient_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorEngineClient_OnMetacall((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineclient_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEngineClient_SuperMetacall((TextTranslator__TranslatorEngineClient*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorengineclient_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineclient_name(void* self) {
    libqt_string _str = TextTranslator__TranslatorEngineClient_Name((TextTranslator__TranslatorEngineClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineclient_on_name(void* self, const char* (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnName((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

const char* k_texttranslator__translatorengineclient_super_name(void* self) {
    libqt_string _str = TextTranslator__TranslatorEngineClient_SuperName((TextTranslator__TranslatorEngineClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineclient_translated_name(void* self) {
    libqt_string _str = TextTranslator__TranslatorEngineClient_TranslatedName((TextTranslator__TranslatorEngineClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineclient_on_translated_name(void* self, const char* (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnTranslatedName((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

const char* k_texttranslator__translatorengineclient_super_translated_name(void* self) {
    libqt_string _str = TextTranslator__TranslatorEngineClient_SuperTranslatedName((TextTranslator__TranslatorEngineClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineclient_create_translator(void* self) {
    return TextTranslator__TranslatorEngineClient_CreateTranslator((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_create_translator(void* self, TextTranslator__TranslatorEnginePlugin* (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnCreateTranslator((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

TextTranslator__TranslatorEnginePlugin* k_texttranslator__translatorengineclient_super_create_translator(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperCreateTranslator((TextTranslator__TranslatorEngineClient*)self);
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_supported_from_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_SupportedFromLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_from_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_from_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_texttranslator__translatorengineclient_on_supported_from_languages(void* self, libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnSupportedFromLanguages((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_super_supported_from_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_SuperSupportedFromLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_from_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_from_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_supported_to_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_SupportedToLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_to_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_to_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_texttranslator__translatorengineclient_on_supported_to_languages(void* self, libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnSupportedToLanguages((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_super_supported_to_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_SuperSupportedToLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_to_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_supported_to_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_texttranslator__translatorengineclient_update_list_languages(void* self) {
    TextTranslator__TranslatorEngineClient_UpdateListLanguages((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_update_list_languages(void* self, void (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnUpdateListLanguages((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_super_update_list_languages(void* self) {
    TextTranslator__TranslatorEngineClient_SuperUpdateListLanguages((TextTranslator__TranslatorEngineClient*)self);
}

bool k_texttranslator__translatorengineclient_has_configuration_dialog(void* self) {
    return TextTranslator__TranslatorEngineClient_HasConfigurationDialog((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_has_configuration_dialog(void* self, bool (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnHasConfigurationDialog((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_super_has_configuration_dialog(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperHasConfigurationDialog((TextTranslator__TranslatorEngineClient*)self);
}

bool k_texttranslator__translatorengineclient_show_configure_dialog(void* self, void* parentWidget) {
    return TextTranslator__TranslatorEngineClient_ShowConfigureDialog((TextTranslator__TranslatorEngineClient*)self, (QWidget*)parentWidget);
}

void k_texttranslator__translatorengineclient_on_show_configure_dialog(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnShowConfigureDialog((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_super_show_configure_dialog(void* self, void* parentWidget) {
    return TextTranslator__TranslatorEngineClient_SuperShowConfigureDialog((TextTranslator__TranslatorEngineClient*)self, (QWidget*)parentWidget);
}

void k_texttranslator__translatorengineclient_generate_to_list_from_current_to_language(void* self, const char* languageCode) {
    TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage((TextTranslator__TranslatorEngineClient*)self, qstring(languageCode));
}

void k_texttranslator__translatorengineclient_on_generate_to_list_from_current_to_language(void* self, void (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEngineClient_OnGenerateToListFromCurrentToLanguage((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_super_generate_to_list_from_current_to_language(void* self, const char* languageCode) {
    TextTranslator__TranslatorEngineClient_SuperGenerateToListFromCurrentToLanguage((TextTranslator__TranslatorEngineClient*)self, qstring(languageCode));
}

bool k_texttranslator__translatorengineclient_has_invert_support(void* self) {
    return TextTranslator__TranslatorEngineClient_HasInvertSupport((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_has_invert_support(void* self, bool (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnHasInvertSupport((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_super_has_invert_support(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperHasInvertSupport((TextTranslator__TranslatorEngineClient*)self);
}

int32_t k_texttranslator__translatorengineclient_engine_type(void* self) {
    return TextTranslator__TranslatorEngineClient_EngineType((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_engine_type(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnEngineType((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineclient_super_engine_type(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperEngineType((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_configure_changed(void* self) {
    TextTranslator__TranslatorEngineClient_ConfigureChanged((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_configure_changed(void* self, void (*callback)(void*)) {
    TextTranslator__TranslatorEngineClient_Connect_ConfigureChanged((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_fill_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_FillLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_fill_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_fill_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_texttranslator__translatorengineclient_on_fill_languages(void* self, libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnFillLanguages((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorengineclient_super_fill_languages(void* self) {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorEngineClient_SuperFillLanguages((TextTranslator__TranslatorEngineClient*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_fill_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorengineclient_fill_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

bool k_texttranslator__translatorengineclient_is_supported(void* self, int32_t lang) {
    return TextTranslator__TranslatorEngineClient_IsSupported((TextTranslator__TranslatorEngineClient*)self, lang);
}

void k_texttranslator__translatorengineclient_on_is_supported(void* self, bool (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorEngineClient_OnIsSupported((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_super_is_supported(void* self, int32_t lang) {
    return TextTranslator__TranslatorEngineClient_SuperIsSupported((TextTranslator__TranslatorEngineClient*)self, lang);
}

const char* k_texttranslator__translatorengineclient_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineclient_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineclient_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineclient_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorengineclient_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorengineclient_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorengineclient_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorengineclient_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorengineclient_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorengineclient_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorengineclient_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorengineclient_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorengineclient_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorengineclient_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorengineclient_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorengineclient_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorengineclient_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texttranslator__translatorengineclient_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorengineclient_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorengineclient_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineclient_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorengineclient_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorengineclient_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorengineclient_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorengineclient_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorengineclient_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorengineclient_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorengineclient_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorengineclient_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorengineclient_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatorengineclient_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorengineclient_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorengineclient_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorengineclient_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineclient_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorengineclient_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorengineclient_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorengineclient_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorengineclient_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorengineclient_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorengineclient_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorengineclient_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorengineclient_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineclient_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorengineclient_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorengineclient_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_event(void* self, void* event) {
    return TextTranslator__TranslatorEngineClient_Event((TextTranslator__TranslatorEngineClient*)self, (QEvent*)event);
}

bool k_texttranslator__translatorengineclient_super_event(void* self, void* event) {
    return TextTranslator__TranslatorEngineClient_SuperEvent((TextTranslator__TranslatorEngineClient*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineclient_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnEvent((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEngineClient_EventFilter((TextTranslator__TranslatorEngineClient*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorengineclient_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEngineClient_SuperEventFilter((TextTranslator__TranslatorEngineClient*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorengineclient_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnEventFilter((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_TimerEvent((TextTranslator__TranslatorEngineClient*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineclient_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_SuperTimerEvent((TextTranslator__TranslatorEngineClient*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineclient_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnTimerEvent((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_child_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_ChildEvent((TextTranslator__TranslatorEngineClient*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineclient_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_SuperChildEvent((TextTranslator__TranslatorEngineClient*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineclient_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnChildEvent((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_CustomEvent((TextTranslator__TranslatorEngineClient*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineclient_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEngineClient_SuperCustomEvent((TextTranslator__TranslatorEngineClient*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineclient_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnCustomEvent((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineClient_ConnectNotify((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineclient_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineClient_SuperConnectNotify((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineclient_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnConnectNotify((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineClient_DisconnectNotify((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineclient_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineClient_SuperDisconnectNotify((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineclient_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnDisconnectNotify((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineclient_sender(void* self) {
    return TextTranslator__TranslatorEngineClient_Sender((TextTranslator__TranslatorEngineClient*)self);
}

QObject* k_texttranslator__translatorengineclient_super_sender(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperSender((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnSender((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineclient_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEngineClient_SenderSignalIndex((TextTranslator__TranslatorEngineClient*)self);
}

int32_t k_texttranslator__translatorengineclient_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEngineClient_SuperSenderSignalIndex((TextTranslator__TranslatorEngineClient*)self);
}

void k_texttranslator__translatorengineclient_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorEngineClient_OnSenderSignalIndex((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineclient_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEngineClient_Receivers((TextTranslator__TranslatorEngineClient*)self, signal);
}

int32_t k_texttranslator__translatorengineclient_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEngineClient_SuperReceivers((TextTranslator__TranslatorEngineClient*)self, signal);
}

void k_texttranslator__translatorengineclient_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEngineClient_OnReceivers((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineclient_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEngineClient_IsSignalConnected((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatorengineclient_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEngineClient_SuperIsSignalConnected((TextTranslator__TranslatorEngineClient*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineclient_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineClient_OnIsSignalConnected((TextTranslator__TranslatorEngineClient*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineclient_delete(void* self) {
    TextTranslator__TranslatorEngineClient_Delete((TextTranslator__TranslatorEngineClient*)(self));
}
