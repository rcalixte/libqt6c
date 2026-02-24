#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKCATEGORYDRAWER_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKCATEGORYDRAWER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html)

/// k_categorydrawer_new constructs a new KCategoryDrawer object.
///
/// @param view KCategorizedView*
///
KCategoryDrawer* k_categorydrawer_new(void* view);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCategoryDrawer*
///
const QMetaObject* k_categorydrawer_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback const QMetaObject* func()
///
void k_categorydrawer_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_categorydrawer_super_meta_object` instead
///
#define k_categorydrawer_qbase_meta_object k_categorydrawer_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
///
const QMetaObject* k_categorydrawer_super_meta_object(void* self);

/// @param self KCategoryDrawer*
/// @param param1 const char*
///
void* k_categorydrawer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void* func(KCategoryDrawer* self, const char* param1)
///
void k_categorydrawer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_metacast` instead
///
#define k_categorydrawer_qbase_metacast k_categorydrawer_super_metacast

/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param param1 const char*
///
void* k_categorydrawer_super_metacast(void* self, const char* param1);

/// @param self KCategoryDrawer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorydrawer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func(KCategoryDrawer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_categorydrawer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_metacall` instead
///
#define k_categorydrawer_qbase_metacall k_categorydrawer_super_metacall

/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorydrawer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_categorydrawer_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#view)
///
/// @param self KCategoryDrawer*
///
KCategorizedView* k_categorydrawer_view(void* self);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param sortRole int
/// @param option QStyleOption*
/// @param painter QPainter*
///
void k_categorydrawer_draw_category(void* self, void* index, int sortRole, void* option, void* painter);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, int sortRole, QStyleOption* option, QPainter* painter)
///
void k_categorydrawer_on_draw_category(void* self, void (*callback)(void*, void*, int, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_draw_category` instead
///
#define k_categorydrawer_qbase_draw_category k_categorydrawer_super_draw_category

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#drawCategory)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param sortRole int
/// @param option QStyleOption*
/// @param painter QPainter*
///
void k_categorydrawer_super_draw_category(void* self, void* index, int sortRole, void* option, void* painter);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param option QStyleOption*
///
int32_t k_categorydrawer_category_height(void* self, void* index, void* option);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func(KCategoryDrawer* self, QModelIndex* index, QStyleOption* option)
///
void k_categorydrawer_on_category_height(void* self, int32_t (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_category_height` instead
///
#define k_categorydrawer_qbase_category_height k_categorydrawer_super_category_height

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#categoryHeight)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param option QStyleOption*
///
int32_t k_categorydrawer_super_category_height(void* self, void* index, void* option);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_left_margin(void* self);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func()
///
void k_categorydrawer_on_left_margin(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_categorydrawer_super_left_margin` instead
///
#define k_categorydrawer_qbase_left_margin k_categorydrawer_super_left_margin

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#leftMargin)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_super_left_margin(void* self);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_right_margin(void* self);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func()
///
void k_categorydrawer_on_right_margin(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_categorydrawer_super_right_margin` instead
///
#define k_categorydrawer_qbase_right_margin k_categorydrawer_super_right_margin

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#rightMargin)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_super_right_margin(void* self);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
///
void k_categorydrawer_collapse_or_expand_clicked(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#collapseOrExpandClicked)
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index)
///
void k_categorydrawer_on_collapse_or_expand_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#actionRequested)
///
/// @param self KCategoryDrawer*
/// @param action int
/// @param index QModelIndex*
///
void k_categorydrawer_action_requested(void* self, int action, void* index);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#actionRequested)
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, int action, QModelIndex* index)
///
void k_categorydrawer_on_action_requested(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_mouse_button_pressed(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, QRect* blockRect, QMouseEvent* event)
///
void k_categorydrawer_on_mouse_button_pressed(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_mouse_button_pressed` instead
///
#define k_categorydrawer_qbase_mouse_button_pressed k_categorydrawer_super_mouse_button_pressed

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonPressed)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_super_mouse_button_pressed(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_mouse_button_released(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, QRect* blockRect, QMouseEvent* event)
///
void k_categorydrawer_on_mouse_button_released(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_mouse_button_released` instead
///
#define k_categorydrawer_qbase_mouse_button_released k_categorydrawer_super_mouse_button_released

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonReleased)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_super_mouse_button_released(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_mouse_moved(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, QRect* blockRect, QMouseEvent* event)
///
void k_categorydrawer_on_mouse_moved(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_mouse_moved` instead
///
#define k_categorydrawer_qbase_mouse_moved k_categorydrawer_super_mouse_moved

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseMoved)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_super_mouse_moved(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_mouse_button_double_clicked(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, QRect* blockRect, QMouseEvent* event)
///
void k_categorydrawer_on_mouse_button_double_clicked(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_mouse_button_double_clicked` instead
///
#define k_categorydrawer_qbase_mouse_button_double_clicked k_categorydrawer_super_mouse_button_double_clicked

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseButtonDoubleClicked)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
/// @param event QMouseEvent*
///
void k_categorydrawer_super_mouse_button_double_clicked(void* self, void* index, void* blockRect, void* event);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
///
void k_categorydrawer_mouse_left(void* self, void* index, void* blockRect);

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
///
/// Allows for overriding the related default method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QModelIndex* index, QRect* blockRect)
///
void k_categorydrawer_on_mouse_left(void* self, void (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_categorydrawer_super_mouse_left` instead
///
#define k_categorydrawer_qbase_mouse_left k_categorydrawer_super_mouse_left

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#mouseLeft)
///
/// Base class method implementation
///
/// @param self KCategoryDrawer*
/// @param index QModelIndex*
/// @param blockRect QRect*
///
void k_categorydrawer_super_mouse_left(void* self, void* index, void* blockRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_categorydrawer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_categorydrawer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategoryDrawer*
///
const char* k_categorydrawer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCategoryDrawer*
/// @param name const char*
///
void k_categorydrawer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCategoryDrawer*
///
bool k_categorydrawer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCategoryDrawer*
///
bool k_categorydrawer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCategoryDrawer*
///
bool k_categorydrawer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCategoryDrawer*
///
bool k_categorydrawer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCategoryDrawer*
/// @param b bool
///
bool k_categorydrawer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCategoryDrawer*
///
QThread* k_categorydrawer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategoryDrawer*
/// @param thread QThread*
///
bool k_categorydrawer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param interval int
///
int32_t k_categorydrawer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param time int64_t of nanoseconds
///
int32_t k_categorydrawer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategoryDrawer*
/// @param id int
///
void k_categorydrawer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategoryDrawer*
/// @param id enum Qt__TimerId
///
void k_categorydrawer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCategoryDrawer*
///
/// @return libqt_list of QObject*
///
libqt_list k_categorydrawer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCategoryDrawer*
/// @param parent QObject*
///
void k_categorydrawer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCategoryDrawer*
/// @param filterObj QObject*
///
void k_categorydrawer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCategoryDrawer*
/// @param obj QObject*
///
void k_categorydrawer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_categorydrawer_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_categorydrawer_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategoryDrawer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_categorydrawer_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorydrawer_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_categorydrawer_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
///
bool k_categorydrawer_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
/// @param receiver QObject*
///
bool k_categorydrawer_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_categorydrawer_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCategoryDrawer*
///
void k_categorydrawer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCategoryDrawer*
///
void k_categorydrawer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCategoryDrawer*
/// @param name const char*
/// @param value QVariant*
///
bool k_categorydrawer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCategoryDrawer*
/// @param name const char*
///
QVariant* k_categorydrawer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCategoryDrawer*
///
const char** k_categorydrawer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategoryDrawer*
///
QBindingStorage* k_categorydrawer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategoryDrawer*
///
const QBindingStorage* k_categorydrawer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
///
void k_categorydrawer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self)
///
void k_categorydrawer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCategoryDrawer*
///
QObject* k_categorydrawer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCategoryDrawer*
/// @param classname const char*
///
bool k_categorydrawer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCategoryDrawer*
///
void k_categorydrawer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_categorydrawer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategoryDrawer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_categorydrawer_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_categorydrawer_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_categorydrawer_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategoryDrawer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_categorydrawer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
/// @param signal const char*
///
bool k_categorydrawer_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_categorydrawer_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorydrawer_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCategoryDrawer*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorydrawer_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param param1 QObject*
///
void k_categorydrawer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QObject* param1)
///
void k_categorydrawer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
///
bool k_categorydrawer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_categorydrawer_super_event` instead
///
#define k_categorydrawer_qbase_event k_categorydrawer_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
///
bool k_categorydrawer_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool func(KCategoryDrawer* self, QEvent* event)
///
void k_categorydrawer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_categorydrawer_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_categorydrawer_super_event_filter` instead
///
#define k_categorydrawer_qbase_event_filter k_categorydrawer_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_categorydrawer_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool func(KCategoryDrawer* self, QObject* watched, QEvent* event)
///
void k_categorydrawer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QTimerEvent*
///
void k_categorydrawer_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_categorydrawer_super_timer_event` instead
///
#define k_categorydrawer_qbase_timer_event k_categorydrawer_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QTimerEvent*
///
void k_categorydrawer_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QTimerEvent* event)
///
void k_categorydrawer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QChildEvent*
///
void k_categorydrawer_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_categorydrawer_super_child_event` instead
///
#define k_categorydrawer_qbase_child_event k_categorydrawer_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QChildEvent*
///
void k_categorydrawer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QChildEvent* event)
///
void k_categorydrawer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
///
void k_categorydrawer_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_categorydrawer_super_custom_event` instead
///
#define k_categorydrawer_qbase_custom_event k_categorydrawer_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param event QEvent*
///
void k_categorydrawer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QEvent* event)
///
void k_categorydrawer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
void k_categorydrawer_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_categorydrawer_super_connect_notify` instead
///
#define k_categorydrawer_qbase_connect_notify k_categorydrawer_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
void k_categorydrawer_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QMetaMethod* signal)
///
void k_categorydrawer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
void k_categorydrawer_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_categorydrawer_super_disconnect_notify` instead
///
#define k_categorydrawer_qbase_disconnect_notify k_categorydrawer_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
void k_categorydrawer_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, QMetaMethod* signal)
///
void k_categorydrawer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
///
QObject* k_categorydrawer_sender(void* self);

/// @warning DEPRECATED: Use `k_categorydrawer_super_sender` instead
///
#define k_categorydrawer_qbase_sender k_categorydrawer_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
///
QObject* k_categorydrawer_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback QObject* func()
///
void k_categorydrawer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_categorydrawer_super_sender_signal_index` instead
///
#define k_categorydrawer_qbase_sender_signal_index k_categorydrawer_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
///
int32_t k_categorydrawer_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func()
///
void k_categorydrawer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal const char*
///
int32_t k_categorydrawer_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_categorydrawer_super_receivers` instead
///
#define k_categorydrawer_qbase_receivers k_categorydrawer_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal const char*
///
int32_t k_categorydrawer_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback int32_t func(KCategoryDrawer* self, const char* signal)
///
void k_categorydrawer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
bool k_categorydrawer_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_categorydrawer_super_is_signal_connected` instead
///
#define k_categorydrawer_qbase_is_signal_connected k_categorydrawer_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param signal QMetaMethod*
///
bool k_categorydrawer_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategoryDrawer*
/// @param callback bool func(KCategoryDrawer* self, QMetaMethod* signal)
///
void k_categorydrawer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategoryDrawer*
/// @param callback void func(KCategoryDrawer* self, const char* objectName)
///
void k_categorydrawer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcategorydrawer.html#dtor.KCategoryDrawer)
///
/// Delete this object from C++ memory.
///
/// @param self KCategoryDrawer*
///
void k_categorydrawer_delete(void* self);

#endif
