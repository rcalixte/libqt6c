#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqinputmethod.hpp"
#include "libqinputmethod.h"

/// https://doc.qt.io/qt-6/qinputmethod.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QInputMethod* self ```
QMetaObject* q_inputmethod_meta_object(void* self) {
    return QInputMethod_MetaObject((QInputMethod*)self);
}

/// ``` QInputMethod* self, const char* param1 ```
void* q_inputmethod_metacast(void* self, const char* param1) {
    return QInputMethod_Metacast((QInputMethod*)self, param1);
}

/// ``` QInputMethod* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputmethod_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputMethod_Metacall((QInputMethod*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_inputmethod_tr(const char* s) {
    libqt_string _str = QInputMethod_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
///
/// ``` QInputMethod* self ```
QTransform* q_inputmethod_input_item_transform(void* self) {
    return QInputMethod_InputItemTransform((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
///
/// ``` QInputMethod* self, QTransform* transform ```
void q_inputmethod_set_input_item_transform(void* self, void* transform) {
    QInputMethod_SetInputItemTransform((QInputMethod*)self, (QTransform*)transform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_input_item_rectangle(void* self) {
    return QInputMethod_InputItemRectangle((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
///
/// ``` QInputMethod* self, QRectF* rect ```
void q_inputmethod_set_input_item_rectangle(void* self, void* rect) {
    QInputMethod_SetInputItemRectangle((QInputMethod*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_cursor_rectangle(void* self) {
    return QInputMethod_CursorRectangle((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_anchor_rectangle(void* self) {
    return QInputMethod_AnchorRectangle((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_keyboard_rectangle(void* self) {
    return QInputMethod_KeyboardRectangle((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_input_item_clip_rectangle(void* self) {
    return QInputMethod_InputItemClipRectangle((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_visible(void* self) {
    return QInputMethod_IsVisible((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
///
/// ``` QInputMethod* self, bool visible ```
void q_inputmethod_set_visible(void* self, bool visible) {
    QInputMethod_SetVisible((QInputMethod*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_animating(void* self) {
    return QInputMethod_IsAnimating((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#locale)
///
/// ``` QInputMethod* self ```
QLocale* q_inputmethod_locale(void* self) {
    return QInputMethod_Locale((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
///
/// ``` QInputMethod* self ```
int64_t q_inputmethod_input_direction(void* self) {
    return QInputMethod_InputDirection((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
///
/// ``` enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_inputmethod_query_focus_object(int64_t query, void* argument) {
    return QInputMethod_QueryFocusObject(query, (QVariant*)argument);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#show)
///
/// ``` QInputMethod* self ```
void q_inputmethod_show(void* self) {
    QInputMethod_Show((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#hide)
///
/// ``` QInputMethod* self ```
void q_inputmethod_hide(void* self) {
    QInputMethod_Hide((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#update)
///
/// ``` QInputMethod* self, int queries ```
void q_inputmethod_update(void* self, int64_t queries) {
    QInputMethod_Update((QInputMethod*)self, queries);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#reset)
///
/// ``` QInputMethod* self ```
void q_inputmethod_reset(void* self) {
    QInputMethod_Reset((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#commit)
///
/// ``` QInputMethod* self ```
void q_inputmethod_commit(void* self) {
    QInputMethod_Commit((QInputMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
///
/// ``` QInputMethod* self, enum QInputMethod__Action a, int cursorPosition ```
void q_inputmethod_invoke_action(void* self, int64_t a, int cursorPosition) {
    QInputMethod_InvokeAction((QInputMethod*)self, a, cursorPosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_cursor_rectangle_changed(void* self) {
    QInputMethod_CursorRectangleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_cursor_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_CursorRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_anchor_rectangle_changed(void* self) {
    QInputMethod_AnchorRectangleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_anchor_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_AnchorRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_keyboard_rectangle_changed(void* self) {
    QInputMethod_KeyboardRectangleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_keyboard_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_KeyboardRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_input_item_clip_rectangle_changed(void* self) {
    QInputMethod_InputItemClipRectangleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_input_item_clip_rectangle_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_InputItemClipRectangleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_visible_changed(void* self) {
    QInputMethod_VisibleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_visible_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_VisibleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_animating_changed(void* self) {
    QInputMethod_AnimatingChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_animating_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_AnimatingChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_locale_changed(void* self) {
    QInputMethod_LocaleChanged((QInputMethod*)self);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_locale_changed(void* self, void (*slot)(void*)) {
    QInputMethod_Connect_LocaleChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
///
/// ``` QInputMethod* self, enum Qt__LayoutDirection newDirection ```
void q_inputmethod_input_direction_changed(void* self, int64_t newDirection) {
    QInputMethod_InputDirectionChanged((QInputMethod*)self, newDirection);
}

/// ``` QInputMethod* self, void (*slot)(QInputMethod*, enum Qt__LayoutDirection) ```
void q_inputmethod_on_input_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QInputMethod_Connect_InputDirectionChanged((QInputMethod*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_inputmethod_tr2(const char* s, const char* c) {
    libqt_string _str = QInputMethod_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_inputmethod_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QInputMethod_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QInputMethod* self, QEvent* event ```
bool q_inputmethod_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QInputMethod* self, QObject* watched, QEvent* event ```
bool q_inputmethod_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QInputMethod* self ```
const char* q_inputmethod_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QInputMethod* self, const char* name ```
void q_inputmethod_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QInputMethod* self, bool b ```
bool q_inputmethod_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QInputMethod* self ```
QThread* q_inputmethod_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputMethod* self, QThread* thread ```
void q_inputmethod_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputMethod* self, int interval ```
int32_t q_inputmethod_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputMethod* self, int id ```
void q_inputmethod_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QInputMethod* self ```
libqt_list /* of QObject* */ q_inputmethod_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QInputMethod* self, QObject* parent ```
void q_inputmethod_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QInputMethod* self, QObject* filterObj ```
void q_inputmethod_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QInputMethod* self, QObject* obj ```
void q_inputmethod_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_inputmethod_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputMethod* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_inputmethod_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_inputmethod_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_inputmethod_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QInputMethod* self ```
void q_inputmethod_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QInputMethod* self ```
void q_inputmethod_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QInputMethod* self, const char* name, QVariant* value ```
bool q_inputmethod_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QInputMethod* self, const char* name ```
QVariant* q_inputmethod_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QInputMethod* self ```
const char** q_inputmethod_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputMethod* self ```
QBindingStorage* q_inputmethod_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputMethod* self ```
QBindingStorage* q_inputmethod_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self ```
void q_inputmethod_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QInputMethod* self, void (*slot)(QObject*) ```
void q_inputmethod_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QInputMethod* self ```
QObject* q_inputmethod_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QInputMethod* self, const char* classname ```
bool q_inputmethod_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QInputMethod* self ```
void q_inputmethod_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputMethod* self, int interval, enum Qt__TimerType timerType ```
int32_t q_inputmethod_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputmethod_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputMethod* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputmethod_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self, QObject* param1 ```
void q_inputmethod_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QInputMethod* self, void (*slot)(QObject*, QObject*) ```
void q_inputmethod_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
