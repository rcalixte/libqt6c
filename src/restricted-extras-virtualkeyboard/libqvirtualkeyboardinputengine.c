#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqcoreevent.hpp"
#include "../libqvariant.hpp"
#include "libqvirtualkeyboardabstractinputmethod.hpp"
#include "libqvirtualkeyboardinputcontext.hpp"
#include "libqvirtualkeyboardselectionlistmodel.hpp"
#include "libqvirtualkeyboardtrace.hpp"
#include "libqvirtualkeyboardinputengine.hpp"
#include "libqvirtualkeyboardinputengine.h"

const QMetaObject* q_virtualkeyboardinputengine_meta_object(void* self) {
    return QVirtualKeyboardInputEngine_MetaObject((QVirtualKeyboardInputEngine*)self);
}

void* q_virtualkeyboardinputengine_metacast(void* self, const char* param1) {
    return QVirtualKeyboardInputEngine_Metacast((QVirtualKeyboardInputEngine*)self, param1);
}

int32_t q_virtualkeyboardinputengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardInputEngine_Metacall((QVirtualKeyboardInputEngine*)self, param1, param2, param3);
}

const char* q_virtualkeyboardinputengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_virtualkeyboardinputengine_virtual_key_press(void* self, int32_t key, const char* text, int32_t modifiers, bool repeat) {
    return QVirtualKeyboardInputEngine_VirtualKeyPress((QVirtualKeyboardInputEngine*)self, key, qstring(text), modifiers, repeat);
}

void q_virtualkeyboardinputengine_virtual_key_cancel(void* self) {
    QVirtualKeyboardInputEngine_VirtualKeyCancel((QVirtualKeyboardInputEngine*)self);
}

bool q_virtualkeyboardinputengine_virtual_key_release(void* self, int32_t key, const char* text, int32_t modifiers) {
    return QVirtualKeyboardInputEngine_VirtualKeyRelease((QVirtualKeyboardInputEngine*)self, key, qstring(text), modifiers);
}

bool q_virtualkeyboardinputengine_virtual_key_click(void* self, int32_t key, const char* text, int32_t modifiers) {
    return QVirtualKeyboardInputEngine_VirtualKeyClick((QVirtualKeyboardInputEngine*)self, key, qstring(text), modifiers);
}

QVirtualKeyboardInputContext* q_virtualkeyboardinputengine_input_context(void* self) {
    return QVirtualKeyboardInputEngine_InputContext((QVirtualKeyboardInputEngine*)self);
}

int32_t q_virtualkeyboardinputengine_active_key(void* self) {
    return QVirtualKeyboardInputEngine_ActiveKey((QVirtualKeyboardInputEngine*)self);
}

int32_t q_virtualkeyboardinputengine_previous_key(void* self) {
    return QVirtualKeyboardInputEngine_PreviousKey((QVirtualKeyboardInputEngine*)self);
}

QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardinputengine_input_method(void* self) {
    return QVirtualKeyboardInputEngine_InputMethod((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_set_input_method(void* self, void* inputMethod) {
    QVirtualKeyboardInputEngine_SetInputMethod((QVirtualKeyboardInputEngine*)self, (QVirtualKeyboardAbstractInputMethod*)inputMethod);
}

libqt_list /* of int */ q_virtualkeyboardinputengine_input_modes(void* self) {
    libqt_list _arr = QVirtualKeyboardInputEngine_InputModes((QVirtualKeyboardInputEngine*)self);
    return _arr;
}

int32_t q_virtualkeyboardinputengine_input_mode(void* self) {
    return QVirtualKeyboardInputEngine_InputMode((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_set_input_mode(void* self, int32_t inputMode) {
    QVirtualKeyboardInputEngine_SetInputMode((QVirtualKeyboardInputEngine*)self, inputMode);
}

QVirtualKeyboardSelectionListModel* q_virtualkeyboardinputengine_word_candidate_list_model(void* self) {
    return QVirtualKeyboardInputEngine_WordCandidateListModel((QVirtualKeyboardInputEngine*)self);
}

bool q_virtualkeyboardinputengine_word_candidate_list_visible_hint(void* self) {
    return QVirtualKeyboardInputEngine_WordCandidateListVisibleHint((QVirtualKeyboardInputEngine*)self);
}

libqt_list /* of int */ q_virtualkeyboardinputengine_pattern_recognition_modes(void* self) {
    libqt_list _arr = QVirtualKeyboardInputEngine_PatternRecognitionModes((QVirtualKeyboardInputEngine*)self);
    return _arr;
}

QVirtualKeyboardTrace* q_virtualkeyboardinputengine_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map /* of const char* to QVariant* */ traceCaptureDeviceInfo, libqt_map /* of const char* to QVariant* */ traceScreenInfo) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map traceCaptureDeviceInfo_ret;
    traceCaptureDeviceInfo_ret.len = traceCaptureDeviceInfo.len;
    traceCaptureDeviceInfo_ret.keys = (libqt_string*)malloc(traceCaptureDeviceInfo_ret.len * sizeof(libqt_string));
    if (traceCaptureDeviceInfo_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardinputengine_trace_begin\n");
        abort();
    }
    traceCaptureDeviceInfo_ret.values = (QVariant**)malloc(traceCaptureDeviceInfo_ret.len * sizeof(QVariant*));
    if (traceCaptureDeviceInfo_ret.values == NULL) {
        free(traceCaptureDeviceInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardinputengine_trace_begin\n");
        abort();
    }
    const char** traceCaptureDeviceInfo_karr = (const char**)traceCaptureDeviceInfo.keys;
    libqt_string* traceCaptureDeviceInfo_kdest = (libqt_string*)traceCaptureDeviceInfo_ret.keys;
    QVariant** traceCaptureDeviceInfo_varr = (QVariant**)traceCaptureDeviceInfo.values;
    QVariant** traceCaptureDeviceInfo_vdest = (QVariant**)traceCaptureDeviceInfo_ret.values;
    for (size_t i = 0; i < traceCaptureDeviceInfo_ret.len; ++i) {
        traceCaptureDeviceInfo_kdest[i] = qstring(traceCaptureDeviceInfo_karr[i]);
        traceCaptureDeviceInfo_vdest[i] = traceCaptureDeviceInfo_varr[i];
    }
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map traceScreenInfo_ret;
    traceScreenInfo_ret.len = traceScreenInfo.len;
    traceScreenInfo_ret.keys = (libqt_string*)malloc(traceScreenInfo_ret.len * sizeof(libqt_string));
    if (traceScreenInfo_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardinputengine_trace_begin\n");
        abort();
    }
    traceScreenInfo_ret.values = (QVariant**)malloc(traceScreenInfo_ret.len * sizeof(QVariant*));
    if (traceScreenInfo_ret.values == NULL) {
        free(traceScreenInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardinputengine_trace_begin\n");
        abort();
    }
    const char** traceScreenInfo_karr = (const char**)traceScreenInfo.keys;
    libqt_string* traceScreenInfo_kdest = (libqt_string*)traceScreenInfo_ret.keys;
    QVariant** traceScreenInfo_varr = (QVariant**)traceScreenInfo.values;
    QVariant** traceScreenInfo_vdest = (QVariant**)traceScreenInfo_ret.values;
    for (size_t i = 0; i < traceScreenInfo_ret.len; ++i) {
        traceScreenInfo_kdest[i] = qstring(traceScreenInfo_karr[i]);
        traceScreenInfo_vdest[i] = traceScreenInfo_varr[i];
    }
    QVirtualKeyboardTrace* _out = QVirtualKeyboardInputEngine_TraceBegin((QVirtualKeyboardInputEngine*)self, traceId, patternRecognitionMode, traceCaptureDeviceInfo_ret, traceScreenInfo_ret);
    free(traceCaptureDeviceInfo_ret.keys);
    free(traceCaptureDeviceInfo_ret.values);
    free(traceScreenInfo_ret.keys);
    free(traceScreenInfo_ret.values);
    return _out;
}

bool q_virtualkeyboardinputengine_trace_end(void* self, void* trace) {
    return QVirtualKeyboardInputEngine_TraceEnd((QVirtualKeyboardInputEngine*)self, (QVirtualKeyboardTrace*)trace);
}

bool q_virtualkeyboardinputengine_reselect(void* self, int cursorPosition, const int32_t* reselectFlags) {
    return QVirtualKeyboardInputEngine_Reselect((QVirtualKeyboardInputEngine*)self, cursorPosition, reselectFlags);
}

bool q_virtualkeyboardinputengine_click_preedit_text(void* self, int cursorPosition) {
    return QVirtualKeyboardInputEngine_ClickPreeditText((QVirtualKeyboardInputEngine*)self, cursorPosition);
}

void q_virtualkeyboardinputengine_virtual_key_clicked(void* self, int32_t key, const char* text, int32_t modifiers, bool isAutoRepeat) {
    QVirtualKeyboardInputEngine_VirtualKeyClicked((QVirtualKeyboardInputEngine*)self, key, qstring(text), modifiers, isAutoRepeat);
}

void q_virtualkeyboardinputengine_on_virtual_key_clicked(void* self, void (*callback)(void*, int32_t, const char*, int32_t, bool)) {
    QVirtualKeyboardInputEngine_Connect_VirtualKeyClicked((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_active_key_changed(void* self, int32_t key) {
    QVirtualKeyboardInputEngine_ActiveKeyChanged((QVirtualKeyboardInputEngine*)self, key);
}

void q_virtualkeyboardinputengine_on_active_key_changed(void* self, void (*callback)(void*, int32_t)) {
    QVirtualKeyboardInputEngine_Connect_ActiveKeyChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_previous_key_changed(void* self, int32_t key) {
    QVirtualKeyboardInputEngine_PreviousKeyChanged((QVirtualKeyboardInputEngine*)self, key);
}

void q_virtualkeyboardinputengine_on_previous_key_changed(void* self, void (*callback)(void*, int32_t)) {
    QVirtualKeyboardInputEngine_Connect_PreviousKeyChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_input_method_changed(void* self) {
    QVirtualKeyboardInputEngine_InputMethodChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_input_method_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_InputMethodChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_input_method_reset(void* self) {
    QVirtualKeyboardInputEngine_InputMethodReset((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_input_method_reset(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_InputMethodReset((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_input_method_update(void* self) {
    QVirtualKeyboardInputEngine_InputMethodUpdate((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_input_method_update(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_InputMethodUpdate((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_input_modes_changed(void* self) {
    QVirtualKeyboardInputEngine_InputModesChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_input_modes_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_InputModesChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_input_mode_changed(void* self) {
    QVirtualKeyboardInputEngine_InputModeChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_input_mode_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_InputModeChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_pattern_recognition_modes_changed(void* self) {
    QVirtualKeyboardInputEngine_PatternRecognitionModesChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_pattern_recognition_modes_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_PatternRecognitionModesChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_word_candidate_list_model_changed(void* self) {
    QVirtualKeyboardInputEngine_WordCandidateListModelChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_word_candidate_list_model_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_WordCandidateListModelChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_word_candidate_list_visible_hint_changed(void* self) {
    QVirtualKeyboardInputEngine_WordCandidateListVisibleHintChanged((QVirtualKeyboardInputEngine*)self);
}

void q_virtualkeyboardinputengine_on_word_candidate_list_visible_hint_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputEngine_Connect_WordCandidateListVisibleHintChanged((QVirtualKeyboardInputEngine*)self, (intptr_t)callback);
}

const char* q_virtualkeyboardinputengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardinputengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_virtualkeyboardinputengine_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_virtualkeyboardinputengine_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_virtualkeyboardinputengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardinputengine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboardinputengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboardinputengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboardinputengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboardinputengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboardinputengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboardinputengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboardinputengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboardinputengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboardinputengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboardinputengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboardinputengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboardinputengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboardinputengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboardinputengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboardinputengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboardinputengine_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardinputengine_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboardinputengine_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboardinputengine_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboardinputengine_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboardinputengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboardinputengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboardinputengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboardinputengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboardinputengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardinputengine_dynamic_property_names\n");
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

QBindingStorage* q_virtualkeyboardinputengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboardinputengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboardinputengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboardinputengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardinputengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboardinputengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboardinputengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboardinputengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboardinputengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboardinputengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboardinputengine_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboardinputengine_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboardinputengine_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardinputengine_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboardinputengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboardinputengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputengine_delete(void* self) {
    QVirtualKeyboardInputEngine_Delete((QVirtualKeyboardInputEngine*)(self));
}

uint32_t q_qvirtualkeyboardinputengine_h_q_hash(int32_t key, uint32_t seed) {
    return qvirtualkeyboardinputengine_h_QHash(key, seed);
}
