#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSQT6C_LIBKCATEGORYDRAWER_H
#define SRC_EXTRAS_KITEMVIEWSQT6C_LIBKCATEGORYDRAWER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcategorydrawer.html

/// k_categorydrawer_new constructs a new KCategoryDrawer object.
///
/// @param view KCategorizedView*
KCategoryDrawer* k_categorydrawer_new(void* view);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KCategoryDrawer*
const QMetaObject* k_categorydrawer_meta_object(void* self);

/// @param self KCategoryDrawer*
/// @param param1 const char*
void* k_categorydrawer_metacast(void* self, const char* param1);

/// @param self KCategoryDrawer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_categorydrawer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn(KCategoryDrawer*, enum QMetaObject__Call, int, void*)
void k_categorydrawer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_categorydrawer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_categorydrawer_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#view)
///
/// @param self KCategoryDrawer*
KCategorizedView* k_categorydrawer_view(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param sortRole int
/// @param option QStyleOption*
/// @param painter QPainter*
void k_categorydrawer_draw_category(void* self, void* index, int sortRole, void* option, void* painter);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, int, QStyleOption*, QPainter*)
void k_categorydrawer_on_draw_category(void* self, void (*callback)(void*, void*, int, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#drawCategory)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param sortRole int
/// @param option QStyleOption*
/// @param painter QPainter*
void k_categorydrawer_qbase_draw_category(void* self, void* index, int sortRole, void* option, void* painter);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param option QStyleOption*
int32_t k_categorydrawer_category_height(void* self, void* index, void* option);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn(KCategoryDrawer*, QModelIndex*, QStyleOption*)
void k_categorydrawer_on_category_height(void* self, int32_t (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#categoryHeight)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param option QStyleOption*
int32_t k_categorydrawer_qbase_category_height(void* self, void* index, void* option);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_left_margin(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn()
void k_categorydrawer_on_left_margin(void* self, int32_t (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#leftMargin)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_qbase_left_margin(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_right_margin(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn()
void k_categorydrawer_on_right_margin(void* self, int32_t (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#rightMargin)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_qbase_right_margin(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
void k_categorydrawer_collapse_or_expand_clicked(void* self, void* index);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*)
void k_categorydrawer_on_collapse_or_expand_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#actionRequested)
///
/// @param self KCategoryDrawer*
/// @param action int
/// @param index QModelIndex*
void k_categorydrawer_action_requested(void* self, int action, void* index);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#actionRequested)
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, int, QModelIndex*)
void k_categorydrawer_on_action_requested(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_mouse_button_pressed(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*)
void k_categorydrawer_on_mouse_button_pressed(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_qbase_mouse_button_pressed(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_mouse_button_released(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*)
void k_categorydrawer_on_mouse_button_released(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_qbase_mouse_button_released(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_mouse_moved(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*)
void k_categorydrawer_on_mouse_moved(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseMoved)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_qbase_mouse_moved(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_mouse_button_double_clicked(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*)
void k_categorydrawer_on_mouse_button_double_clicked(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
void k_categorydrawer_qbase_mouse_button_double_clicked(void* self, void* index, void* blockRect, void* event);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
void k_categorydrawer_mouse_left(void* self, void* index, void* blockRect);

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QModelIndex*, QRect*)
void k_categorydrawer_on_mouse_left(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#mouseLeft)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
void k_categorydrawer_qbase_mouse_left(void* self, void* index, void* blockRect);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_categorydrawer_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_categorydrawer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCategoryDrawer*
const char* k_categorydrawer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCategoryDrawer*
/// @param name char*
void k_categorydrawer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCategoryDrawer*
bool k_categorydrawer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCategoryDrawer*
bool k_categorydrawer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCategoryDrawer*
bool k_categorydrawer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCategoryDrawer*
bool k_categorydrawer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCategoryDrawer*
/// @param b bool
bool k_categorydrawer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCategoryDrawer*
QThread* k_categorydrawer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategoryDrawer*
/// @param thread QThread*
bool k_categorydrawer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param interval int
int32_t k_categorydrawer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategoryDrawer*
/// @param id int
void k_categorydrawer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategoryDrawer*
/// @param id enum Qt__TimerId
void k_categorydrawer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCategoryDrawer*
libqt_list /* of QObject* */ k_categorydrawer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCategoryDrawer*
/// @param parent QObject*
void k_categorydrawer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCategoryDrawer*
/// @param filterObj QObject*
void k_categorydrawer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCategoryDrawer*
/// @param obj QObject*
void k_categorydrawer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_categorydrawer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategoryDrawer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_categorydrawer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_categorydrawer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_categorydrawer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCategoryDrawer*
void k_categorydrawer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCategoryDrawer*
void k_categorydrawer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCategoryDrawer*
/// @param name const char*
/// @param value QVariant*
bool k_categorydrawer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCategoryDrawer*
/// @param name const char*
QVariant* k_categorydrawer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCategoryDrawer*
const char** k_categorydrawer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategoryDrawer*
QBindingStorage* k_categorydrawer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategoryDrawer*
const QBindingStorage* k_categorydrawer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
void k_categorydrawer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*)
void k_categorydrawer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCategoryDrawer*
QObject* k_categorydrawer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCategoryDrawer*
/// @param classname const char*
bool k_categorydrawer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCategoryDrawer*
void k_categorydrawer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategoryDrawer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_categorydrawer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_categorydrawer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_categorydrawer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategoryDrawer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_categorydrawer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param param1 QObject*
void k_categorydrawer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QObject*)
void k_categorydrawer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
bool k_categorydrawer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
bool k_categorydrawer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool fn(KCategoryDrawer*, QEvent*)
void k_categorydrawer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param watched QObject*
/// @param event QEvent*
bool k_categorydrawer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param watched QObject*
/// @param event QEvent*
bool k_categorydrawer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool fn(KCategoryDrawer*, QObject*, QEvent*)
void k_categorydrawer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QTimerEvent*
void k_categorydrawer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QTimerEvent*
void k_categorydrawer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QTimerEvent*)
void k_categorydrawer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QChildEvent*
void k_categorydrawer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QChildEvent*
void k_categorydrawer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QChildEvent*)
void k_categorydrawer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
void k_categorydrawer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
void k_categorydrawer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QEvent*)
void k_categorydrawer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
void k_categorydrawer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
void k_categorydrawer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QMetaMethod*)
void k_categorydrawer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
void k_categorydrawer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
void k_categorydrawer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, QMetaMethod*)
void k_categorydrawer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
QObject* k_categorydrawer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
QObject* k_categorydrawer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback QObject* fn()
void k_categorydrawer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
int32_t k_categorydrawer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn()
void k_categorydrawer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal const char*
int32_t k_categorydrawer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal const char*
int32_t k_categorydrawer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t fn(KCategoryDrawer*, const char*)
void k_categorydrawer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
bool k_categorydrawer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
bool k_categorydrawer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool fn(KCategoryDrawer*, QMetaMethod*)
void k_categorydrawer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategoryDrawer*
/// @param callback void fn(KCategoryDrawer*, const char*)
void k_categorydrawer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kcategorydrawer.html#dtor.KCategoryDrawer)
///
/// Delete this object from C++ memory.
///
/// @param self KCategoryDrawer*
void k_categorydrawer_delete(void* self);

#endif
