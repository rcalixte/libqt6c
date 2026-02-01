#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWTOOL_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWTOOL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html)

/// q_designerformwindowtoolinterface_new constructs a new QDesignerFormWindowToolInterface object.
///
QDesignerFormWindowToolInterface* q_designerformwindowtoolinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html)

/// q_designerformwindowtoolinterface_new2 constructs a new QDesignerFormWindowToolInterface object.
///
/// @param parent QObject*
///
QDesignerFormWindowToolInterface* q_designerformwindowtoolinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerFormWindowToolInterface*
///
const QMetaObject* q_designerformwindowtoolinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback const QMetaObject* func()
///
void q_designerformwindowtoolinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
const QMetaObject* q_designerformwindowtoolinterface_qbase_meta_object(void* self);

/// @param self QDesignerFormWindowToolInterface*
/// @param param1 const char*
///
void* q_designerformwindowtoolinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void* func(QDesignerFormWindowToolInterface* self, const char* param1)
///
void q_designerformwindowtoolinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
/// @param param1 const char*
///
void* q_designerformwindowtoolinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerFormWindowToolInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformwindowtoolinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback int32_t func(QDesignerFormWindowToolInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerformwindowtoolinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformwindowtoolinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerformwindowtoolinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
///
/// @param self QDesignerFormWindowToolInterface*
///
QDesignerFormEditorInterface* q_designerformwindowtoolinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerformwindowtoolinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
QDesignerFormEditorInterface* q_designerformwindowtoolinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
///
/// @param self QDesignerFormWindowToolInterface*
///
QDesignerFormWindowInterface* q_designerformwindowtoolinterface_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback QDesignerFormWindowInterface* func()
///
void q_designerformwindowtoolinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
QDesignerFormWindowInterface* q_designerformwindowtoolinterface_qbase_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
///
/// @param self QDesignerFormWindowToolInterface*
///
QWidget* q_designerformwindowtoolinterface_editor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback QWidget* func()
///
void q_designerformwindowtoolinterface_on_editor(void* self, QWidget* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
QWidget* q_designerformwindowtoolinterface_qbase_editor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
///
/// @param self QDesignerFormWindowToolInterface*
///
QAction* q_designerformwindowtoolinterface_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback QAction* func()
///
void q_designerformwindowtoolinterface_on_action(void* self, QAction* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
QAction* q_designerformwindowtoolinterface_qbase_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_activated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func()
///
void q_designerformwindowtoolinterface_on_activated(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_qbase_activated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_deactivated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func()
///
void q_designerformwindowtoolinterface_on_deactivated(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_qbase_deactivated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param widget QWidget*
/// @param managedWidget QWidget*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_handle_event(void* self, void* widget, void* managedWidget, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback bool func(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event)
///
void q_designerformwindowtoolinterface_on_handle_event(void* self, bool (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowToolInterface*
/// @param widget QWidget*
/// @param managedWidget QWidget*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_qbase_handle_event(void* self, void* widget, void* managedWidget, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerformwindowtoolinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerformwindowtoolinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowToolInterface*
///
const char* q_designerformwindowtoolinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param name char*
///
void q_designerformwindowtoolinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerFormWindowToolInterface*
///
bool q_designerformwindowtoolinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerFormWindowToolInterface*
///
bool q_designerformwindowtoolinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerFormWindowToolInterface*
///
bool q_designerformwindowtoolinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerFormWindowToolInterface*
///
bool q_designerformwindowtoolinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param b bool
///
bool q_designerformwindowtoolinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerFormWindowToolInterface*
///
QThread* q_designerformwindowtoolinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param thread QThread*
///
bool q_designerformwindowtoolinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param interval int
///
int32_t q_designerformwindowtoolinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerformwindowtoolinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param id int
///
void q_designerformwindowtoolinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param id enum Qt__TimerId
///
void q_designerformwindowtoolinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerFormWindowToolInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformwindowtoolinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param parent QObject*
///
void q_designerformwindowtoolinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param filterObj QObject*
///
void q_designerformwindowtoolinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param obj QObject*
///
void q_designerformwindowtoolinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowtoolinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerformwindowtoolinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowtoolinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowtoolinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerformwindowtoolinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
///
bool q_designerformwindowtoolinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param receiver QObject*
///
bool q_designerformwindowtoolinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerformwindowtoolinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerformwindowtoolinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param name const char*
///
QVariant* q_designerformwindowtoolinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowToolInterface*
///
const char** q_designerformwindowtoolinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormWindowToolInterface*
///
QBindingStorage* q_designerformwindowtoolinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormWindowToolInterface*
///
const QBindingStorage* q_designerformwindowtoolinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self)
///
void q_designerformwindowtoolinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerFormWindowToolInterface*
///
QObject* q_designerformwindowtoolinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param classname const char*
///
bool q_designerformwindowtoolinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowtoolinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowtoolinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designerformwindowtoolinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerformwindowtoolinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowtoolinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal const char*
///
bool q_designerformwindowtoolinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerformwindowtoolinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowtoolinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowtoolinterface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param param1 QObject*
///
void q_designerformwindowtoolinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QObject* param1)
///
void q_designerformwindowtoolinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback bool func(QDesignerFormWindowToolInterface* self, QEvent* event)
///
void q_designerformwindowtoolinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformwindowtoolinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback bool func(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event)
///
void q_designerformwindowtoolinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QTimerEvent*
///
void q_designerformwindowtoolinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QTimerEvent*
///
void q_designerformwindowtoolinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QTimerEvent* event)
///
void q_designerformwindowtoolinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QChildEvent*
///
void q_designerformwindowtoolinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QChildEvent*
///
void q_designerformwindowtoolinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QChildEvent* event)
///
void q_designerformwindowtoolinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QEvent*
///
void q_designerformwindowtoolinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param event QEvent*
///
void q_designerformwindowtoolinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QEvent* event)
///
void q_designerformwindowtoolinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowtoolinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowtoolinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QMetaMethod* signal)
///
void q_designerformwindowtoolinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowtoolinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowtoolinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, QMetaMethod* signal)
///
void q_designerformwindowtoolinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
///
QObject* q_designerformwindowtoolinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
///
QObject* q_designerformwindowtoolinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback QObject* func()
///
void q_designerformwindowtoolinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
///
int32_t q_designerformwindowtoolinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
///
int32_t q_designerformwindowtoolinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback int32_t func()
///
void q_designerformwindowtoolinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal const char*
///
int32_t q_designerformwindowtoolinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal const char*
///
int32_t q_designerformwindowtoolinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback int32_t func(QDesignerFormWindowToolInterface* self, const char* signal)
///
void q_designerformwindowtoolinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowtoolinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowtoolinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback bool func(QDesignerFormWindowToolInterface* self, QMetaMethod* signal)
///
void q_designerformwindowtoolinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerFormWindowToolInterface*
/// @param callback void func(QDesignerFormWindowToolInterface* self, const char* objectName)
///
void q_designerformwindowtoolinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#dtor.QDesignerFormWindowToolInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormWindowToolInterface*
///
void q_designerformwindowtoolinterface_delete(void* self);

#endif
