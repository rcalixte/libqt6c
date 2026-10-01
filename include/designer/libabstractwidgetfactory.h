#pragma once
#ifndef DESIGNER_LIBABSTRACTWIDGETFACTORY_H
#define DESIGNER_LIBABSTRACTWIDGETFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html)

/// q_designerwidgetfactoryinterface_new constructs a new QDesignerWidgetFactoryInterface object.
///
QDesignerWidgetFactoryInterface* q_designerwidgetfactoryinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html)

/// q_designerwidgetfactoryinterface_new2 constructs a new QDesignerWidgetFactoryInterface object.
///
/// @param parent QObject*
///
QDesignerWidgetFactoryInterface* q_designerwidgetfactoryinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
const QMetaObject* q_designerwidgetfactoryinterface_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback const QMetaObject* func(const QDesignerWidgetFactoryInterface* self)
///
void q_designerwidgetfactoryinterface_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetFactoryInterface*
///
const QMetaObject* q_designerwidgetfactoryinterface_super_meta_object(const void* self);

/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 const char*
///
void* q_designerwidgetfactoryinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void* func(QDesignerWidgetFactoryInterface* self, const char* param1)
///
void q_designerwidgetfactoryinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 const char*
///
void* q_designerwidgetfactoryinterface_super_metacast(void* self, const char* param1);

/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetfactoryinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback int32_t func(QDesignerWidgetFactoryInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerwidgetfactoryinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetfactoryinterface_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerwidgetfactoryinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_core` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
///
QDesignerFormEditorInterface* q_designerwidgetfactoryinterface_core(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QDesignerFormEditorInterface* func(const QDesignerWidgetFactoryInterface* self)
///
void q_designerwidgetfactoryinterface_on_core(const void* self, QDesignerFormEditorInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_container_of_widget` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_container_of_widget(const void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(const QDesignerWidgetFactoryInterface* self, QWidget* w)
///
void q_designerwidgetfactoryinterface_on_container_of_widget(const void* self, QWidget* (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_widget_of_container` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_widget_of_container(const void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(const QDesignerWidgetFactoryInterface* self, QWidget* w)
///
void q_designerwidgetfactoryinterface_on_widget_of_container(const void* self, QWidget* (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_create_widget` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param name const char*
/// @param parentWidget QWidget*
///
QWidget* q_designerwidgetfactoryinterface_create_widget(const void* self, const char* name, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(const QDesignerWidgetFactoryInterface* self, const char* name, QWidget* parentWidget)
///
void q_designerwidgetfactoryinterface_on_create_widget(const void* self, QWidget* (*callback)(const void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_create_layout` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param widget QWidget*
/// @param layout QLayout*
/// @param type int
///
QLayout* q_designerwidgetfactoryinterface_create_layout(const void* self, void* widget, void* layout, int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QLayout* func(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int type)
///
void q_designerwidgetfactoryinterface_on_create_layout(const void* self, QLayout* (*callback)(const void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_is_passive_interactor` before it can be called.
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param widget QWidget*
///
bool q_designerwidgetfactoryinterface_is_passive_interactor(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback bool func(QDesignerWidgetFactoryInterface* self, QWidget* widget)
///
void q_designerwidgetfactoryinterface_on_is_passive_interactor(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
///
/// @warning This method must be implemented with `q_designerwidgetfactoryinterface_on_initialize` before it can be called.
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param object QObject*
///
void q_designerwidgetfactoryinterface_initialize(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback void func(const QDesignerWidgetFactoryInterface* self, QObject* object)
///
void q_designerwidgetfactoryinterface_on_initialize(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerwidgetfactoryinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerwidgetfactoryinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetFactoryInterface*
///
const char* q_designerwidgetfactoryinterface_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
///
void q_designerwidgetfactoryinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param b bool
///
bool q_designerwidgetfactoryinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
QThread* q_designerwidgetfactoryinterface_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param thread QThread*
///
bool q_designerwidgetfactoryinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param interval int
///
int32_t q_designerwidgetfactoryinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerwidgetfactoryinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param id int
///
void q_designerwidgetfactoryinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param id enum Qt__TimerId
///
void q_designerwidgetfactoryinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerwidgetfactoryinterface_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param parent QObject*
///
void q_designerwidgetfactoryinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param filterObj QObject*
///
void q_designerwidgetfactoryinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param obj QObject*
///
void q_designerwidgetfactoryinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetfactoryinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerwidgetfactoryinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param receiver QObject*
///
bool q_designerwidgetfactoryinterface_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerwidgetfactoryinterface_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerwidgetfactoryinterface_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param name const char*
///
QVariant* q_designerwidgetfactoryinterface_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerWidgetFactoryInterface*
///
const char** q_designerwidgetfactoryinterface_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerWidgetFactoryInterface*
///
QBindingStorage* q_designerwidgetfactoryinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
const QBindingStorage* q_designerwidgetfactoryinterface_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self)
///
void q_designerwidgetfactoryinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param classname const char*
///
bool q_designerwidgetfactoryinterface_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetfactoryinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetfactoryinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal const char*
///
bool q_designerwidgetfactoryinterface_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerwidgetfactoryinterface_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetfactoryinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetfactoryinterface_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 QObject*
///
void q_designerwidgetfactoryinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QObject* param1)
///
void q_designerwidgetfactoryinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QEvent*
///
bool q_designerwidgetfactoryinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QEvent*
///
bool q_designerwidgetfactoryinterface_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback bool func(QDesignerWidgetFactoryInterface* self, QEvent* event)
///
void q_designerwidgetfactoryinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetfactoryinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetfactoryinterface_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback bool func(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event)
///
void q_designerwidgetfactoryinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetfactoryinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetfactoryinterface_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QTimerEvent* event)
///
void q_designerwidgetfactoryinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QChildEvent*
///
void q_designerwidgetfactoryinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QChildEvent*
///
void q_designerwidgetfactoryinterface_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QChildEvent* event)
///
void q_designerwidgetfactoryinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QEvent*
///
void q_designerwidgetfactoryinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param event QEvent*
///
void q_designerwidgetfactoryinterface_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QEvent* event)
///
void q_designerwidgetfactoryinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback QObject* func(QDesignerWidgetFactoryInterface* self)
///
void q_designerwidgetfactoryinterface_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
///
int32_t q_designerwidgetfactoryinterface_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
///
int32_t q_designerwidgetfactoryinterface_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback int32_t func(QDesignerWidgetFactoryInterface* self)
///
void q_designerwidgetfactoryinterface_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal const char*
///
int32_t q_designerwidgetfactoryinterface_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal const char*
///
int32_t q_designerwidgetfactoryinterface_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback int32_t func(QDesignerWidgetFactoryInterface* self, const char* signal)
///
void q_designerwidgetfactoryinterface_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetfactoryinterface_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetfactoryinterface_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetFactoryInterface*
/// @param callback bool func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, const char* objectName)
///
void q_designerwidgetfactoryinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#dtor.QDesignerWidgetFactoryInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_delete(void* self);

#endif
