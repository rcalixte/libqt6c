#pragma once
#ifndef SRC_QT6C_LIBQINPUTMETHOD_H
#define SRC_QT6C_LIBQINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QInputMethod*
///
const QMetaObject* q_inputmethod_meta_object(void* self);

/// @param self QInputMethod*
/// @param param1 const char*
///
void* q_inputmethod_metacast(void* self, const char* param1);

/// @param self QInputMethod*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_inputmethod_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_inputmethod_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
///
/// @param self QInputMethod*
///
QTransform* q_inputmethod_input_item_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
///
/// @param self QInputMethod*
/// @param transform QTransform*
///
void q_inputmethod_set_input_item_transform(void* self, void* transform);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
///
/// @param self QInputMethod*
///
QRectF* q_inputmethod_input_item_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
///
/// @param self QInputMethod*
/// @param rect QRectF*
///
void q_inputmethod_set_input_item_rectangle(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
///
/// @param self QInputMethod*
///
QRectF* q_inputmethod_cursor_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
///
/// @param self QInputMethod*
///
QRectF* q_inputmethod_anchor_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
///
/// @param self QInputMethod*
///
QRectF* q_inputmethod_keyboard_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
///
/// @param self QInputMethod*
///
QRectF* q_inputmethod_input_item_clip_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
///
/// @param self QInputMethod*
///
bool q_inputmethod_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
///
/// @param self QInputMethod*
/// @param visible bool
///
void q_inputmethod_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
///
/// @param self QInputMethod*
///
bool q_inputmethod_is_animating(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#locale)
///
/// @param self QInputMethod*
///
QLocale* q_inputmethod_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
///
/// @param self QInputMethod*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_inputmethod_input_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
///
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_inputmethod_query_focus_object(int32_t query, void* argument);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#show)
///
/// @param self QInputMethod*
///
void q_inputmethod_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#hide)
///
/// @param self QInputMethod*
///
void q_inputmethod_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#update)
///
/// @param self QInputMethod*
/// @param queries flag of enum Qt__InputMethodQuery
///
void q_inputmethod_update(void* self, int32_t queries);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#reset)
///
/// @param self QInputMethod*
///
void q_inputmethod_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#commit)
///
/// @param self QInputMethod*
///
void q_inputmethod_commit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
///
/// @param self QInputMethod*
/// @param a enum QInputMethod__Action
/// @param cursorPosition int
///
void q_inputmethod_invoke_action(void* self, int32_t a, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_cursor_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_cursor_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_anchor_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_anchor_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_keyboard_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_keyboard_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_input_item_clip_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_input_item_clip_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_visible_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_visible_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_animating_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_animating_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
///
/// @param self QInputMethod*
///
void q_inputmethod_locale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_locale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
///
/// @param self QInputMethod*
/// @param newDirection enum Qt__LayoutDirection
///
void q_inputmethod_input_direction_changed(void* self, int32_t newDirection);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self, enum Qt__LayoutDirection newDirection)
///
void q_inputmethod_on_input_direction_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_inputmethod_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_inputmethod_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QInputMethod*
/// @param event QEvent*
///
bool q_inputmethod_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QInputMethod*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_inputmethod_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QInputMethod*
///
const char* q_inputmethod_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QInputMethod*
/// @param name char*
///
void q_inputmethod_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QInputMethod*
///
bool q_inputmethod_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QInputMethod*
///
bool q_inputmethod_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QInputMethod*
///
bool q_inputmethod_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QInputMethod*
///
bool q_inputmethod_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QInputMethod*
/// @param b bool
///
bool q_inputmethod_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QInputMethod*
///
QThread* q_inputmethod_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QInputMethod*
/// @param thread QThread*
///
bool q_inputmethod_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputMethod*
/// @param interval int
///
int32_t q_inputmethod_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputMethod*
/// @param time int64_t of nanoseconds
///
int32_t q_inputmethod_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputMethod*
/// @param id int
///
void q_inputmethod_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputMethod*
/// @param id enum Qt__TimerId
///
void q_inputmethod_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QInputMethod*
///
/// @return libqt_list of QObject*
///
libqt_list q_inputmethod_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QInputMethod*
/// @param parent QObject*
///
void q_inputmethod_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QInputMethod*
/// @param filterObj QObject*
///
void q_inputmethod_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QInputMethod*
/// @param obj QObject*
///
void q_inputmethod_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_inputmethod_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputMethod*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_inputmethod_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_inputmethod_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_inputmethod_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QInputMethod*
///
void q_inputmethod_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QInputMethod*
///
void q_inputmethod_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QInputMethod*
/// @param name const char*
/// @param value QVariant*
///
bool q_inputmethod_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QInputMethod*
/// @param name const char*
///
QVariant* q_inputmethod_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QInputMethod*
///
const char** q_inputmethod_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputMethod*
///
QBindingStorage* q_inputmethod_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputMethod*
///
const QBindingStorage* q_inputmethod_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputMethod*
///
void q_inputmethod_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self)
///
void q_inputmethod_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QInputMethod*
///
QObject* q_inputmethod_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QInputMethod*
/// @param classname const char*
///
bool q_inputmethod_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QInputMethod*
///
void q_inputmethod_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QInputMethod*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_inputmethod_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputMethod*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_inputmethod_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputMethod*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_inputmethod_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_inputmethod_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputMethod*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_inputmethod_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputMethod*
/// @param param1 QObject*
///
void q_inputmethod_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self, QObject* param1)
///
void q_inputmethod_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QInputMethod*
/// @param callback void func(QInputMethod* self, const char* objectName)
///
void q_inputmethod_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#public-types)

typedef enum {
    QINPUTMETHOD_ACTION_CLICK = 0,
    QINPUTMETHOD_ACTION_CONTEXTMENU = 1
} QInputMethod__Action;

#endif
