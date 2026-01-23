#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETFACTORY_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QDesignerWidgetFactoryInterface*
///
const QMetaObject* q_designerwidgetfactoryinterface_meta_object(void* self);

/// @param self QDesignerWidgetFactoryInterface*
/// @param param1 const char*
///
void* q_designerwidgetfactoryinterface_metacast(void* self, const char* param1);

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
int32_t q_designerwidgetfactoryinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerwidgetfactoryinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
///
/// @param self QDesignerWidgetFactoryInterface*
///
QDesignerFormEditorInterface* q_designerwidgetfactoryinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerwidgetfactoryinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
///
QDesignerFormEditorInterface* q_designerwidgetfactoryinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_container_of_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(QDesignerWidgetFactoryInterface* self, QWidget* w)
///
void q_designerwidgetfactoryinterface_on_container_of_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_qbase_container_of_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_widget_of_container(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(QDesignerWidgetFactoryInterface* self, QWidget* w)
///
void q_designerwidgetfactoryinterface_on_widget_of_container(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param w QWidget*
///
QWidget* q_designerwidgetfactoryinterface_qbase_widget_of_container(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
/// @param parentWidget QWidget*
///
QWidget* q_designerwidgetfactoryinterface_create_widget(void* self, const char* name, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QWidget* func(QDesignerWidgetFactoryInterface* self, const char* name, QWidget* parentWidget)
///
void q_designerwidgetfactoryinterface_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
/// @param parentWidget QWidget*
///
QWidget* q_designerwidgetfactoryinterface_qbase_create_widget(void* self, const char* name, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param widget QWidget*
/// @param layout QLayout*
/// @param type int
///
QLayout* q_designerwidgetfactoryinterface_create_layout(void* self, void* widget, void* layout, int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QLayout* func(QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int type)
///
void q_designerwidgetfactoryinterface_on_create_layout(void* self, QLayout* (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param widget QWidget*
/// @param layout QLayout*
/// @param type int
///
QLayout* q_designerwidgetfactoryinterface_qbase_create_layout(void* self, void* widget, void* layout, int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param widget QWidget*
///
bool q_designerwidgetfactoryinterface_qbase_is_passive_interactor(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param object QObject*
///
void q_designerwidgetfactoryinterface_initialize(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QObject* object)
///
void q_designerwidgetfactoryinterface_on_initialize(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param object QObject*
///
void q_designerwidgetfactoryinterface_qbase_initialize(void* self, void* object);

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
/// @param self QDesignerWidgetFactoryInterface*
///
const char* q_designerwidgetfactoryinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name char*
///
void q_designerwidgetfactoryinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerWidgetFactoryInterface*
///
bool q_designerwidgetfactoryinterface_signals_blocked(void* self);

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
/// @param self QDesignerWidgetFactoryInterface*
///
QThread* q_designerwidgetfactoryinterface_thread(void* self);

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
/// @param self QDesignerWidgetFactoryInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerwidgetfactoryinterface_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerwidgetfactoryinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerwidgetfactoryinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerwidgetfactoryinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param name const char*
///
QVariant* q_designerwidgetfactoryinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerWidgetFactoryInterface*
///
const char** q_designerwidgetfactoryinterface_dynamic_property_names(void* self);

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
/// @param self QDesignerWidgetFactoryInterface*
///
const QBindingStorage* q_designerwidgetfactoryinterface_binding_storage2(void* self);

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
/// @param self QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param classname const char*
///
bool q_designerwidgetfactoryinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerWidgetFactoryInterface*
///
void q_designerwidgetfactoryinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerwidgetfactoryinterface_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetfactoryinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_designerwidgetfactoryinterface_qbase_event(void* self, void* event);

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
bool q_designerwidgetfactoryinterface_qbase_event_filter(void* self, void* watched, void* event);

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
void q_designerwidgetfactoryinterface_qbase_timer_event(void* self, void* event);

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
void q_designerwidgetfactoryinterface_qbase_child_event(void* self, void* event);

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
void q_designerwidgetfactoryinterface_qbase_custom_event(void* self, void* event);

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
void q_designerwidgetfactoryinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetfactoryinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback void func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
///
QObject* q_designerwidgetfactoryinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback QObject* func()
///
void q_designerwidgetfactoryinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
///
int32_t q_designerwidgetfactoryinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
///
int32_t q_designerwidgetfactoryinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback int32_t func()
///
void q_designerwidgetfactoryinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal const char*
///
int32_t q_designerwidgetfactoryinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal const char*
///
int32_t q_designerwidgetfactoryinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback int32_t func(QDesignerWidgetFactoryInterface* self, const char* signal)
///
void q_designerwidgetfactoryinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetfactoryinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetfactoryinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetFactoryInterface*
/// @param callback bool func(QDesignerWidgetFactoryInterface* self, QMetaMethod* signal)
///
void q_designerwidgetfactoryinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
