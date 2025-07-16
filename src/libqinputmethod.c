#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqinputmethod.hpp"
#include "libqinputmethod.h"

const QMetaObject* q_inputmethod_meta_object(void* self) {
    return QInputMethod_MetaObject((QInputMethod*)self);
}

void* q_inputmethod_metacast(void* self, const char* param1) {
    return QInputMethod_Metacast((QInputMethod*)self, param1);
}

int32_t q_inputmethod_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputMethod_Metacall((QInputMethod*)self, param1, param2, param3);
}

const char* q_inputmethod_tr(const char* s) {
    libqt_string _str = QInputMethod_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTransform* q_inputmethod_input_item_transform(void* self) {
    return QInputMethod_InputItemTransform((QInputMethod*)self);
}

void q_inputmethod_set_input_item_transform(void* self, void* transform) {
    QInputMethod_SetInputItemTransform((QInputMethod*)self, (QTransform*)transform);
}

QRectF* q_inputmethod_input_item_rectangle(void* self) {
    return QInputMethod_InputItemRectangle((QInputMethod*)self);
}

void q_inputmethod_set_input_item_rectangle(void* self, void* rect) {
    QInputMethod_SetInputItemRectangle((QInputMethod*)self, (QRectF*)rect);
}

QRectF* q_inputmethod_cursor_rectangle(void* self) {
    return QInputMethod_CursorRectangle((QInputMethod*)self);
}

QRectF* q_inputmethod_anchor_rectangle(void* self) {
    return QInputMethod_AnchorRectangle((QInputMethod*)self);
}

QRectF* q_inputmethod_keyboard_rectangle(void* self) {
    return QInputMethod_KeyboardRectangle((QInputMethod*)self);
}

QRectF* q_inputmethod_input_item_clip_rectangle(void* self) {
    return QInputMethod_InputItemClipRectangle((QInputMethod*)self);
}

bool q_inputmethod_is_visible(void* self) {
    return QInputMethod_IsVisible((QInputMethod*)self);
}

void q_inputmethod_set_visible(void* self, bool visible) {
    QInputMethod_SetVisible((QInputMethod*)self, visible);
}

bool q_inputmethod_is_animating(void* self) {
    return QInputMethod_IsAnimating((QInputMethod*)self);
}

QLocale* q_inputmethod_locale(void* self) {
    return QInputMethod_Locale((QInputMethod*)self);
}

int64_t q_inputmethod_input_direction(void* self) {
    return QInputMethod_InputDirection((QInputMethod*)self);
}

QVariant* q_inputmethod_query_focus_object(int64_t query, void* argument) {
    return QInputMethod_QueryFocusObject(query, (QVariant*)argument);
}

void q_inputmethod_show(void* self) {
    QInputMethod_Show((QInputMethod*)self);
}

void q_inputmethod_hide(void* self) {
    QInputMethod_Hide((QInputMethod*)self);
}

void q_inputmethod_update(void* self, int64_t queries) {
    QInputMethod_Update((QInputMethod*)self, queries);
}

void q_inputmethod_reset(void* self) {
    QInputMethod_Reset((QInputMethod*)self);
}

void q_inputmethod_commit(void* self) {
    QInputMethod_Commit((QInputMethod*)self);
}

void q_inputmethod_invoke_action(void* self, int64_t a, int cursorPosition) {
    QInputMethod_InvokeAction((QInputMethod*)self, a, cursorPosition);
}

void q_inputmethod_cursor_rectangle_changed(void* self) {
    QInputMethod_CursorRectangleChanged((QInputMethod*)self);
}

void q_inputmethod_on_cursor_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_CursorRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_anchor_rectangle_changed(void* self) {
    QInputMethod_AnchorRectangleChanged((QInputMethod*)self);
}

void q_inputmethod_on_anchor_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_AnchorRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_keyboard_rectangle_changed(void* self) {
    QInputMethod_KeyboardRectangleChanged((QInputMethod*)self);
}

void q_inputmethod_on_keyboard_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_KeyboardRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_input_item_clip_rectangle_changed(void* self) {
    QInputMethod_InputItemClipRectangleChanged((QInputMethod*)self);
}

void q_inputmethod_on_input_item_clip_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_InputItemClipRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_visible_changed(void* self) {
    QInputMethod_VisibleChanged((QInputMethod*)self);
}

void q_inputmethod_on_visible_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_VisibleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_animating_changed(void* self) {
    QInputMethod_AnimatingChanged((QInputMethod*)self);
}

void q_inputmethod_on_animating_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_AnimatingChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_locale_changed(void* self) {
    QInputMethod_LocaleChanged((QInputMethod*)self);
}

void q_inputmethod_on_locale_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_LocaleChanged((QInputMethod*)self, (intptr_t)slot);
}

void q_inputmethod_input_direction_changed(void* self, int64_t newDirection) {
    QInputMethod_InputDirectionChanged((QInputMethod*)self, newDirection);
}

void q_inputmethod_on_input_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QInputMethod_Connect_InputDirectionChanged((QInputMethod*)self, (intptr_t)slot);
}

const char* q_inputmethod_tr2(const char* s, const char* c) {
    libqt_string _str = QInputMethod_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputmethod_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QInputMethod_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_inputmethod_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_inputmethod_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_inputmethod_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputmethod_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_inputmethod_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_inputmethod_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_inputmethod_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_inputmethod_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_inputmethod_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_inputmethod_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_inputmethod_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_inputmethod_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_inputmethod_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_inputmethod_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_inputmethod_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_inputmethod_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_inputmethod_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_inputmethod_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_inputmethod_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_inputmethod_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_inputmethod_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_inputmethod_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_inputmethod_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_inputmethod_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_inputmethod_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_inputmethod_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_inputmethod_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_inputmethod_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_inputmethod_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_inputmethod_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_inputmethod_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_inputmethod_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_inputmethod_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_inputmethod_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_inputmethod_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_inputmethod_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_inputmethod_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_inputmethod_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_inputmethod_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_inputmethod_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_inputmethod_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}
