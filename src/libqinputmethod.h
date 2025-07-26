#pragma once
#ifndef SRCQT6C_LIBQINPUTMETHOD_H
#define SRCQT6C_LIBQINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qinputmethod.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QInputMethod* self ```
const QMetaObject* q_inputmethod_meta_object(void* self);

/// ``` QInputMethod* self, const char* param1 ```
void* q_inputmethod_metacast(void* self, const char* param1);

/// ``` QInputMethod* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputmethod_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_inputmethod_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
///
/// ``` QInputMethod* self ```
QTransform* q_inputmethod_input_item_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
///
/// ``` QInputMethod* self, QTransform* transform ```
void q_inputmethod_set_input_item_transform(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_input_item_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
///
/// ``` QInputMethod* self, QRectF* rect ```
void q_inputmethod_set_input_item_rectangle(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_cursor_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_anchor_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_keyboard_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
///
/// ``` QInputMethod* self ```
QRectF* q_inputmethod_input_item_clip_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
///
/// ``` QInputMethod* self, bool visible ```
void q_inputmethod_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_animating(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#locale)
///
/// ``` QInputMethod* self ```
QLocale* q_inputmethod_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
///
/// ``` QInputMethod* self ```
int64_t q_inputmethod_input_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
///
/// ``` enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_inputmethod_query_focus_object(int64_t query, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#show)
///
/// ``` QInputMethod* self ```
void q_inputmethod_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#hide)
///
/// ``` QInputMethod* self ```
void q_inputmethod_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#update)
///
/// ``` QInputMethod* self, int queries ```
void q_inputmethod_update(void* self, int64_t queries);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#reset)
///
/// ``` QInputMethod* self ```
void q_inputmethod_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#commit)
///
/// ``` QInputMethod* self ```
void q_inputmethod_commit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
///
/// ``` QInputMethod* self, enum QInputMethod__Action a, int cursorPosition ```
void q_inputmethod_invoke_action(void* self, int64_t a, int cursorPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_cursor_rectangle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_cursor_rectangle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_anchor_rectangle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_anchor_rectangle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_keyboard_rectangle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_keyboard_rectangle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_input_item_clip_rectangle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_input_item_clip_rectangle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_animating_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_animating_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
///
/// ``` QInputMethod* self ```
void q_inputmethod_locale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_locale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
///
/// ``` QInputMethod* self, enum Qt__LayoutDirection newDirection ```
void q_inputmethod_input_direction_changed(void* self, int64_t newDirection);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*, enum Qt__LayoutDirection) ```
void q_inputmethod_on_input_direction_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_inputmethod_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_inputmethod_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QInputMethod* self, QEvent* event ```
bool q_inputmethod_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QInputMethod* self, QObject* watched, QEvent* event ```
bool q_inputmethod_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QInputMethod* self ```
const char* q_inputmethod_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QInputMethod* self, char* name ```
void q_inputmethod_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QInputMethod* self ```
bool q_inputmethod_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QInputMethod* self, bool b ```
bool q_inputmethod_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QInputMethod* self ```
QThread* q_inputmethod_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputMethod* self, QThread* thread ```
bool q_inputmethod_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputMethod* self, int interval ```
int32_t q_inputmethod_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputMethod* self, int id ```
void q_inputmethod_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputMethod* self, enum Qt__TimerId id ```
void q_inputmethod_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QInputMethod* self ```
libqt_list /* of QObject* */ q_inputmethod_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QInputMethod* self, QObject* parent ```
void q_inputmethod_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QInputMethod* self, QObject* filterObj ```
void q_inputmethod_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QInputMethod* self, QObject* obj ```
void q_inputmethod_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_inputmethod_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputMethod* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_inputmethod_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_inputmethod_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_inputmethod_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QInputMethod* self ```
void q_inputmethod_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QInputMethod* self ```
void q_inputmethod_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QInputMethod* self, const char* name, QVariant* value ```
bool q_inputmethod_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QInputMethod* self, const char* name ```
QVariant* q_inputmethod_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QInputMethod* self ```
const char** q_inputmethod_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputMethod* self ```
QBindingStorage* q_inputmethod_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputMethod* self ```
const QBindingStorage* q_inputmethod_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self ```
void q_inputmethod_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*) ```
void q_inputmethod_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QInputMethod* self ```
QObject* q_inputmethod_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QInputMethod* self, const char* classname ```
bool q_inputmethod_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QInputMethod* self ```
void q_inputmethod_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputMethod* self, QThread* thread, Disambiguated_t* param2 ```
bool q_inputmethod_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputMethod* self, int interval, enum Qt__TimerType timerType ```
int32_t q_inputmethod_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputmethod_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputMethod* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputmethod_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self, QObject* param1 ```
void q_inputmethod_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*, QObject*) ```
void q_inputmethod_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QInputMethod* self, void (*slot)(QInputMethod*, const char*) ```
void q_inputmethod_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// https://doc.qt.io/qt-6/qinputmethod.html#types

typedef enum {
    QINPUTMETHOD_ACTION_CLICK = 0,
    QINPUTMETHOD_ACTION_CONTEXTMENU = 1
} QInputMethod__Action;

#endif
