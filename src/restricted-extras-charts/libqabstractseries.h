#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQABSTRACTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQABSTRACTSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractSeries*
///
const QMetaObject* q_abstractseries_meta_object(void* self);

/// @param self QAbstractSeries*
/// @param param1 const char*
///
void* q_abstractseries_metacast(void* self, const char* param1);

/// @param self QAbstractSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#type)
///
/// @param self QAbstractSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_abstractseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setName)
///
/// @param self QAbstractSeries*
/// @param name const char*
///
void q_abstractseries_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSeries*
///
const char* q_abstractseries_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setVisible)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_set_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#isVisible)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacity)
///
/// @param self QAbstractSeries*
///
double q_abstractseries_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setOpacity)
///
/// @param self QAbstractSeries*
/// @param opacity double
///
void q_abstractseries_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setUseOpenGL)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_set_use_open_g_l(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGL)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_use_open_g_l(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#chart)
///
/// @param self QAbstractSeries*
///
QChart* q_abstractseries_chart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#attachAxis)
///
/// @param self QAbstractSeries*
/// @param axis QAbstractAxis*
///
bool q_abstractseries_attach_axis(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#detachAxis)
///
/// @param self QAbstractSeries*
/// @param axis QAbstractAxis*
///
bool q_abstractseries_detach_axis(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#attachedAxes)
///
/// @param self QAbstractSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_abstractseries_attached_axes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#show)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#hide)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#nameChanged)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_name_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#nameChanged)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self)
///
void q_abstractseries_on_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#visibleChanged)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_visible_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#visibleChanged)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self)
///
void q_abstractseries_on_visible_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacityChanged)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_opacity_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacityChanged)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self)
///
void q_abstractseries_on_opacity_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGLChanged)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_use_open_g_l_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGLChanged)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self)
///
void q_abstractseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractseries_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setVisible)
///
/// @param self QAbstractSeries*
/// @param visible bool
///
void q_abstractseries_set_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setUseOpenGL)
///
/// @param self QAbstractSeries*
/// @param enable bool
///
void q_abstractseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractSeries*
/// @param event QEvent*
///
bool q_abstractseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSeries*
///
const char* q_abstractseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractSeries*
/// @param name char*
///
void q_abstractseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractSeries*
/// @param b bool
///
bool q_abstractseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractSeries*
///
QThread* q_abstractseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractSeries*
/// @param thread QThread*
///
bool q_abstractseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSeries*
/// @param interval int
///
int32_t q_abstractseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSeries*
/// @param id int
///
void q_abstractseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSeries*
/// @param id enum Qt__TimerId
///
void q_abstractseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractSeries*
/// @param parent QObject*
///
void q_abstractseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractSeries*
/// @param filterObj QObject*
///
void q_abstractseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractSeries*
/// @param obj QObject*
///
void q_abstractseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractseries_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractseries_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractseries_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractseries_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractseries_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
///
bool q_abstractseries_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
/// @param receiver QObject*
///
bool q_abstractseries_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractseries_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractSeries*
/// @param name const char*
///
QVariant* q_abstractseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSeries*
///
const char** q_abstractseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSeries*
///
QBindingStorage* q_abstractseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSeries*
///
const QBindingStorage* q_abstractseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self)
///
void q_abstractseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractSeries*
///
QObject* q_abstractseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractSeries*
/// @param classname const char*
///
bool q_abstractseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractSeries*
///
void q_abstractseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
/// @param signal const char*
///
bool q_abstractseries_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractseries_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractseries_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractseries_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSeries*
/// @param param1 QObject*
///
void q_abstractseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self, QObject* param1)
///
void q_abstractseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractSeries*
/// @param callback void func(QAbstractSeries* self, const char* objectName)
///
void q_abstractseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#dtor.QAbstractSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractSeries*
///
void q_abstractseries_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#public-types)

typedef enum {
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPELINE = 0,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEAREA = 1,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEBAR = 2,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESTACKEDBAR = 3,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEPERCENTBAR = 4,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEPIE = 5,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESCATTER = 6,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESPLINE = 7,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALBAR = 8,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALSTACKEDBAR = 9,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALPERCENTBAR = 10,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEBOXPLOT = 11,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPECANDLESTICK = 12
} QAbstractSeries__SeriesType;

#endif
