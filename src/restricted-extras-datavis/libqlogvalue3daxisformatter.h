#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html)

/// q_logvalue3daxisformatter_new constructs a new QLogValue3DAxisFormatter object.
///
QLogValue3DAxisFormatter* q_logvalue3daxisformatter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html)

/// q_logvalue3daxisformatter_new2 constructs a new QLogValue3DAxisFormatter object.
///
/// @param parent QObject*
///
QLogValue3DAxisFormatter* q_logvalue3daxisformatter_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QLogValue3DAxisFormatter*
///
const QMetaObject* q_logvalue3daxisformatter_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback const QMetaObject* func(const QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QLogValue3DAxisFormatter*
///
const QMetaObject* q_logvalue3daxisformatter_super_meta_object(const void* self);

/// @param self QLogValue3DAxisFormatter*
/// @param param1 const char*
///
void* q_logvalue3daxisformatter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void* func(QLogValue3DAxisFormatter* self, const char* param1)
///
void q_logvalue3daxisformatter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QLogValue3DAxisFormatter*
/// @param param1 const char*
///
void* q_logvalue3daxisformatter_super_metacast(void* self, const char* param1);

/// @param self QLogValue3DAxisFormatter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_logvalue3daxisformatter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback int32_t func(QLogValue3DAxisFormatter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_logvalue3daxisformatter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLogValue3DAxisFormatter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_logvalue3daxisformatter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_logvalue3daxisformatter_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#setBase)
///
/// @param self QLogValue3DAxisFormatter*
/// @param base double
///
void q_logvalue3daxisformatter_set_base(void* self, double base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#base)
///
/// @param self const QLogValue3DAxisFormatter*
///
double q_logvalue3daxisformatter_base(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#setAutoSubGrid)
///
/// @param self QLogValue3DAxisFormatter*
/// @param enabled bool
///
void q_logvalue3daxisformatter_set_auto_sub_grid(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#autoSubGrid)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_auto_sub_grid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#setShowEdgeLabels)
///
/// @param self QLogValue3DAxisFormatter*
/// @param enabled bool
///
void q_logvalue3daxisformatter_set_show_edge_labels(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#showEdgeLabels)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_show_edge_labels(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#baseChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param base double
///
void q_logvalue3daxisformatter_base_changed(void* self, double base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#baseChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, double base)
///
void q_logvalue3daxisformatter_on_base_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#autoSubGridChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param enabled bool
///
void q_logvalue3daxisformatter_auto_sub_grid_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#autoSubGridChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, bool enabled)
///
void q_logvalue3daxisformatter_on_auto_sub_grid_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#showEdgeLabelsChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param enabled bool
///
void q_logvalue3daxisformatter_show_edge_labels_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#showEdgeLabelsChanged)
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, bool enabled)
///
void q_logvalue3daxisformatter_on_show_edge_labels_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#createNewInstance)
///
/// @param self const QLogValue3DAxisFormatter*
///
QValue3DAxisFormatter* q_logvalue3daxisformatter_create_new_instance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#createNewInstance)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback QValue3DAxisFormatter* func(const QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_create_new_instance(void* self, QValue3DAxisFormatter* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#createNewInstance)
///
/// Base class method implementation
///
/// @param self const QLogValue3DAxisFormatter*
///
QValue3DAxisFormatter* q_logvalue3daxisformatter_super_create_new_instance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#recalculate)
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_recalculate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#recalculate)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_recalculate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#recalculate)
///
/// Base class method implementation
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_super_recalculate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#positionAt)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param value float
///
float q_logvalue3daxisformatter_position_at(const void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#positionAt)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback float func(const QLogValue3DAxisFormatter* self, float value)
///
void q_logvalue3daxisformatter_on_position_at(void* self, float (*callback)(const void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#positionAt)
///
/// Base class method implementation
///
/// @param self const QLogValue3DAxisFormatter*
/// @param value float
///
float q_logvalue3daxisformatter_super_position_at(const void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#valueAt)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param position float
///
float q_logvalue3daxisformatter_value_at(const void* self, float position);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#valueAt)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback float func(const QLogValue3DAxisFormatter* self, float position)
///
void q_logvalue3daxisformatter_on_value_at(void* self, float (*callback)(const void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#valueAt)
///
/// Base class method implementation
///
/// @param self const QLogValue3DAxisFormatter*
/// @param position float
///
float q_logvalue3daxisformatter_super_value_at(const void* self, float position);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#populateCopy)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param copy QValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_populate_copy(const void* self, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#populateCopy)
///
/// Allows for overriding the related default method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy)
///
void q_logvalue3daxisformatter_on_populate_copy(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#populateCopy)
///
/// Base class method implementation
///
/// @param self const QLogValue3DAxisFormatter*
/// @param copy QValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_super_populate_copy(const void* self, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_logvalue3daxisformatter_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_logvalue3daxisformatter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLogValue3DAxisFormatter*
///
const char* q_logvalue3daxisformatter_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLogValue3DAxisFormatter*
/// @param name const char*
///
void q_logvalue3daxisformatter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLogValue3DAxisFormatter*
/// @param b bool
///
bool q_logvalue3daxisformatter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QLogValue3DAxisFormatter*
///
QThread* q_logvalue3daxisformatter_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLogValue3DAxisFormatter*
/// @param thread QThread*
///
bool q_logvalue3daxisformatter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param interval int
///
int32_t q_logvalue3daxisformatter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param time int64_t of nanoseconds
///
int32_t q_logvalue3daxisformatter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param id int
///
void q_logvalue3daxisformatter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param id enum Qt__TimerId
///
void q_logvalue3daxisformatter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of QObject*
///
libqt_list q_logvalue3daxisformatter_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLogValue3DAxisFormatter*
/// @param parent QObject*
///
void q_logvalue3daxisformatter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLogValue3DAxisFormatter*
/// @param filterObj QObject*
///
void q_logvalue3daxisformatter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLogValue3DAxisFormatter*
/// @param obj QObject*
///
void q_logvalue3daxisformatter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_logvalue3daxisformatter_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_logvalue3daxisformatter_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_logvalue3daxisformatter_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_logvalue3daxisformatter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_logvalue3daxisformatter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param receiver QObject*
///
bool q_logvalue3daxisformatter_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_logvalue3daxisformatter_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLogValue3DAxisFormatter*
/// @param name const char*
/// @param value QVariant*
///
bool q_logvalue3daxisformatter_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param name const char*
///
QVariant* q_logvalue3daxisformatter_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLogValue3DAxisFormatter*
///
const char** q_logvalue3daxisformatter_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLogValue3DAxisFormatter*
///
QBindingStorage* q_logvalue3daxisformatter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QLogValue3DAxisFormatter*
///
const QBindingStorage* q_logvalue3daxisformatter_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QLogValue3DAxisFormatter*
///
QObject* q_logvalue3daxisformatter_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param classname const char*
///
bool q_logvalue3daxisformatter_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_logvalue3daxisformatter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValue3DAxisFormatter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_logvalue3daxisformatter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_logvalue3daxisformatter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_logvalue3daxisformatter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_logvalue3daxisformatter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal const char*
///
bool q_logvalue3daxisformatter_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_logvalue3daxisformatter_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_logvalue3daxisformatter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLogValue3DAxisFormatter*
/// @param receiver QObject*
/// @param member const char*
///
bool q_logvalue3daxisformatter_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValue3DAxisFormatter*
/// @param param1 QObject*
///
void q_logvalue3daxisformatter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QObject* param1)
///
void q_logvalue3daxisformatter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#stringForValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param value double
/// @param format const char*
///
const char* q_logvalue3daxisformatter_string_for_value(const void* self, double value, const char* format);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#stringForValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param value double
/// @param format const char*
///
const char* q_logvalue3daxisformatter_super_string_for_value(const void* self, double value, const char* format);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#stringForValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback const char* func(QLogValue3DAxisFormatter* self, double value, const char* format)
///
void q_logvalue3daxisformatter_on_string_for_value(void* self, const char* (*callback)(const void*, double, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QEvent*
///
bool q_logvalue3daxisformatter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QEvent*
///
bool q_logvalue3daxisformatter_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback bool func(QLogValue3DAxisFormatter* self, QEvent* event)
///
void q_logvalue3daxisformatter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_logvalue3daxisformatter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_logvalue3daxisformatter_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback bool func(QLogValue3DAxisFormatter* self, QObject* watched, QEvent* event)
///
void q_logvalue3daxisformatter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QTimerEvent*
///
void q_logvalue3daxisformatter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QTimerEvent*
///
void q_logvalue3daxisformatter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QTimerEvent* event)
///
void q_logvalue3daxisformatter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QChildEvent*
///
void q_logvalue3daxisformatter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QChildEvent*
///
void q_logvalue3daxisformatter_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QChildEvent* event)
///
void q_logvalue3daxisformatter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QEvent*
///
void q_logvalue3daxisformatter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param event QEvent*
///
void q_logvalue3daxisformatter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QEvent* event)
///
void q_logvalue3daxisformatter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
void q_logvalue3daxisformatter_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
void q_logvalue3daxisformatter_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QMetaMethod* signal)
///
void q_logvalue3daxisformatter_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
void q_logvalue3daxisformatter_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
void q_logvalue3daxisformatter_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QMetaMethod* signal)
///
void q_logvalue3daxisformatter_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowNegatives)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param allow bool
///
void q_logvalue3daxisformatter_set_allow_negatives(void* self, bool allow);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowNegatives)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param allow bool
///
void q_logvalue3daxisformatter_super_set_allow_negatives(void* self, bool allow);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowNegatives)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, bool allow)
///
void q_logvalue3daxisformatter_on_set_allow_negatives(void* self, void (*callback)(void*, bool));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowNegatives)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_allow_negatives(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowNegatives)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_super_allow_negatives(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowNegatives)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback bool func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_allow_negatives(void* self, bool (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowZero)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param allow bool
///
void q_logvalue3daxisformatter_set_allow_zero(void* self, bool allow);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowZero)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param allow bool
///
void q_logvalue3daxisformatter_super_set_allow_zero(void* self, bool allow);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setAllowZero)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, bool allow)
///
void q_logvalue3daxisformatter_on_set_allow_zero(void* self, void (*callback)(void*, bool));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowZero)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_allow_zero(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowZero)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
bool q_logvalue3daxisformatter_super_allow_zero(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#allowZero)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback bool func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_allow_zero(void* self, bool (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#markDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_mark_dirty(void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#markDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_super_mark_dirty(void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#markDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_mark_dirty(void* self, void (*callback)(void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#axis)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QValue3DAxis* q_logvalue3daxisformatter_axis(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#axis)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QValue3DAxis* q_logvalue3daxisformatter_super_axis(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#axis)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback QValue3DAxis* func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_axis(void* self, QValue3DAxis* (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#gridPositions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_grid_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#gridPositions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_super_grid_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#gridPositions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback libqt_list of float func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_grid_positions(void* self, libqt_list (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#subGridPositions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_sub_grid_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#subGridPositions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_super_sub_grid_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#subGridPositions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback libqt_list of float func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_sub_grid_positions(void* self, libqt_list (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelPositions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_label_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelPositions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
/// @return libqt_list of float
///
libqt_list q_logvalue3daxisformatter_super_label_positions(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelPositions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback libqt_list of float func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_label_positions(void* self, libqt_list (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
const char** q_logvalue3daxisformatter_label_strings(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
const char** q_logvalue3daxisformatter_super_label_strings(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#labelStrings)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback const char** func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_label_strings(void* self, const char** (*callback)(const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setLocale)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param locale QLocale*
///
void q_logvalue3daxisformatter_set_locale(void* self, const void* locale);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setLocale)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param locale QLocale*
///
void q_logvalue3daxisformatter_super_set_locale(void* self, const void* locale);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#setLocale)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, QLocale* locale)
///
void q_logvalue3daxisformatter_on_set_locale(void* self, void (*callback)(void*, const void*));

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#locale)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QLocale* q_logvalue3daxisformatter_locale(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#locale)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QLocale* q_logvalue3daxisformatter_super_locale(const void* self);

/// Inherited from QValue3DAxisFormatter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter.html#locale)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback QLocale* func(QLogValue3DAxisFormatter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_logvalue3daxisformatter_on_locale(void* self, QLocale* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QObject* q_logvalue3daxisformatter_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
QObject* q_logvalue3daxisformatter_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback QObject* func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
int32_t q_logvalue3daxisformatter_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
///
int32_t q_logvalue3daxisformatter_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback int32_t func(QLogValue3DAxisFormatter* self)
///
void q_logvalue3daxisformatter_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal const char*
///
int32_t q_logvalue3daxisformatter_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal const char*
///
int32_t q_logvalue3daxisformatter_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback int32_t func(QLogValue3DAxisFormatter* self, const char* signal)
///
void q_logvalue3daxisformatter_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
bool q_logvalue3daxisformatter_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLogValue3DAxisFormatter*
/// @param signal QMetaMethod*
///
bool q_logvalue3daxisformatter_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback bool func(QLogValue3DAxisFormatter* self, QMetaMethod* signal)
///
void q_logvalue3daxisformatter_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLogValue3DAxisFormatter*
/// @param callback void func(QLogValue3DAxisFormatter* self, const char* objectName)
///
void q_logvalue3daxisformatter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlogvalue3daxisformatter-qtdatavis.html#dtor.QLogValue3DAxisFormatter)
///
/// Delete this object from C++ memory.
///
/// @param self QLogValue3DAxisFormatter*
///
void q_logvalue3daxisformatter_delete(void* self);

#endif
