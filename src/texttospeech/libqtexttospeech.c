#include "../libqcoreevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqvoice.hpp"
#include "libqtexttospeech.hpp"
#include "libqtexttospeech.h"

QTextToSpeech* q_texttospeech_new() {
    return QTextToSpeech_new();
}

QTextToSpeech* q_texttospeech_new2(const char* engine) {
    return QTextToSpeech_new2(qstring(engine));
}

QTextToSpeech* q_texttospeech_new3(const char* engine, libqt_map /* of const char* to QVariant* */ params) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map params_ret;
    params_ret.len = params.len;
    params_ret.keys = (libqt_string*)malloc(params_ret.len * sizeof(libqt_string));
    if (params_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_texttospeech_new3\n");
        abort();
    }
    params_ret.values = (QVariant**)malloc(params_ret.len * sizeof(QVariant*));
    if (params_ret.values == NULL) {
        free(params_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_texttospeech_new3\n");
        abort();
    }
    const char** params_karr = (const char**)params.keys;
    libqt_string* params_kdest = (libqt_string*)params_ret.keys;
    QVariant** params_varr = (QVariant**)params.values;
    QVariant** params_vdest = (QVariant**)params_ret.values;
    for (size_t i = 0; i < params_ret.len; ++i) {
        params_kdest[i] = qstring(params_karr[i]);
        params_vdest[i] = params_varr[i];
    }

    QTextToSpeech* _out = QTextToSpeech_new3(qstring(engine), params_ret);
    free(params_ret.keys);
    free(params_ret.values);
    return _out;
}

QTextToSpeech* q_texttospeech_new4(void* parent) {
    return QTextToSpeech_new4((QObject*)parent);
}

QTextToSpeech* q_texttospeech_new5(const char* engine, void* parent) {
    return QTextToSpeech_new5(qstring(engine), (QObject*)parent);
}

QTextToSpeech* q_texttospeech_new6(const char* engine, libqt_map /* of const char* to QVariant* */ params, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map params_ret;
    params_ret.len = params.len;
    params_ret.keys = (libqt_string*)malloc(params_ret.len * sizeof(libqt_string));
    if (params_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_texttospeech_new6\n");
        abort();
    }
    params_ret.values = (QVariant**)malloc(params_ret.len * sizeof(QVariant*));
    if (params_ret.values == NULL) {
        free(params_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_texttospeech_new6\n");
        abort();
    }
    const char** params_karr = (const char**)params.keys;
    libqt_string* params_kdest = (libqt_string*)params_ret.keys;
    QVariant** params_varr = (QVariant**)params.values;
    QVariant** params_vdest = (QVariant**)params_ret.values;
    for (size_t i = 0; i < params_ret.len; ++i) {
        params_kdest[i] = qstring(params_karr[i]);
        params_vdest[i] = params_varr[i];
    }

    QTextToSpeech* _out = QTextToSpeech_new6(qstring(engine), params_ret, (QObject*)parent);
    free(params_ret.keys);
    free(params_ret.values);
    return _out;
}

const QMetaObject* q_texttospeech_meta_object(void* self) {
    return QTextToSpeech_MetaObject((QTextToSpeech*)self);
}

void q_texttospeech_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTextToSpeech_OnMetaObject((QTextToSpeech*)self, (intptr_t)callback);
}

const QMetaObject* q_texttospeech_super_meta_object(void* self) {
    return QTextToSpeech_SuperMetaObject((QTextToSpeech*)self);
}

void* q_texttospeech_metacast(void* self, const char* param1) {
    return QTextToSpeech_Metacast((QTextToSpeech*)self, param1);
}

void q_texttospeech_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTextToSpeech_OnMetacast((QTextToSpeech*)self, (intptr_t)callback);
}

void* q_texttospeech_super_metacast(void* self, const char* param1) {
    return QTextToSpeech_SuperMetacast((QTextToSpeech*)self, param1);
}

int32_t q_texttospeech_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextToSpeech_Metacall((QTextToSpeech*)self, param1, param2, param3);
}

void q_texttospeech_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTextToSpeech_OnMetacall((QTextToSpeech*)self, (intptr_t)callback);
}

int32_t q_texttospeech_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextToSpeech_SuperMetacall((QTextToSpeech*)self, param1, param2, param3);
}

const char* q_texttospeech_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_texttospeech_set_engine(void* self, const char* engine) {
    return QTextToSpeech_SetEngine((QTextToSpeech*)self, qstring(engine));
}

const char* q_texttospeech_engine(void* self) {
    libqt_string _str = QTextToSpeech_Engine((QTextToSpeech*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_texttospeech_engine_capabilities(void* self) {
    return QTextToSpeech_EngineCapabilities((QTextToSpeech*)self);
}

int32_t q_texttospeech_state(void* self) {
    return QTextToSpeech_State((QTextToSpeech*)self);
}

int32_t q_texttospeech_error_reason(void* self) {
    return QTextToSpeech_ErrorReason((QTextToSpeech*)self);
}

const char* q_texttospeech_error_string(void* self) {
    libqt_string _str = QTextToSpeech_ErrorString((QTextToSpeech*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QLocale* */ q_texttospeech_available_locales(void* self) {
    libqt_list _arr = QTextToSpeech_AvailableLocales((QTextToSpeech*)self);
    return _arr;
}

QLocale* q_texttospeech_locale(void* self) {
    return QTextToSpeech_Locale((QTextToSpeech*)self);
}

QVoice* q_texttospeech_voice(void* self) {
    return QTextToSpeech_Voice((QTextToSpeech*)self);
}

libqt_list /* of QVoice* */ q_texttospeech_available_voices(void* self) {
    libqt_list _arr = QTextToSpeech_AvailableVoices((QTextToSpeech*)self);
    return _arr;
}

double q_texttospeech_rate(void* self) {
    return QTextToSpeech_Rate((QTextToSpeech*)self);
}

double q_texttospeech_pitch(void* self) {
    return QTextToSpeech_Pitch((QTextToSpeech*)self);
}

double q_texttospeech_volume(void* self) {
    return QTextToSpeech_Volume((QTextToSpeech*)self);
}

const char** q_texttospeech_available_engines() {
    libqt_list _arr = QTextToSpeech_AvailableEngines();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_texttospeech_available_engines\n");
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

void q_texttospeech_say(void* self, const char* text) {
    QTextToSpeech_Say((QTextToSpeech*)self, qstring(text));
}

intptr_t q_texttospeech_enqueue(void* self, const char* text) {
    return QTextToSpeech_Enqueue((QTextToSpeech*)self, qstring(text));
}

void q_texttospeech_stop(void* self) {
    QTextToSpeech_Stop((QTextToSpeech*)self);
}

void q_texttospeech_pause(void* self) {
    QTextToSpeech_Pause((QTextToSpeech*)self);
}

void q_texttospeech_resume(void* self) {
    QTextToSpeech_Resume((QTextToSpeech*)self);
}

void q_texttospeech_set_locale(void* self, void* locale) {
    QTextToSpeech_SetLocale((QTextToSpeech*)self, (QLocale*)locale);
}

void q_texttospeech_set_rate(void* self, double rate) {
    QTextToSpeech_SetRate((QTextToSpeech*)self, rate);
}

void q_texttospeech_set_pitch(void* self, double pitch) {
    QTextToSpeech_SetPitch((QTextToSpeech*)self, pitch);
}

void q_texttospeech_set_volume(void* self, double volume) {
    QTextToSpeech_SetVolume((QTextToSpeech*)self, volume);
}

void q_texttospeech_set_voice(void* self, void* voice) {
    QTextToSpeech_SetVoice((QTextToSpeech*)self, (QVoice*)voice);
}

void q_texttospeech_engine_changed(void* self, const char* engine) {
    QTextToSpeech_EngineChanged((QTextToSpeech*)self, qstring(engine));
}

void q_texttospeech_on_engine_changed(void* self, void (*callback)(void*, const char*)) {
    QTextToSpeech_Connect_EngineChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_state_changed(void* self, int32_t state) {
    QTextToSpeech_StateChanged((QTextToSpeech*)self, state);
}

void q_texttospeech_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QTextToSpeech_Connect_StateChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_error_occurred(void* self, int32_t error, const char* errorString) {
    QTextToSpeech_ErrorOccurred((QTextToSpeech*)self, error, qstring(errorString));
}

void q_texttospeech_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*)) {
    QTextToSpeech_Connect_ErrorOccurred((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_locale_changed(void* self, void* locale) {
    QTextToSpeech_LocaleChanged((QTextToSpeech*)self, (QLocale*)locale);
}

void q_texttospeech_on_locale_changed(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_Connect_LocaleChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_rate_changed(void* self, double rate) {
    QTextToSpeech_RateChanged((QTextToSpeech*)self, rate);
}

void q_texttospeech_on_rate_changed(void* self, void (*callback)(void*, double)) {
    QTextToSpeech_Connect_RateChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_pitch_changed(void* self, double pitch) {
    QTextToSpeech_PitchChanged((QTextToSpeech*)self, pitch);
}

void q_texttospeech_on_pitch_changed(void* self, void (*callback)(void*, double)) {
    QTextToSpeech_Connect_PitchChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_volume_changed(void* self, double volume) {
    QTextToSpeech_VolumeChanged((QTextToSpeech*)self, volume);
}

void q_texttospeech_on_volume_changed(void* self, void (*callback)(void*, double)) {
    QTextToSpeech_Connect_VolumeChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_voice_changed(void* self, void* voice) {
    QTextToSpeech_VoiceChanged((QTextToSpeech*)self, (QVoice*)voice);
}

void q_texttospeech_on_voice_changed(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_Connect_VoiceChanged((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_saying_word(void* self, const char* word, intptr_t id, intptr_t start, intptr_t length) {
    QTextToSpeech_SayingWord((QTextToSpeech*)self, qstring(word), id, start, length);
}

void q_texttospeech_on_saying_word(void* self, void (*callback)(void*, const char*, intptr_t, intptr_t, intptr_t)) {
    QTextToSpeech_Connect_SayingWord((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_about_to_synthesize(void* self, intptr_t id) {
    QTextToSpeech_AboutToSynthesize((QTextToSpeech*)self, id);
}

void q_texttospeech_on_about_to_synthesize(void* self, void (*callback)(void*, intptr_t)) {
    QTextToSpeech_Connect_AboutToSynthesize((QTextToSpeech*)self, (intptr_t)callback);
}

libqt_list /* of QVoice* */ q_texttospeech_all_voices(void* self, void* locale) {
    libqt_list _arr = QTextToSpeech_AllVoices((QTextToSpeech*)self, (QLocale*)locale);
    return _arr;
}

void q_texttospeech_on_all_voices(void* self, libqt_list /* of QVoice* */ (*callback)(void*, void*)) {
    QTextToSpeech_OnAllVoices((QTextToSpeech*)self, (intptr_t)callback);
}

libqt_list /* of QVoice* */ q_texttospeech_super_all_voices(void* self, void* locale) {
    libqt_list _arr = QTextToSpeech_SuperAllVoices((QTextToSpeech*)self, (QLocale*)locale);
    return _arr;
}

const char* q_texttospeech_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_texttospeech_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_texttospeech_set_engine2(void* self, const char* engine, libqt_map /* of const char* to QVariant* */ params) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map params_ret;
    params_ret.len = params.len;
    params_ret.keys = (libqt_string*)malloc(params_ret.len * sizeof(libqt_string));
    if (params_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_texttospeech_set_engine2\n");
        abort();
    }
    params_ret.values = (QVariant**)malloc(params_ret.len * sizeof(QVariant*));
    if (params_ret.values == NULL) {
        free(params_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_texttospeech_set_engine2\n");
        abort();
    }
    const char** params_karr = (const char**)params.keys;
    libqt_string* params_kdest = (libqt_string*)params_ret.keys;
    QVariant** params_varr = (QVariant**)params.values;
    QVariant** params_vdest = (QVariant**)params_ret.values;
    for (size_t i = 0; i < params_ret.len; ++i) {
        params_kdest[i] = qstring(params_karr[i]);
        params_vdest[i] = params_varr[i];
    }
    bool _out = QTextToSpeech_SetEngine2((QTextToSpeech*)self, qstring(engine), params_ret);
    free(params_ret.keys);
    free(params_ret.values);
    return _out;
}

void q_texttospeech_stop1(void* self, int32_t boundaryHint) {
    QTextToSpeech_Stop1((QTextToSpeech*)self, boundaryHint);
}

void q_texttospeech_pause1(void* self, int32_t boundaryHint) {
    QTextToSpeech_Pause1((QTextToSpeech*)self, boundaryHint);
}

const char* q_texttospeech_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttospeech_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_texttospeech_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_texttospeech_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_texttospeech_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_texttospeech_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_texttospeech_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_texttospeech_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_texttospeech_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_texttospeech_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_texttospeech_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_texttospeech_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_texttospeech_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_texttospeech_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_texttospeech_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_texttospeech_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_texttospeech_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_texttospeech_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_texttospeech_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_texttospeech_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_texttospeech_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_texttospeech_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_texttospeech_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_texttospeech_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_texttospeech_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_texttospeech_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_texttospeech_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_texttospeech_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_texttospeech_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_texttospeech_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_texttospeech_dynamic_property_names\n");
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

QBindingStorage* q_texttospeech_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_texttospeech_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_texttospeech_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_texttospeech_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_texttospeech_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_texttospeech_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_texttospeech_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_texttospeech_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_texttospeech_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_texttospeech_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_texttospeech_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_texttospeech_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_texttospeech_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_texttospeech_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_texttospeech_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_texttospeech_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_texttospeech_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_texttospeech_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_texttospeech_event(void* self, void* event) {
    return QTextToSpeech_Event((QTextToSpeech*)self, (QEvent*)event);
}

bool q_texttospeech_super_event(void* self, void* event) {
    return QTextToSpeech_SuperEvent((QTextToSpeech*)self, (QEvent*)event);
}

void q_texttospeech_on_event(void* self, bool (*callback)(void*, void*)) {
    QTextToSpeech_OnEvent((QTextToSpeech*)self, (intptr_t)callback);
}

bool q_texttospeech_event_filter(void* self, void* watched, void* event) {
    return QTextToSpeech_EventFilter((QTextToSpeech*)self, (QObject*)watched, (QEvent*)event);
}

bool q_texttospeech_super_event_filter(void* self, void* watched, void* event) {
    return QTextToSpeech_SuperEventFilter((QTextToSpeech*)self, (QObject*)watched, (QEvent*)event);
}

void q_texttospeech_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTextToSpeech_OnEventFilter((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_timer_event(void* self, void* event) {
    QTextToSpeech_TimerEvent((QTextToSpeech*)self, (QTimerEvent*)event);
}

void q_texttospeech_super_timer_event(void* self, void* event) {
    QTextToSpeech_SuperTimerEvent((QTextToSpeech*)self, (QTimerEvent*)event);
}

void q_texttospeech_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_OnTimerEvent((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_child_event(void* self, void* event) {
    QTextToSpeech_ChildEvent((QTextToSpeech*)self, (QChildEvent*)event);
}

void q_texttospeech_super_child_event(void* self, void* event) {
    QTextToSpeech_SuperChildEvent((QTextToSpeech*)self, (QChildEvent*)event);
}

void q_texttospeech_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_OnChildEvent((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_custom_event(void* self, void* event) {
    QTextToSpeech_CustomEvent((QTextToSpeech*)self, (QEvent*)event);
}

void q_texttospeech_super_custom_event(void* self, void* event) {
    QTextToSpeech_SuperCustomEvent((QTextToSpeech*)self, (QEvent*)event);
}

void q_texttospeech_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_OnCustomEvent((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_connect_notify(void* self, void* signal) {
    QTextToSpeech_ConnectNotify((QTextToSpeech*)self, (QMetaMethod*)signal);
}

void q_texttospeech_super_connect_notify(void* self, void* signal) {
    QTextToSpeech_SuperConnectNotify((QTextToSpeech*)self, (QMetaMethod*)signal);
}

void q_texttospeech_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_OnConnectNotify((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_disconnect_notify(void* self, void* signal) {
    QTextToSpeech_DisconnectNotify((QTextToSpeech*)self, (QMetaMethod*)signal);
}

void q_texttospeech_super_disconnect_notify(void* self, void* signal) {
    QTextToSpeech_SuperDisconnectNotify((QTextToSpeech*)self, (QMetaMethod*)signal);
}

void q_texttospeech_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTextToSpeech_OnDisconnectNotify((QTextToSpeech*)self, (intptr_t)callback);
}

QObject* q_texttospeech_sender(void* self) {
    return QTextToSpeech_Sender((QTextToSpeech*)self);
}

QObject* q_texttospeech_super_sender(void* self) {
    return QTextToSpeech_SuperSender((QTextToSpeech*)self);
}

void q_texttospeech_on_sender(void* self, QObject* (*callback)()) {
    QTextToSpeech_OnSender((QTextToSpeech*)self, (intptr_t)callback);
}

int32_t q_texttospeech_sender_signal_index(void* self) {
    return QTextToSpeech_SenderSignalIndex((QTextToSpeech*)self);
}

int32_t q_texttospeech_super_sender_signal_index(void* self) {
    return QTextToSpeech_SuperSenderSignalIndex((QTextToSpeech*)self);
}

void q_texttospeech_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTextToSpeech_OnSenderSignalIndex((QTextToSpeech*)self, (intptr_t)callback);
}

int32_t q_texttospeech_receivers(void* self, const char* signal) {
    return QTextToSpeech_Receivers((QTextToSpeech*)self, signal);
}

int32_t q_texttospeech_super_receivers(void* self, const char* signal) {
    return QTextToSpeech_SuperReceivers((QTextToSpeech*)self, signal);
}

void q_texttospeech_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTextToSpeech_OnReceivers((QTextToSpeech*)self, (intptr_t)callback);
}

bool q_texttospeech_is_signal_connected(void* self, void* signal) {
    return QTextToSpeech_IsSignalConnected((QTextToSpeech*)self, (QMetaMethod*)signal);
}

bool q_texttospeech_super_is_signal_connected(void* self, void* signal) {
    return QTextToSpeech_SuperIsSignalConnected((QTextToSpeech*)self, (QMetaMethod*)signal);
}

void q_texttospeech_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTextToSpeech_OnIsSignalConnected((QTextToSpeech*)self, (intptr_t)callback);
}

void q_texttospeech_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_texttospeech_delete(void* self) {
    QTextToSpeech_Delete((QTextToSpeech*)(self));
}
