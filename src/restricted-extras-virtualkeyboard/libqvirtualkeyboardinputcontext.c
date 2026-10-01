#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "libqvirtualkeyboardinputengine.hpp"
#include "libqvirtualkeyboardobserver.hpp"
#include "libqvirtualkeyboardinputcontext.hpp"
#include "libqvirtualkeyboardinputcontext.h"

QVirtualKeyboardInputContext* q_virtualkeyboardinputcontext_new() {
    return QVirtualKeyboardInputContext_New();
}

QVirtualKeyboardInputContext* q_virtualkeyboardinputcontext_new2(void* parent) {
    return QVirtualKeyboardInputContext_New2((QObject*)parent);
}

const QMetaObject* q_virtualkeyboardinputcontext_meta_object(const void* self) {
    return QVirtualKeyboardInputContext_MetaObject((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QVirtualKeyboardInputContext_OnMetaObject((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

const QMetaObject* q_virtualkeyboardinputcontext_super_meta_object(const void* self) {
    return QVirtualKeyboardInputContext_SuperMetaObject((QVirtualKeyboardInputContext*)self);
}

void* q_virtualkeyboardinputcontext_metacast(void* self, const char* param1) {
    return QVirtualKeyboardInputContext_Metacast((QVirtualKeyboardInputContext*)self, param1);
}

void q_virtualkeyboardinputcontext_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVirtualKeyboardInputContext_OnMetacast((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void* q_virtualkeyboardinputcontext_super_metacast(void* self, const char* param1) {
    return QVirtualKeyboardInputContext_SuperMetacast((QVirtualKeyboardInputContext*)self, param1);
}

int32_t q_virtualkeyboardinputcontext_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardInputContext_Metacall((QVirtualKeyboardInputContext*)self, param1, param2, param3);
}

void q_virtualkeyboardinputcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVirtualKeyboardInputContext_OnMetacall((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardinputcontext_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardInputContext_SuperMetacall((QVirtualKeyboardInputContext*)self, param1, param2, param3);
}

const char* q_virtualkeyboardinputcontext_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_virtualkeyboardinputcontext_is_shift_active(const void* self) {
    return QVirtualKeyboardInputContext_IsShiftActive((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_is_caps_lock_active(const void* self) {
    return QVirtualKeyboardInputContext_IsCapsLockActive((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_is_uppercase(const void* self) {
    return QVirtualKeyboardInputContext_IsUppercase((QVirtualKeyboardInputContext*)self);
}

int32_t q_virtualkeyboardinputcontext_anchor_position(const void* self) {
    return QVirtualKeyboardInputContext_AnchorPosition((QVirtualKeyboardInputContext*)self);
}

int32_t q_virtualkeyboardinputcontext_cursor_position(const void* self) {
    return QVirtualKeyboardInputContext_CursorPosition((QVirtualKeyboardInputContext*)self);
}

int32_t q_virtualkeyboardinputcontext_input_method_hints(const void* self) {
    return QVirtualKeyboardInputContext_InputMethodHints((QVirtualKeyboardInputContext*)self);
}

const char* q_virtualkeyboardinputcontext_preedit_text(const void* self) {
    libqt_string _str = QVirtualKeyboardInputContext_PreeditText((QVirtualKeyboardInputContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardinputcontext_set_preedit_text(void* self, const char* text) {
    QVirtualKeyboardInputContext_SetPreeditText((QVirtualKeyboardInputContext*)self, qstring(text));
}

libqt_list /* of QInputMethodEvent__Attribute* */ q_virtualkeyboardinputcontext_preedit_text_attributes(const void* self) {
    libqt_list _arr = QVirtualKeyboardInputContext_PreeditTextAttributes((QVirtualKeyboardInputContext*)self);
    return _arr;
}

const char* q_virtualkeyboardinputcontext_surrounding_text(const void* self) {
    libqt_string _str = QVirtualKeyboardInputContext_SurroundingText((QVirtualKeyboardInputContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardinputcontext_selected_text(const void* self) {
    libqt_string _str = QVirtualKeyboardInputContext_SelectedText((QVirtualKeyboardInputContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_virtualkeyboardinputcontext_anchor_rectangle(const void* self) {
    return QVirtualKeyboardInputContext_AnchorRectangle((QVirtualKeyboardInputContext*)self);
}

QRectF* q_virtualkeyboardinputcontext_cursor_rectangle(const void* self) {
    return QVirtualKeyboardInputContext_CursorRectangle((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_is_animating(const void* self) {
    return QVirtualKeyboardInputContext_IsAnimating((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_set_animating(void* self, bool isAnimating) {
    QVirtualKeyboardInputContext_SetAnimating((QVirtualKeyboardInputContext*)self, isAnimating);
}

const char* q_virtualkeyboardinputcontext_locale(const void* self) {
    libqt_string _str = QVirtualKeyboardInputContext_Locale((QVirtualKeyboardInputContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_virtualkeyboardinputcontext_input_item(const void* self) {
    return QVirtualKeyboardInputContext_InputItem((QVirtualKeyboardInputContext*)self);
}

QVirtualKeyboardInputEngine* q_virtualkeyboardinputcontext_input_engine(const void* self) {
    return QVirtualKeyboardInputContext_InputEngine((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_is_selection_control_visible(const void* self) {
    return QVirtualKeyboardInputContext_IsSelectionControlVisible((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_anchor_rect_intersects_clip_rect(const void* self) {
    return QVirtualKeyboardInputContext_AnchorRectIntersectsClipRect((QVirtualKeyboardInputContext*)self);
}

bool q_virtualkeyboardinputcontext_cursor_rect_intersects_clip_rect(const void* self) {
    return QVirtualKeyboardInputContext_CursorRectIntersectsClipRect((QVirtualKeyboardInputContext*)self);
}

QVirtualKeyboardObserver* q_virtualkeyboardinputcontext_keyboard_observer(const void* self) {
    return QVirtualKeyboardInputContext_KeyboardObserver((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_send_key_click(void* self, int key, const char* text) {
    QVirtualKeyboardInputContext_SendKeyClick((QVirtualKeyboardInputContext*)self, key, qstring(text));
}

void q_virtualkeyboardinputcontext_commit(void* self) {
    QVirtualKeyboardInputContext_Commit((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_commit2(void* self, const char* text) {
    QVirtualKeyboardInputContext_Commit2((QVirtualKeyboardInputContext*)self, qstring(text));
}

void q_virtualkeyboardinputcontext_clear(void* self) {
    QVirtualKeyboardInputContext_Clear((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_set_selection_on_focus_object(void* self, const void* anchorPos, const void* cursorPos) {
    QVirtualKeyboardInputContext_SetSelectionOnFocusObject((QVirtualKeyboardInputContext*)self, (QPointF*)anchorPos, (QPointF*)cursorPos);
}

void q_virtualkeyboardinputcontext_preedit_text_changed(void* self) {
    QVirtualKeyboardInputContext_PreeditTextChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_preedit_text_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_PreeditTextChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_input_method_hints_changed(void* self) {
    QVirtualKeyboardInputContext_InputMethodHintsChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_input_method_hints_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_InputMethodHintsChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_surrounding_text_changed(void* self) {
    QVirtualKeyboardInputContext_SurroundingTextChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_surrounding_text_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_SurroundingTextChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_selected_text_changed(void* self) {
    QVirtualKeyboardInputContext_SelectedTextChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_selected_text_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_SelectedTextChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_anchor_position_changed(void* self) {
    QVirtualKeyboardInputContext_AnchorPositionChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_anchor_position_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_AnchorPositionChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_cursor_position_changed(void* self) {
    QVirtualKeyboardInputContext_CursorPositionChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_CursorPositionChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_anchor_rectangle_changed(void* self) {
    QVirtualKeyboardInputContext_AnchorRectangleChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_anchor_rectangle_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_AnchorRectangleChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_cursor_rectangle_changed(void* self) {
    QVirtualKeyboardInputContext_CursorRectangleChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_cursor_rectangle_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_CursorRectangleChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_shift_active_changed(void* self) {
    QVirtualKeyboardInputContext_ShiftActiveChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_shift_active_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_ShiftActiveChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_caps_lock_active_changed(void* self) {
    QVirtualKeyboardInputContext_CapsLockActiveChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_caps_lock_active_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_CapsLockActiveChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_uppercase_changed(void* self) {
    QVirtualKeyboardInputContext_UppercaseChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_uppercase_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_UppercaseChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_animating_changed(void* self) {
    QVirtualKeyboardInputContext_AnimatingChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_animating_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_AnimatingChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_locale_changed(void* self) {
    QVirtualKeyboardInputContext_LocaleChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_locale_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_LocaleChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_input_item_changed(void* self) {
    QVirtualKeyboardInputContext_InputItemChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_input_item_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_InputItemChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_selection_control_visible_changed(void* self) {
    QVirtualKeyboardInputContext_SelectionControlVisibleChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_selection_control_visible_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_SelectionControlVisibleChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_anchor_rect_intersects_clip_rect_changed(void* self) {
    QVirtualKeyboardInputContext_AnchorRectIntersectsClipRectChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_anchor_rect_intersects_clip_rect_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_AnchorRectIntersectsClipRectChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_cursor_rect_intersects_clip_rect_changed(void* self) {
    QVirtualKeyboardInputContext_CursorRectIntersectsClipRectChanged((QVirtualKeyboardInputContext*)self);
}

void q_virtualkeyboardinputcontext_on_cursor_rect_intersects_clip_rect_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardInputContext_Connect_CursorRectIntersectsClipRectChanged((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

const char* q_virtualkeyboardinputcontext_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardinputcontext_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardinputcontext_set_preedit_text2(void* self, const char* text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes) {
    QVirtualKeyboardInputContext_SetPreeditText2((QVirtualKeyboardInputContext*)self, qstring(text), attributes);
}

void q_virtualkeyboardinputcontext_set_preedit_text3(void* self, const char* text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom) {
    QVirtualKeyboardInputContext_SetPreeditText3((QVirtualKeyboardInputContext*)self, qstring(text), attributes, replaceFrom);
}

void q_virtualkeyboardinputcontext_set_preedit_text4(void* self, const char* text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom, int replaceLength) {
    QVirtualKeyboardInputContext_SetPreeditText4((QVirtualKeyboardInputContext*)self, qstring(text), attributes, replaceFrom, replaceLength);
}

void q_virtualkeyboardinputcontext_send_key_click3(void* self, int key, const char* text, int modifiers) {
    QVirtualKeyboardInputContext_SendKeyClick3((QVirtualKeyboardInputContext*)self, key, qstring(text), modifiers);
}

void q_virtualkeyboardinputcontext_commit22(void* self, const char* text, int replaceFrom) {
    QVirtualKeyboardInputContext_Commit22((QVirtualKeyboardInputContext*)self, qstring(text), replaceFrom);
}

void q_virtualkeyboardinputcontext_commit3(void* self, const char* text, int replaceFrom, int replaceLength) {
    QVirtualKeyboardInputContext_Commit3((QVirtualKeyboardInputContext*)self, qstring(text), replaceFrom, replaceLength);
}

const char* q_virtualkeyboardinputcontext_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardinputcontext_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboardinputcontext_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboardinputcontext_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboardinputcontext_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboardinputcontext_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboardinputcontext_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboardinputcontext_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboardinputcontext_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboardinputcontext_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboardinputcontext_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboardinputcontext_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboardinputcontext_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboardinputcontext_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboardinputcontext_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboardinputcontext_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboardinputcontext_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboardinputcontext_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardinputcontext_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboardinputcontext_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboardinputcontext_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboardinputcontext_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboardinputcontext_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboardinputcontext_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboardinputcontext_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboardinputcontext_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboardinputcontext_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardinputcontext_dynamic_property_names\n");
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

QBindingStorage* q_virtualkeyboardinputcontext_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboardinputcontext_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboardinputcontext_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboardinputcontext_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardinputcontext_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboardinputcontext_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboardinputcontext_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboardinputcontext_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboardinputcontext_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboardinputcontext_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboardinputcontext_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboardinputcontext_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboardinputcontext_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardinputcontext_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboardinputcontext_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboardinputcontext_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_virtualkeyboardinputcontext_event(void* self, void* event) {
    return QVirtualKeyboardInputContext_Event((QVirtualKeyboardInputContext*)self, (QEvent*)event);
}

bool q_virtualkeyboardinputcontext_super_event(void* self, void* event) {
    return QVirtualKeyboardInputContext_SuperEvent((QVirtualKeyboardInputContext*)self, (QEvent*)event);
}

void q_virtualkeyboardinputcontext_on_event(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardInputContext_OnEvent((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

bool q_virtualkeyboardinputcontext_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardInputContext_EventFilter((QVirtualKeyboardInputContext*)self, (QObject*)watched, (QEvent*)event);
}

bool q_virtualkeyboardinputcontext_super_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardInputContext_SuperEventFilter((QVirtualKeyboardInputContext*)self, (QObject*)watched, (QEvent*)event);
}

void q_virtualkeyboardinputcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVirtualKeyboardInputContext_OnEventFilter((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_timer_event(void* self, void* event) {
    QVirtualKeyboardInputContext_TimerEvent((QVirtualKeyboardInputContext*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardinputcontext_super_timer_event(void* self, void* event) {
    QVirtualKeyboardInputContext_SuperTimerEvent((QVirtualKeyboardInputContext*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardinputcontext_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardInputContext_OnTimerEvent((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_child_event(void* self, void* event) {
    QVirtualKeyboardInputContext_ChildEvent((QVirtualKeyboardInputContext*)self, (QChildEvent*)event);
}

void q_virtualkeyboardinputcontext_super_child_event(void* self, void* event) {
    QVirtualKeyboardInputContext_SuperChildEvent((QVirtualKeyboardInputContext*)self, (QChildEvent*)event);
}

void q_virtualkeyboardinputcontext_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardInputContext_OnChildEvent((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_custom_event(void* self, void* event) {
    QVirtualKeyboardInputContext_CustomEvent((QVirtualKeyboardInputContext*)self, (QEvent*)event);
}

void q_virtualkeyboardinputcontext_super_custom_event(void* self, void* event) {
    QVirtualKeyboardInputContext_SuperCustomEvent((QVirtualKeyboardInputContext*)self, (QEvent*)event);
}

void q_virtualkeyboardinputcontext_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardInputContext_OnCustomEvent((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardInputContext_ConnectNotify((QVirtualKeyboardInputContext*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardinputcontext_super_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardInputContext_SuperConnectNotify((QVirtualKeyboardInputContext*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardinputcontext_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardInputContext_OnConnectNotify((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardInputContext_DisconnectNotify((QVirtualKeyboardInputContext*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardinputcontext_super_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardInputContext_SuperDisconnectNotify((QVirtualKeyboardInputContext*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardinputcontext_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardInputContext_OnDisconnectNotify((QVirtualKeyboardInputContext*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardinputcontext_sender(const void* self) {
    return QVirtualKeyboardInputContext_Sender((QVirtualKeyboardInputContext*)self);
}

int32_t q_virtualkeyboardinputcontext_sender_signal_index(const void* self) {
    return QVirtualKeyboardInputContext_SenderSignalIndex((QVirtualKeyboardInputContext*)self);
}

int32_t q_virtualkeyboardinputcontext_receivers(const void* self, const char* signal) {
    return QVirtualKeyboardInputContext_Receivers((QVirtualKeyboardInputContext*)self, signal);
}

bool q_virtualkeyboardinputcontext_is_signal_connected(const void* self, const void* signal) {
    return QVirtualKeyboardInputContext_IsSignalConnected((QVirtualKeyboardInputContext*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardinputcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardinputcontext_delete(void* self) {
    QVirtualKeyboardInputContext_Delete((QVirtualKeyboardInputContext*)(self));
}
