#include "../multimedia/libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqvoice.hpp"
#include "libqtexttospeechengine.hpp"
#include "libqtexttospeechengine.h"

QTextToSpeechEngine* q_texttospeechengine_new() {
    return QTextToSpeechEngine_New();
}

QTextToSpeechEngine* q_texttospeechengine_new2(void* parent) {
    return QTextToSpeechEngine_New2((QObject*)parent);
}

const QMetaObject* q_texttospeechengine_meta_object(const void* self) {
    return QTextToSpeechEngine_MetaObject((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QTextToSpeechEngine_OnMetaObject((QTextToSpeechEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_texttospeechengine_super_meta_object(const void* self) {
    return QTextToSpeechEngine_SuperMetaObject((QTextToSpeechEngine*)self);
}

void* q_texttospeechengine_metacast(void* self, const char* param1) {
    return QTextToSpeechEngine_Metacast((QTextToSpeechEngine*)self, param1);
}

void q_texttospeechengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTextToSpeechEngine_OnMetacast((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void* q_texttospeechengine_super_metacast(void* self, const char* param1) {
    return QTextToSpeechEngine_SuperMetacast((QTextToSpeechEngine*)self, param1);
}

int32_t q_texttospeechengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextToSpeechEngine_Metacall((QTextToSpeechEngine*)self, param1, param2, param3);
}

void q_texttospeechengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTextToSpeechEngine_OnMetacall((QTextToSpeechEngine*)self, (intptr_t)callback);
}

int32_t q_texttospeechengine_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextToSpeechEngine_SuperMetacall((QTextToSpeechEngine*)self, param1, param2, param3);
}

const char* q_texttospeechengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_texttospeechengine_capabilities(const void* self) {
    return QTextToSpeechEngine_Capabilities((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_capabilities(const void* self, int32_t (*callback)(const void*)) {
    QTextToSpeechEngine_OnCapabilities((QTextToSpeechEngine*)self, (intptr_t)callback);
}

int32_t q_texttospeechengine_super_capabilities(const void* self) {
    return QTextToSpeechEngine_SuperCapabilities((QTextToSpeechEngine*)self);
}

libqt_list /* of QLocale* */ q_texttospeechengine_available_locales(const void* self) {
    libqt_list _arr = QTextToSpeechEngine_AvailableLocales((QTextToSpeechEngine*)self);
    return _arr;
}

void q_texttospeechengine_on_available_locales(const void* self, libqt_list /* of QLocale* */ (*callback)(const void*)) {
    QTextToSpeechEngine_OnAvailableLocales((QTextToSpeechEngine*)self, (intptr_t)callback);
}

libqt_list /* of QVoice* */ q_texttospeechengine_available_voices(const void* self) {
    libqt_list _arr = QTextToSpeechEngine_AvailableVoices((QTextToSpeechEngine*)self);
    return _arr;
}

void q_texttospeechengine_on_available_voices(const void* self, libqt_list /* of QVoice* */ (*callback)(const void*)) {
    QTextToSpeechEngine_OnAvailableVoices((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_say(void* self, const char* text) {
    QTextToSpeechEngine_Say((QTextToSpeechEngine*)self, qstring(text));
}

void q_texttospeechengine_on_say(void* self, void (*callback)(void*, const char*)) {
    QTextToSpeechEngine_OnSay((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_synthesize(void* self, const char* text) {
    QTextToSpeechEngine_Synthesize((QTextToSpeechEngine*)self, qstring(text));
}

void q_texttospeechengine_on_synthesize(void* self, void (*callback)(void*, const char*)) {
    QTextToSpeechEngine_OnSynthesize((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_stop(void* self, int32_t boundaryHint) {
    QTextToSpeechEngine_Stop((QTextToSpeechEngine*)self, boundaryHint);
}

void q_texttospeechengine_on_stop(void* self, void (*callback)(void*, int32_t)) {
    QTextToSpeechEngine_OnStop((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_pause(void* self, int32_t boundaryHint) {
    QTextToSpeechEngine_Pause((QTextToSpeechEngine*)self, boundaryHint);
}

void q_texttospeechengine_on_pause(void* self, void (*callback)(void*, int32_t)) {
    QTextToSpeechEngine_OnPause((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_resume(void* self) {
    QTextToSpeechEngine_Resume((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_resume(void* self, void (*callback)(void*)) {
    QTextToSpeechEngine_OnResume((QTextToSpeechEngine*)self, (intptr_t)callback);
}

double q_texttospeechengine_rate(const void* self) {
    return QTextToSpeechEngine_Rate((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_rate(const void* self, double (*callback)(const void*)) {
    QTextToSpeechEngine_OnRate((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_set_rate(void* self, double rate) {
    return QTextToSpeechEngine_SetRate((QTextToSpeechEngine*)self, rate);
}

void q_texttospeechengine_on_set_rate(void* self, bool (*callback)(void*, double)) {
    QTextToSpeechEngine_OnSetRate((QTextToSpeechEngine*)self, (intptr_t)callback);
}

double q_texttospeechengine_pitch(const void* self) {
    return QTextToSpeechEngine_Pitch((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_pitch(const void* self, double (*callback)(const void*)) {
    QTextToSpeechEngine_OnPitch((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_set_pitch(void* self, double pitch) {
    return QTextToSpeechEngine_SetPitch((QTextToSpeechEngine*)self, pitch);
}

void q_texttospeechengine_on_set_pitch(void* self, bool (*callback)(void*, double)) {
    QTextToSpeechEngine_OnSetPitch((QTextToSpeechEngine*)self, (intptr_t)callback);
}

QLocale* q_texttospeechengine_locale(const void* self) {
    return QTextToSpeechEngine_Locale((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_locale(const void* self, QLocale* (*callback)(const void*)) {
    QTextToSpeechEngine_OnLocale((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_set_locale(void* self, const void* locale) {
    return QTextToSpeechEngine_SetLocale((QTextToSpeechEngine*)self, (QLocale*)locale);
}

void q_texttospeechengine_on_set_locale(void* self, bool (*callback)(void*, const void*)) {
    QTextToSpeechEngine_OnSetLocale((QTextToSpeechEngine*)self, (intptr_t)callback);
}

double q_texttospeechengine_volume(const void* self) {
    return QTextToSpeechEngine_Volume((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_volume(const void* self, double (*callback)(const void*)) {
    QTextToSpeechEngine_OnVolume((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_set_volume(void* self, double volume) {
    return QTextToSpeechEngine_SetVolume((QTextToSpeechEngine*)self, volume);
}

void q_texttospeechengine_on_set_volume(void* self, bool (*callback)(void*, double)) {
    QTextToSpeechEngine_OnSetVolume((QTextToSpeechEngine*)self, (intptr_t)callback);
}

QVoice* q_texttospeechengine_voice(const void* self) {
    return QTextToSpeechEngine_Voice((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_voice(const void* self, QVoice* (*callback)(const void*)) {
    QTextToSpeechEngine_OnVoice((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_set_voice(void* self, const void* voice) {
    return QTextToSpeechEngine_SetVoice((QTextToSpeechEngine*)self, (QVoice*)voice);
}

void q_texttospeechengine_on_set_voice(void* self, bool (*callback)(void*, const void*)) {
    QTextToSpeechEngine_OnSetVoice((QTextToSpeechEngine*)self, (intptr_t)callback);
}

int32_t q_texttospeechengine_state(const void* self) {
    return QTextToSpeechEngine_State((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_state(const void* self, int32_t (*callback)(const void*)) {
    QTextToSpeechEngine_OnState((QTextToSpeechEngine*)self, (intptr_t)callback);
}

int32_t q_texttospeechengine_error_reason(const void* self) {
    return QTextToSpeechEngine_ErrorReason((QTextToSpeechEngine*)self);
}

void q_texttospeechengine_on_error_reason(const void* self, int32_t (*callback)(const void*)) {
    QTextToSpeechEngine_OnErrorReason((QTextToSpeechEngine*)self, (intptr_t)callback);
}

const char* q_texttospeechengine_error_string(const void* self) {
    libqt_string _str = QTextToSpeechEngine_ErrorString((QTextToSpeechEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttospeechengine_on_error_string(const void* self, const char* (*callback)(const void*)) {
    QTextToSpeechEngine_OnErrorString((QTextToSpeechEngine*)self, (intptr_t)callback);
}

QVoice* q_texttospeechengine_create_voice(void* self, const char* name, const void* locale, int32_t gender, int32_t age, const void* data) {
    return QTextToSpeechEngine_CreateVoice((QTextToSpeechEngine*)self, qstring(name), (QLocale*)locale, gender, age, (QVariant*)data);
}

QVariant* q_texttospeechengine_voice_data(void* self, const void* voice) {
    return QTextToSpeechEngine_VoiceData((QTextToSpeechEngine*)self, (QVoice*)voice);
}

void q_texttospeechengine_state_changed(void* self, int32_t state) {
    QTextToSpeechEngine_StateChanged((QTextToSpeechEngine*)self, state);
}

void q_texttospeechengine_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QTextToSpeechEngine_Connect_StateChanged((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_error_occurred(void* self, int32_t error, const char* errorString) {
    QTextToSpeechEngine_ErrorOccurred((QTextToSpeechEngine*)self, error, qstring(errorString));
}

void q_texttospeechengine_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*)) {
    QTextToSpeechEngine_Connect_ErrorOccurred((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_saying_word(void* self, const char* word, intptr_t start, intptr_t length) {
    QTextToSpeechEngine_SayingWord((QTextToSpeechEngine*)self, qstring(word), start, length);
}

void q_texttospeechengine_on_saying_word(void* self, void (*callback)(void*, const char*, intptr_t, intptr_t)) {
    QTextToSpeechEngine_Connect_SayingWord((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_synthesized(void* self, const void* format, char* data) {
    QTextToSpeechEngine_Synthesized((QTextToSpeechEngine*)self, (QAudioFormat*)format, qstring(data));
}

void q_texttospeechengine_on_synthesized(void* self, void (*callback)(void*, const void*, libqt_string)) {
    QTextToSpeechEngine_Connect_Synthesized((QTextToSpeechEngine*)self, (intptr_t)callback);
}

const char* q_texttospeechengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_texttospeechengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_texttospeechengine_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttospeechengine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_texttospeechengine_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_texttospeechengine_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_texttospeechengine_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_texttospeechengine_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_texttospeechengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_texttospeechengine_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_texttospeechengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_texttospeechengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_texttospeechengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_texttospeechengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_texttospeechengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_texttospeechengine_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_texttospeechengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_texttospeechengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_texttospeechengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_texttospeechengine_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_texttospeechengine_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_texttospeechengine_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_texttospeechengine_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_texttospeechengine_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_texttospeechengine_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_texttospeechengine_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_texttospeechengine_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_texttospeechengine_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_texttospeechengine_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_texttospeechengine_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_texttospeechengine_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_texttospeechengine_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_texttospeechengine_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_texttospeechengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_texttospeechengine_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_texttospeechengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_texttospeechengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_texttospeechengine_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_texttospeechengine_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_texttospeechengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_texttospeechengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_texttospeechengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_texttospeechengine_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_texttospeechengine_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_texttospeechengine_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_texttospeechengine_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_texttospeechengine_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_texttospeechengine_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_texttospeechengine_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_texttospeechengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_texttospeechengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_texttospeechengine_event(void* self, void* event) {
    return QTextToSpeechEngine_Event((QTextToSpeechEngine*)self, (QEvent*)event);
}

bool q_texttospeechengine_super_event(void* self, void* event) {
    return QTextToSpeechEngine_SuperEvent((QTextToSpeechEngine*)self, (QEvent*)event);
}

void q_texttospeechengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QTextToSpeechEngine_OnEvent((QTextToSpeechEngine*)self, (intptr_t)callback);
}

bool q_texttospeechengine_event_filter(void* self, void* watched, void* event) {
    return QTextToSpeechEngine_EventFilter((QTextToSpeechEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_texttospeechengine_super_event_filter(void* self, void* watched, void* event) {
    return QTextToSpeechEngine_SuperEventFilter((QTextToSpeechEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_texttospeechengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTextToSpeechEngine_OnEventFilter((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_timer_event(void* self, void* event) {
    QTextToSpeechEngine_TimerEvent((QTextToSpeechEngine*)self, (QTimerEvent*)event);
}

void q_texttospeechengine_super_timer_event(void* self, void* event) {
    QTextToSpeechEngine_SuperTimerEvent((QTextToSpeechEngine*)self, (QTimerEvent*)event);
}

void q_texttospeechengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeechEngine_OnTimerEvent((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_child_event(void* self, void* event) {
    QTextToSpeechEngine_ChildEvent((QTextToSpeechEngine*)self, (QChildEvent*)event);
}

void q_texttospeechengine_super_child_event(void* self, void* event) {
    QTextToSpeechEngine_SuperChildEvent((QTextToSpeechEngine*)self, (QChildEvent*)event);
}

void q_texttospeechengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeechEngine_OnChildEvent((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_custom_event(void* self, void* event) {
    QTextToSpeechEngine_CustomEvent((QTextToSpeechEngine*)self, (QEvent*)event);
}

void q_texttospeechengine_super_custom_event(void* self, void* event) {
    QTextToSpeechEngine_SuperCustomEvent((QTextToSpeechEngine*)self, (QEvent*)event);
}

void q_texttospeechengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTextToSpeechEngine_OnCustomEvent((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_connect_notify(void* self, const void* signal) {
    QTextToSpeechEngine_ConnectNotify((QTextToSpeechEngine*)self, (QMetaMethod*)signal);
}

void q_texttospeechengine_super_connect_notify(void* self, const void* signal) {
    QTextToSpeechEngine_SuperConnectNotify((QTextToSpeechEngine*)self, (QMetaMethod*)signal);
}

void q_texttospeechengine_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QTextToSpeechEngine_OnConnectNotify((QTextToSpeechEngine*)self, (intptr_t)callback);
}

void q_texttospeechengine_disconnect_notify(void* self, const void* signal) {
    QTextToSpeechEngine_DisconnectNotify((QTextToSpeechEngine*)self, (QMetaMethod*)signal);
}

void q_texttospeechengine_super_disconnect_notify(void* self, const void* signal) {
    QTextToSpeechEngine_SuperDisconnectNotify((QTextToSpeechEngine*)self, (QMetaMethod*)signal);
}

void q_texttospeechengine_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QTextToSpeechEngine_OnDisconnectNotify((QTextToSpeechEngine*)self, (intptr_t)callback);
}

QObject* q_texttospeechengine_sender(const void* self) {
    return QTextToSpeechEngine_Sender((QTextToSpeechEngine*)self);
}

int32_t q_texttospeechengine_sender_signal_index(const void* self) {
    return QTextToSpeechEngine_SenderSignalIndex((QTextToSpeechEngine*)self);
}

int32_t q_texttospeechengine_receivers(const void* self, const char* signal) {
    return QTextToSpeechEngine_Receivers((QTextToSpeechEngine*)self, signal);
}

bool q_texttospeechengine_is_signal_connected(const void* self, const void* signal) {
    return QTextToSpeechEngine_IsSignalConnected((QTextToSpeechEngine*)self, (QMetaMethod*)signal);
}

void q_texttospeechengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_texttospeechengine_delete(void* self) {
    QTextToSpeechEngine_Delete((QTextToSpeechEngine*)(self));
}
