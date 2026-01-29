#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTMETADATABASE_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTMETADATABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html)

/// q_designermetadatabaseiteminterface_new constructs a new QDesignerMetaDataBaseItemInterface object.
///
QDesignerMetaDataBaseItemInterface* q_designermetadatabaseiteminterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
const char* q_designermetadatabaseiteminterface_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designermetadatabaseiteminterface_on_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#name)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
const char* q_designermetadatabaseiteminterface_qbase_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param name const char*
///
void q_designermetadatabaseiteminterface_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback void func(QDesignerMetaDataBaseItemInterface* self, const char* name)
///
void q_designermetadatabaseiteminterface_on_set_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setName)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param name const char*
///
void q_designermetadatabaseiteminterface_qbase_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
/// @return libqt_list of QWidget*
///
libqt_list q_designermetadatabaseiteminterface_tab_order(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback QWidget** func()
///
void q_designermetadatabaseiteminterface_on_tab_order(void* self, QWidget** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#tabOrder)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
/// @return libqt_list of QWidget*
///
libqt_list q_designermetadatabaseiteminterface_qbase_tab_order(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param tabOrder libqt_list of QWidget*
///
void q_designermetadatabaseiteminterface_set_tab_order(void* self, libqt_list /* of QWidget* */ tabOrder);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback void func(QDesignerMetaDataBaseItemInterface* self, QWidget** tabOrder)
///
void q_designermetadatabaseiteminterface_on_set_tab_order(void* self, void (*callback)(void*, QWidget**));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setTabOrder)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param tabOrder libqt_list of QWidget*
///
void q_designermetadatabaseiteminterface_qbase_set_tab_order(void* self, libqt_list /* of QWidget* */ tabOrder);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
bool q_designermetadatabaseiteminterface_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback bool func()
///
void q_designermetadatabaseiteminterface_on_enabled(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#enabled)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
bool q_designermetadatabaseiteminterface_qbase_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param b bool
///
void q_designermetadatabaseiteminterface_set_enabled(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param callback void func(QDesignerMetaDataBaseItemInterface* self, bool b)
///
void q_designermetadatabaseiteminterface_on_set_enabled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#setEnabled)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseItemInterface*
/// @param b bool
///
void q_designermetadatabaseiteminterface_qbase_set_enabled(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseiteminterface.html#dtor.QDesignerMetaDataBaseItemInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerMetaDataBaseItemInterface*
///
void q_designermetadatabaseiteminterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html)

/// q_designermetadatabaseinterface_new constructs a new QDesignerMetaDataBaseInterface object.
///
QDesignerMetaDataBaseInterface* q_designermetadatabaseinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html)

/// q_designermetadatabaseinterface_new2 constructs a new QDesignerMetaDataBaseInterface object.
///
/// @param parent QObject*
///
QDesignerMetaDataBaseInterface* q_designermetadatabaseinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerMetaDataBaseInterface*
///
const QMetaObject* q_designermetadatabaseinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback const QMetaObject* func()
///
void q_designermetadatabaseinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
///
const QMetaObject* q_designermetadatabaseinterface_qbase_meta_object(void* self);

/// @param self QDesignerMetaDataBaseInterface*
/// @param param1 const char*
///
void* q_designermetadatabaseinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void* func(QDesignerMetaDataBaseInterface* self, const char* param1)
///
void q_designermetadatabaseinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param param1 const char*
///
void* q_designermetadatabaseinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerMetaDataBaseInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designermetadatabaseinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback int32_t func(QDesignerMetaDataBaseInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designermetadatabaseinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designermetadatabaseinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designermetadatabaseinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
QDesignerMetaDataBaseItemInterface* q_designermetadatabaseinterface_item(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback QDesignerMetaDataBaseItemInterface* func(QDesignerMetaDataBaseInterface* self, QObject* object)
///
void q_designermetadatabaseinterface_on_item(void* self, QDesignerMetaDataBaseItemInterface* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#item)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
QDesignerMetaDataBaseItemInterface* q_designermetadatabaseinterface_qbase_item(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
void q_designermetadatabaseinterface_add(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QObject* object)
///
void q_designermetadatabaseinterface_on_add(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#add)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
void q_designermetadatabaseinterface_qbase_add(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
void q_designermetadatabaseinterface_remove(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QObject* object)
///
void q_designermetadatabaseinterface_on_remove(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#remove)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param object QObject*
///
void q_designermetadatabaseinterface_qbase_remove(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
///
/// @param self QDesignerMetaDataBaseInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designermetadatabaseinterface_objects(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback QObject** func()
///
void q_designermetadatabaseinterface_on_objects(void* self, QObject** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#objects)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designermetadatabaseinterface_qbase_objects(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
///
/// @param self QDesignerMetaDataBaseInterface*
///
QDesignerFormEditorInterface* q_designermetadatabaseinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designermetadatabaseinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerMetaDataBaseInterface*
///
QDesignerFormEditorInterface* q_designermetadatabaseinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#changed)
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#changed)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self)
///
void q_designermetadatabaseinterface_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designermetadatabaseinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designermetadatabaseinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerMetaDataBaseInterface*
///
const char* q_designermetadatabaseinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param name char*
///
void q_designermetadatabaseinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerMetaDataBaseInterface*
///
bool q_designermetadatabaseinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerMetaDataBaseInterface*
///
bool q_designermetadatabaseinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerMetaDataBaseInterface*
///
bool q_designermetadatabaseinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerMetaDataBaseInterface*
///
bool q_designermetadatabaseinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param b bool
///
bool q_designermetadatabaseinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerMetaDataBaseInterface*
///
QThread* q_designermetadatabaseinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param thread QThread*
///
bool q_designermetadatabaseinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param interval int
///
int32_t q_designermetadatabaseinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designermetadatabaseinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param id int
///
void q_designermetadatabaseinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param id enum Qt__TimerId
///
void q_designermetadatabaseinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerMetaDataBaseInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designermetadatabaseinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param parent QObject*
///
void q_designermetadatabaseinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param filterObj QObject*
///
void q_designermetadatabaseinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param obj QObject*
///
void q_designermetadatabaseinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designermetadatabaseinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designermetadatabaseinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designermetadatabaseinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designermetadatabaseinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designermetadatabaseinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param name const char*
///
QVariant* q_designermetadatabaseinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerMetaDataBaseInterface*
///
const char** q_designermetadatabaseinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerMetaDataBaseInterface*
///
QBindingStorage* q_designermetadatabaseinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerMetaDataBaseInterface*
///
const QBindingStorage* q_designermetadatabaseinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self)
///
void q_designermetadatabaseinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerMetaDataBaseInterface*
///
QObject* q_designermetadatabaseinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param classname const char*
///
bool q_designermetadatabaseinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designermetadatabaseinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designermetadatabaseinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designermetadatabaseinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designermetadatabaseinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param param1 QObject*
///
void q_designermetadatabaseinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QObject* param1)
///
void q_designermetadatabaseinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QEvent*
///
bool q_designermetadatabaseinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QEvent*
///
bool q_designermetadatabaseinterface_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback bool func(QDesignerMetaDataBaseInterface* self, QEvent* event)
///
void q_designermetadatabaseinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designermetadatabaseinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designermetadatabaseinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback bool func(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event)
///
void q_designermetadatabaseinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QTimerEvent*
///
void q_designermetadatabaseinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QTimerEvent*
///
void q_designermetadatabaseinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QTimerEvent* event)
///
void q_designermetadatabaseinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QChildEvent*
///
void q_designermetadatabaseinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QChildEvent*
///
void q_designermetadatabaseinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QChildEvent* event)
///
void q_designermetadatabaseinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QEvent*
///
void q_designermetadatabaseinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param event QEvent*
///
void q_designermetadatabaseinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QEvent* event)
///
void q_designermetadatabaseinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designermetadatabaseinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designermetadatabaseinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QMetaMethod* signal)
///
void q_designermetadatabaseinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designermetadatabaseinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designermetadatabaseinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, QMetaMethod* signal)
///
void q_designermetadatabaseinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
///
QObject* q_designermetadatabaseinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
///
QObject* q_designermetadatabaseinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback QObject* func()
///
void q_designermetadatabaseinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
///
int32_t q_designermetadatabaseinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
///
int32_t q_designermetadatabaseinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback int32_t func()
///
void q_designermetadatabaseinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal const char*
///
int32_t q_designermetadatabaseinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal const char*
///
int32_t q_designermetadatabaseinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback int32_t func(QDesignerMetaDataBaseInterface* self, const char* signal)
///
void q_designermetadatabaseinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designermetadatabaseinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designermetadatabaseinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback bool func(QDesignerMetaDataBaseInterface* self, QMetaMethod* signal)
///
void q_designermetadatabaseinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerMetaDataBaseInterface*
/// @param callback void func(QDesignerMetaDataBaseInterface* self, const char* objectName)
///
void q_designermetadatabaseinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermetadatabaseinterface.html#dtor.QDesignerMetaDataBaseInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerMetaDataBaseInterface*
///
void q_designermetadatabaseinterface_delete(void* self);

#endif
