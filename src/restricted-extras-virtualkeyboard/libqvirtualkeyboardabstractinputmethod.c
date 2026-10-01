#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqvirtualkeyboardinputcontext.hpp"
#include "libqvirtualkeyboardinputengine.hpp"
#include "libqvirtualkeyboardtrace.hpp"
#include "libqvirtualkeyboardabstractinputmethod.hpp"
#include "libqvirtualkeyboardabstractinputmethod.h"

QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardabstractinputmethod_new() {
    return QVirtualKeyboardAbstractInputMethod_New();
}

QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardabstractinputmethod_new2(void* parent) {
    return QVirtualKeyboardAbstractInputMethod_New2((QObject*)parent);
}

const QMetaObject* q_virtualkeyboardabstractinputmethod_meta_object(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_MetaObject((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QVirtualKeyboardAbstractInputMethod_OnMetaObject((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

const QMetaObject* q_virtualkeyboardabstractinputmethod_super_meta_object(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_SuperMetaObject((QVirtualKeyboardAbstractInputMethod*)self);
}

void* q_virtualkeyboardabstractinputmethod_metacast(void* self, const char* param1) {
    return QVirtualKeyboardAbstractInputMethod_Metacast((QVirtualKeyboardAbstractInputMethod*)self, param1);
}

void q_virtualkeyboardabstractinputmethod_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVirtualKeyboardAbstractInputMethod_OnMetacast((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void* q_virtualkeyboardabstractinputmethod_super_metacast(void* self, const char* param1) {
    return QVirtualKeyboardAbstractInputMethod_SuperMetacast((QVirtualKeyboardAbstractInputMethod*)self, param1);
}

int32_t q_virtualkeyboardabstractinputmethod_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardAbstractInputMethod_Metacall((QVirtualKeyboardAbstractInputMethod*)self, param1, param2, param3);
}

void q_virtualkeyboardabstractinputmethod_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnMetacall((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardabstractinputmethod_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardAbstractInputMethod_SuperMetacall((QVirtualKeyboardAbstractInputMethod*)self, param1, param2, param3);
}

const char* q_virtualkeyboardabstractinputmethod_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVirtualKeyboardInputContext* q_virtualkeyboardabstractinputmethod_input_context(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_InputContext((QVirtualKeyboardAbstractInputMethod*)self);
}

QVirtualKeyboardInputEngine* q_virtualkeyboardabstractinputmethod_input_engine(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_InputEngine((QVirtualKeyboardAbstractInputMethod*)self);
}

libqt_list /* of enum QVirtualKeyboardInputEngine__InputMode */ q_virtualkeyboardabstractinputmethod_input_modes(void* self, const char* locale) {
    libqt_list _arr = QVirtualKeyboardAbstractInputMethod_InputModes((QVirtualKeyboardAbstractInputMethod*)self, qstring(locale));
    return _arr;
}

void q_virtualkeyboardabstractinputmethod_on_input_modes(void* self, libqt_list /* of enum QVirtualKeyboardInputEngine__InputMode */ (*callback)(void*, const char*)) {
    QVirtualKeyboardAbstractInputMethod_OnInputModes((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_set_input_mode(void* self, const char* locale, int32_t inputMode) {
    return QVirtualKeyboardAbstractInputMethod_SetInputMode((QVirtualKeyboardAbstractInputMethod*)self, qstring(locale), inputMode);
}

void q_virtualkeyboardabstractinputmethod_on_set_input_mode(void* self, bool (*callback)(void*, const char*, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_OnSetInputMode((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_set_text_case(void* self, int32_t textCase) {
    return QVirtualKeyboardAbstractInputMethod_SetTextCase((QVirtualKeyboardAbstractInputMethod*)self, textCase);
}

void q_virtualkeyboardabstractinputmethod_on_set_text_case(void* self, bool (*callback)(void*, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_OnSetTextCase((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_key_event(void* self, int32_t key, const char* text, int32_t modifiers) {
    return QVirtualKeyboardAbstractInputMethod_KeyEvent((QVirtualKeyboardAbstractInputMethod*)self, key, qstring(text), modifiers);
}

void q_virtualkeyboardabstractinputmethod_on_key_event(void* self, bool (*callback)(void*, int32_t, const char*, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_OnKeyEvent((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

libqt_list /* of enum QVirtualKeyboardSelectionListModel__Type */ q_virtualkeyboardabstractinputmethod_selection_lists(void* self) {
    libqt_list _arr = QVirtualKeyboardAbstractInputMethod_SelectionLists((QVirtualKeyboardAbstractInputMethod*)self);
    return _arr;
}

void q_virtualkeyboardabstractinputmethod_on_selection_lists(void* self, libqt_list /* of enum QVirtualKeyboardSelectionListModel__Type */ (*callback)(void*)) {
    QVirtualKeyboardAbstractInputMethod_OnSelectionLists((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

libqt_list /* of enum QVirtualKeyboardSelectionListModel__Type */ q_virtualkeyboardabstractinputmethod_super_selection_lists(void* self) {
    libqt_list _arr = QVirtualKeyboardAbstractInputMethod_SuperSelectionLists((QVirtualKeyboardAbstractInputMethod*)self);
    return _arr;
}

int32_t q_virtualkeyboardabstractinputmethod_selection_list_item_count(void* self, int32_t type) {
    return QVirtualKeyboardAbstractInputMethod_SelectionListItemCount((QVirtualKeyboardAbstractInputMethod*)self, type);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_item_count(void* self, int32_t (*callback)(void*, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_OnSelectionListItemCount((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardabstractinputmethod_super_selection_list_item_count(void* self, int32_t type) {
    return QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemCount((QVirtualKeyboardAbstractInputMethod*)self, type);
}

QVariant* q_virtualkeyboardabstractinputmethod_selection_list_data(void* self, int32_t type, int index, int32_t role) {
    return QVirtualKeyboardAbstractInputMethod_SelectionListData((QVirtualKeyboardAbstractInputMethod*)self, type, index, role);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_data(void* self, QVariant* (*callback)(void*, int32_t, int, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_OnSelectionListData((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

QVariant* q_virtualkeyboardabstractinputmethod_super_selection_list_data(void* self, int32_t type, int index, int32_t role) {
    return QVirtualKeyboardAbstractInputMethod_SuperSelectionListData((QVirtualKeyboardAbstractInputMethod*)self, type, index, role);
}

void q_virtualkeyboardabstractinputmethod_selection_list_item_selected(void* self, int32_t type, int index) {
    QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected((QVirtualKeyboardAbstractInputMethod*)self, type, index);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_item_selected(void* self, void (*callback)(void*, int32_t, int)) {
    QVirtualKeyboardAbstractInputMethod_OnSelectionListItemSelected((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_super_selection_list_item_selected(void* self, int32_t type, int index) {
    QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemSelected((QVirtualKeyboardAbstractInputMethod*)self, type, index);
}

bool q_virtualkeyboardabstractinputmethod_selection_list_remove_item(void* self, int32_t type, int index) {
    return QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem((QVirtualKeyboardAbstractInputMethod*)self, type, index);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_remove_item(void* self, bool (*callback)(void*, int32_t, int)) {
    QVirtualKeyboardAbstractInputMethod_OnSelectionListRemoveItem((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_super_selection_list_remove_item(void* self, int32_t type, int index) {
    return QVirtualKeyboardAbstractInputMethod_SuperSelectionListRemoveItem((QVirtualKeyboardAbstractInputMethod*)self, type, index);
}

libqt_list /* of enum QVirtualKeyboardInputEngine__PatternRecognitionMode */ q_virtualkeyboardabstractinputmethod_pattern_recognition_modes(const void* self) {
    libqt_list _arr = QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes((QVirtualKeyboardAbstractInputMethod*)self);
    return _arr;
}

void q_virtualkeyboardabstractinputmethod_on_pattern_recognition_modes(const void* self, libqt_list /* of enum QVirtualKeyboardInputEngine__PatternRecognitionMode */ (*callback)(const void*)) {
    QVirtualKeyboardAbstractInputMethod_OnPatternRecognitionModes((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

libqt_list /* of enum QVirtualKeyboardInputEngine__PatternRecognitionMode */ q_virtualkeyboardabstractinputmethod_super_pattern_recognition_modes(const void* self) {
    libqt_list _arr = QVirtualKeyboardAbstractInputMethod_SuperPatternRecognitionModes((QVirtualKeyboardAbstractInputMethod*)self);
    return _arr;
}

QVirtualKeyboardTrace* q_virtualkeyboardabstractinputmethod_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map /* of const char* to QVariant* */ traceCaptureDeviceInfo, libqt_map /* of const char* to QVariant* */ traceScreenInfo) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map traceCaptureDeviceInfo_ret;
    traceCaptureDeviceInfo_ret.len = traceCaptureDeviceInfo.len;
    traceCaptureDeviceInfo_ret.keys = (libqt_string*)malloc(traceCaptureDeviceInfo_ret.len * sizeof(libqt_string));
    if (traceCaptureDeviceInfo_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardabstractinputmethod_trace_begin\n");
        abort();
    }
    traceCaptureDeviceInfo_ret.values = (QVariant**)malloc(traceCaptureDeviceInfo_ret.len * sizeof(QVariant*));
    if (traceCaptureDeviceInfo_ret.values == NULL) {
        free(traceCaptureDeviceInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardabstractinputmethod_trace_begin\n");
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
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardabstractinputmethod_trace_begin\n");
        abort();
    }
    traceScreenInfo_ret.values = (QVariant**)malloc(traceScreenInfo_ret.len * sizeof(QVariant*));
    if (traceScreenInfo_ret.values == NULL) {
        free(traceScreenInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardabstractinputmethod_trace_begin\n");
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
    QVirtualKeyboardTrace* _out = QVirtualKeyboardAbstractInputMethod_TraceBegin((QVirtualKeyboardAbstractInputMethod*)self, traceId, patternRecognitionMode, traceCaptureDeviceInfo_ret, traceScreenInfo_ret);
    free(traceCaptureDeviceInfo_ret.keys);
    free(traceCaptureDeviceInfo_ret.values);
    free(traceScreenInfo_ret.keys);
    free(traceScreenInfo_ret.values);
    return _out;
}

void q_virtualkeyboardabstractinputmethod_on_trace_begin(void* self, QVirtualKeyboardTrace* (*callback)(void*, int, int32_t, libqt_map /* of const char* to QVariant* */, libqt_map /* of const char* to QVariant* */)) {
    QVirtualKeyboardAbstractInputMethod_OnTraceBegin((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

QVirtualKeyboardTrace* q_virtualkeyboardabstractinputmethod_super_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map /* of const char* to QVariant* */ traceCaptureDeviceInfo, libqt_map /* of const char* to QVariant* */ traceScreenInfo) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map traceCaptureDeviceInfo_ret;
    traceCaptureDeviceInfo_ret.len = traceCaptureDeviceInfo.len;
    traceCaptureDeviceInfo_ret.keys = (libqt_string*)malloc(traceCaptureDeviceInfo_ret.len * sizeof(libqt_string));
    if (traceCaptureDeviceInfo_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardabstractinputmethod_trace_begin\n");
        abort();
    }
    traceCaptureDeviceInfo_ret.values = (QVariant**)malloc(traceCaptureDeviceInfo_ret.len * sizeof(QVariant*));
    if (traceCaptureDeviceInfo_ret.values == NULL) {
        free(traceCaptureDeviceInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardabstractinputmethod_trace_begin\n");
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
        fprintf(stderr, "Failed to allocate memory for map keys in q_virtualkeyboardabstractinputmethod_trace_begin\n");
        abort();
    }
    traceScreenInfo_ret.values = (QVariant**)malloc(traceScreenInfo_ret.len * sizeof(QVariant*));
    if (traceScreenInfo_ret.values == NULL) {
        free(traceScreenInfo_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_virtualkeyboardabstractinputmethod_trace_begin\n");
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
    return QVirtualKeyboardAbstractInputMethod_SuperTraceBegin((QVirtualKeyboardAbstractInputMethod*)self, traceId, patternRecognitionMode, traceCaptureDeviceInfo_ret, traceScreenInfo_ret);
}

bool q_virtualkeyboardabstractinputmethod_trace_end(void* self, void* trace) {
    return QVirtualKeyboardAbstractInputMethod_TraceEnd((QVirtualKeyboardAbstractInputMethod*)self, (QVirtualKeyboardTrace*)trace);
}

void q_virtualkeyboardabstractinputmethod_on_trace_end(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnTraceEnd((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_super_trace_end(void* self, void* trace) {
    return QVirtualKeyboardAbstractInputMethod_SuperTraceEnd((QVirtualKeyboardAbstractInputMethod*)self, (QVirtualKeyboardTrace*)trace);
}

bool q_virtualkeyboardabstractinputmethod_reselect(void* self, int cursorPosition, const int32_t* reselectFlags) {
    return QVirtualKeyboardAbstractInputMethod_Reselect((QVirtualKeyboardAbstractInputMethod*)self, cursorPosition, reselectFlags);
}

void q_virtualkeyboardabstractinputmethod_on_reselect(void* self, bool (*callback)(void*, int, const int32_t*)) {
    QVirtualKeyboardAbstractInputMethod_OnReselect((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_super_reselect(void* self, int cursorPosition, const int32_t* reselectFlags) {
    return QVirtualKeyboardAbstractInputMethod_SuperReselect((QVirtualKeyboardAbstractInputMethod*)self, cursorPosition, reselectFlags);
}

bool q_virtualkeyboardabstractinputmethod_click_preedit_text(void* self, int cursorPosition) {
    return QVirtualKeyboardAbstractInputMethod_ClickPreeditText((QVirtualKeyboardAbstractInputMethod*)self, cursorPosition);
}

void q_virtualkeyboardabstractinputmethod_on_click_preedit_text(void* self, bool (*callback)(void*, int)) {
    QVirtualKeyboardAbstractInputMethod_OnClickPreeditText((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_super_click_preedit_text(void* self, int cursorPosition) {
    return QVirtualKeyboardAbstractInputMethod_SuperClickPreeditText((QVirtualKeyboardAbstractInputMethod*)self, cursorPosition);
}

void q_virtualkeyboardabstractinputmethod_selection_list_changed(void* self, int32_t type) {
    QVirtualKeyboardAbstractInputMethod_SelectionListChanged((QVirtualKeyboardAbstractInputMethod*)self, type);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_changed(void* self, void (*callback)(void*, int32_t)) {
    QVirtualKeyboardAbstractInputMethod_Connect_SelectionListChanged((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_selection_list_active_item_changed(void* self, int32_t type, int index) {
    QVirtualKeyboardAbstractInputMethod_SelectionListActiveItemChanged((QVirtualKeyboardAbstractInputMethod*)self, type, index);
}

void q_virtualkeyboardabstractinputmethod_on_selection_list_active_item_changed(void* self, void (*callback)(void*, int32_t, int)) {
    QVirtualKeyboardAbstractInputMethod_Connect_SelectionListActiveItemChanged((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_selection_lists_changed(void* self) {
    QVirtualKeyboardAbstractInputMethod_SelectionListsChanged((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_on_selection_lists_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardAbstractInputMethod_Connect_SelectionListsChanged((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_reset(void* self) {
    QVirtualKeyboardAbstractInputMethod_Reset((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_on_reset(void* self, void (*callback)(void*)) {
    QVirtualKeyboardAbstractInputMethod_OnReset((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_super_reset(void* self) {
    QVirtualKeyboardAbstractInputMethod_SuperReset((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_update(void* self) {
    QVirtualKeyboardAbstractInputMethod_Update((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_on_update(void* self, void (*callback)(void*)) {
    QVirtualKeyboardAbstractInputMethod_OnUpdate((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_super_update(void* self) {
    QVirtualKeyboardAbstractInputMethod_SuperUpdate((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_clear_input_mode(void* self) {
    QVirtualKeyboardAbstractInputMethod_ClearInputMode((QVirtualKeyboardAbstractInputMethod*)self);
}

void q_virtualkeyboardabstractinputmethod_on_clear_input_mode(void* self, void (*callback)(void*)) {
    QVirtualKeyboardAbstractInputMethod_OnClearInputMode((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_super_clear_input_mode(void* self) {
    QVirtualKeyboardAbstractInputMethod_SuperClearInputMode((QVirtualKeyboardAbstractInputMethod*)self);
}

const char* q_virtualkeyboardabstractinputmethod_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardabstractinputmethod_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardabstractinputmethod_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardabstractinputmethod_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboardabstractinputmethod_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboardabstractinputmethod_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboardabstractinputmethod_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboardabstractinputmethod_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboardabstractinputmethod_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboardabstractinputmethod_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboardabstractinputmethod_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboardabstractinputmethod_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboardabstractinputmethod_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboardabstractinputmethod_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboardabstractinputmethod_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardabstractinputmethod_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboardabstractinputmethod_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboardabstractinputmethod_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboardabstractinputmethod_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboardabstractinputmethod_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboardabstractinputmethod_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboardabstractinputmethod_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardabstractinputmethod_dynamic_property_names\n");
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

QBindingStorage* q_virtualkeyboardabstractinputmethod_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboardabstractinputmethod_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboardabstractinputmethod_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboardabstractinputmethod_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardabstractinputmethod_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboardabstractinputmethod_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboardabstractinputmethod_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboardabstractinputmethod_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboardabstractinputmethod_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboardabstractinputmethod_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboardabstractinputmethod_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboardabstractinputmethod_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardabstractinputmethod_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboardabstractinputmethod_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboardabstractinputmethod_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_event(void* self, void* event) {
    return QVirtualKeyboardAbstractInputMethod_Event((QVirtualKeyboardAbstractInputMethod*)self, (QEvent*)event);
}

bool q_virtualkeyboardabstractinputmethod_super_event(void* self, void* event) {
    return QVirtualKeyboardAbstractInputMethod_SuperEvent((QVirtualKeyboardAbstractInputMethod*)self, (QEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_on_event(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnEvent((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

bool q_virtualkeyboardabstractinputmethod_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardAbstractInputMethod_EventFilter((QVirtualKeyboardAbstractInputMethod*)self, (QObject*)watched, (QEvent*)event);
}

bool q_virtualkeyboardabstractinputmethod_super_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardAbstractInputMethod_SuperEventFilter((QVirtualKeyboardAbstractInputMethod*)self, (QObject*)watched, (QEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnEventFilter((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_timer_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_TimerEvent((QVirtualKeyboardAbstractInputMethod*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_super_timer_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_SuperTimerEvent((QVirtualKeyboardAbstractInputMethod*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnTimerEvent((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_child_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_ChildEvent((QVirtualKeyboardAbstractInputMethod*)self, (QChildEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_super_child_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_SuperChildEvent((QVirtualKeyboardAbstractInputMethod*)self, (QChildEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnChildEvent((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_custom_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_CustomEvent((QVirtualKeyboardAbstractInputMethod*)self, (QEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_super_custom_event(void* self, void* event) {
    QVirtualKeyboardAbstractInputMethod_SuperCustomEvent((QVirtualKeyboardAbstractInputMethod*)self, (QEvent*)event);
}

void q_virtualkeyboardabstractinputmethod_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardAbstractInputMethod_OnCustomEvent((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardAbstractInputMethod_ConnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardabstractinputmethod_super_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardAbstractInputMethod_SuperConnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardabstractinputmethod_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardAbstractInputMethod_OnConnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardAbstractInputMethod_DisconnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardabstractinputmethod_super_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardabstractinputmethod_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardAbstractInputMethod_OnDisconnectNotify((QVirtualKeyboardAbstractInputMethod*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardabstractinputmethod_sender(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_Sender((QVirtualKeyboardAbstractInputMethod*)self);
}

int32_t q_virtualkeyboardabstractinputmethod_sender_signal_index(const void* self) {
    return QVirtualKeyboardAbstractInputMethod_SenderSignalIndex((QVirtualKeyboardAbstractInputMethod*)self);
}

int32_t q_virtualkeyboardabstractinputmethod_receivers(const void* self, const char* signal) {
    return QVirtualKeyboardAbstractInputMethod_Receivers((QVirtualKeyboardAbstractInputMethod*)self, signal);
}

bool q_virtualkeyboardabstractinputmethod_is_signal_connected(const void* self, const void* signal) {
    return QVirtualKeyboardAbstractInputMethod_IsSignalConnected((QVirtualKeyboardAbstractInputMethod*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardabstractinputmethod_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardabstractinputmethod_delete(void* self) {
    QVirtualKeyboardAbstractInputMethod_Delete((QVirtualKeyboardAbstractInputMethod*)(self));
}
