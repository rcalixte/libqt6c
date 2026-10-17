#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DAXIS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstract3DAxis*
///
const QMetaObject* q_abstract3daxis_meta_object(const void* self);

/// @param self QAbstract3DAxis*
/// @param param1 const char*
///
void* q_abstract3daxis_metacast(void* self, const char* param1);

/// @param self QAbstract3DAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstract3daxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstract3daxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitle)
///
/// @param self QAbstract3DAxis*
/// @param title const char*
///
void q_abstract3daxis_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DAxis*
///
const char* q_abstract3daxis_title(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setLabels)
///
/// @param self QAbstract3DAxis*
/// @param labels const char**
///
void q_abstract3daxis_set_labels(void* self, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstract3DAxis*
///
const char** q_abstract3daxis_labels(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientation)
///
/// @param self const QAbstract3DAxis*
///
/// @return enum QAbstract3DAxis__AxisOrientation
///
int32_t q_abstract3daxis_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#type)
///
/// @param self const QAbstract3DAxis*
///
/// @return enum QAbstract3DAxis__AxisType
///
int32_t q_abstract3daxis_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setMin)
///
/// @param self QAbstract3DAxis*
/// @param min float
///
void q_abstract3daxis_set_min(void* self, float min);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#min)
///
/// @param self const QAbstract3DAxis*
///
float q_abstract3daxis_min(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setMax)
///
/// @param self QAbstract3DAxis*
/// @param max float
///
void q_abstract3daxis_set_max(void* self, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#max)
///
/// @param self const QAbstract3DAxis*
///
float q_abstract3daxis_max(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setAutoAdjustRange)
///
/// @param self QAbstract3DAxis*
/// @param autoAdjust bool
///
void q_abstract3daxis_set_auto_adjust_range(void* self, bool autoAdjust);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isAutoAdjustRange)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_auto_adjust_range(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setRange)
///
/// @param self QAbstract3DAxis*
/// @param min float
/// @param max float
///
void q_abstract3daxis_set_range(void* self, float min, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setLabelAutoRotation)
///
/// @param self QAbstract3DAxis*
/// @param angle float
///
void q_abstract3daxis_set_label_auto_rotation(void* self, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotation)
///
/// @param self const QAbstract3DAxis*
///
float q_abstract3daxis_label_auto_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitleVisible)
///
/// @param self QAbstract3DAxis*
/// @param visible bool
///
void q_abstract3daxis_set_title_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isTitleVisible)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_title_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitleFixed)
///
/// @param self QAbstract3DAxis*
/// @param fixed bool
///
void q_abstract3daxis_set_title_fixed(void* self, bool fixed);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isTitleFixed)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_title_fixed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleChanged)
///
/// @param self QAbstract3DAxis*
/// @param newTitle const char*
///
void q_abstract3daxis_title_changed(void* self, const char* newTitle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, const char* newTitle)
///
void q_abstract3daxis_on_title_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelsChanged)
///
/// @param self QAbstract3DAxis*
///
void q_abstract3daxis_labels_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelsChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self)
///
void q_abstract3daxis_on_labels_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientationChanged)
///
/// @param self QAbstract3DAxis*
/// @param orientation enum QAbstract3DAxis__AxisOrientation
///
void q_abstract3daxis_orientation_changed(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientationChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, enum QAbstract3DAxis__AxisOrientation orientation)
///
void q_abstract3daxis_on_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#minChanged)
///
/// @param self QAbstract3DAxis*
/// @param value float
///
void q_abstract3daxis_min_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#minChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, float value)
///
void q_abstract3daxis_on_min_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#maxChanged)
///
/// @param self QAbstract3DAxis*
/// @param value float
///
void q_abstract3daxis_max_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#maxChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, float value)
///
void q_abstract3daxis_on_max_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#rangeChanged)
///
/// @param self QAbstract3DAxis*
/// @param min float
/// @param max float
///
void q_abstract3daxis_range_changed(void* self, float min, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#rangeChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, float min, float max)
///
void q_abstract3daxis_on_range_changed(void* self, void (*callback)(void*, float, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#autoAdjustRangeChanged)
///
/// @param self QAbstract3DAxis*
/// @param autoAdjust bool
///
void q_abstract3daxis_auto_adjust_range_changed(void* self, bool autoAdjust);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#autoAdjustRangeChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, bool autoAdjust)
///
void q_abstract3daxis_on_auto_adjust_range_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotationChanged)
///
/// @param self QAbstract3DAxis*
/// @param angle float
///
void q_abstract3daxis_label_auto_rotation_changed(void* self, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotationChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, float angle)
///
void q_abstract3daxis_on_label_auto_rotation_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleVisibilityChanged)
///
/// @param self QAbstract3DAxis*
/// @param visible bool
///
void q_abstract3daxis_title_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleVisibilityChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, bool visible)
///
void q_abstract3daxis_on_title_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleFixedChanged)
///
/// @param self QAbstract3DAxis*
/// @param fixed bool
///
void q_abstract3daxis_title_fixed_changed(void* self, bool fixed);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleFixedChanged)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, bool fixed)
///
void q_abstract3daxis_on_title_fixed_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstract3daxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstract3daxis_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstract3DAxis*
/// @param event QEvent*
///
bool q_abstract3daxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstract3DAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstract3daxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DAxis*
///
const char* q_abstract3daxis_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstract3DAxis*
/// @param name const char*
///
void q_abstract3daxis_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstract3DAxis*
/// @param b bool
///
bool q_abstract3daxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstract3DAxis*
///
QThread* q_abstract3daxis_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstract3DAxis*
/// @param thread QThread*
///
bool q_abstract3daxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DAxis*
/// @param interval int
///
int32_t q_abstract3daxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DAxis*
/// @param time int64_t of nanoseconds
///
int32_t q_abstract3daxis_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DAxis*
/// @param id int
///
void q_abstract3daxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DAxis*
/// @param id enum Qt__TimerId
///
void q_abstract3daxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstract3DAxis*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstract3daxis_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstract3DAxis*
/// @param parent QObject*
///
void q_abstract3daxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstract3DAxis*
/// @param filterObj QObject*
///
void q_abstract3daxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstract3DAxis*
/// @param obj QObject*
///
void q_abstract3daxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3daxis_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstract3daxis_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3daxis_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3daxis_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstract3daxis_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
///
bool q_abstract3daxis_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
/// @param receiver QObject*
///
bool q_abstract3daxis_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstract3daxis_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstract3DAxis*
///
void q_abstract3daxis_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstract3DAxis*
///
void q_abstract3daxis_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstract3DAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstract3daxis_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstract3DAxis*
/// @param name const char*
///
QVariant* q_abstract3daxis_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstract3DAxis*
///
const char** q_abstract3daxis_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstract3DAxis*
///
QBindingStorage* q_abstract3daxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstract3DAxis*
///
const QBindingStorage* q_abstract3daxis_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DAxis*
///
void q_abstract3daxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self)
///
void q_abstract3daxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstract3DAxis*
///
QObject* q_abstract3daxis_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstract3DAxis*
/// @param classname const char*
///
bool q_abstract3daxis_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstract3DAxis*
///
void q_abstract3daxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3daxis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DAxis*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3daxis_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstract3daxis_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstract3daxis_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstract3daxis_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
/// @param signal const char*
///
bool q_abstract3daxis_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstract3daxis_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3daxis_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DAxis*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3daxis_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DAxis*
/// @param param1 QObject*
///
void q_abstract3daxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, QObject* param1)
///
void q_abstract3daxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstract3DAxis*
/// @param callback void func(QAbstract3DAxis* self, const char* objectName)
///
void q_abstract3daxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#dtor.QAbstract3DAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstract3DAxis*
///
void q_abstract3daxis_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DAXIS_AXISORIENTATION_AXISORIENTATIONNONE = 0,
    QABSTRACT3DAXIS_AXISORIENTATION_AXISORIENTATIONX = 1,
    QABSTRACT3DAXIS_AXISORIENTATION_AXISORIENTATIONY = 2,
    QABSTRACT3DAXIS_AXISORIENTATION_AXISORIENTATIONZ = 4
} QAbstract3DAxis__AxisOrientation;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DAXIS_AXISTYPE_AXISTYPENONE = 0,
    QABSTRACT3DAXIS_AXISTYPE_AXISTYPECATEGORY = 1,
    QABSTRACT3DAXIS_AXISTYPE_AXISTYPEVALUE = 2
} QAbstract3DAxis__AxisType;

#endif
