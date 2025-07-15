#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractseries-qtcharts.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractSeries* self ```
const QMetaObject* q_abstractseries_meta_object(void* self);

/// ``` QAbstractSeries* self, const char* param1 ```
void* q_abstractseries_metacast(void* self, const char* param1);

/// ``` QAbstractSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#type)
///
/// ``` QAbstractSeries* self ```
int64_t q_abstractseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setName)
///
/// ``` QAbstractSeries* self, const char* name ```
void q_abstractseries_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#name)
///
/// ``` QAbstractSeries* self ```
const char* q_abstractseries_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setVisible)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_set_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#isVisible)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacity)
///
/// ``` QAbstractSeries* self ```
double q_abstractseries_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setOpacity)
///
/// ``` QAbstractSeries* self, double opacity ```
void q_abstractseries_set_opacity(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setUseOpenGL)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_set_use_open_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGL)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_use_open_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#chart)
///
/// ``` QAbstractSeries* self ```
QChart* q_abstractseries_chart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#attachAxis)
///
/// ``` QAbstractSeries* self, QAbstractAxis* axis ```
bool q_abstractseries_attach_axis(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#detachAxis)
///
/// ``` QAbstractSeries* self, QAbstractAxis* axis ```
bool q_abstractseries_detach_axis(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#attachedAxes)
///
/// ``` QAbstractSeries* self ```
libqt_list /* of QAbstractAxis* */ q_abstractseries_attached_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#show)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#hide)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#nameChanged)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#nameChanged)
///
/// ``` QAbstractSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractseries_on_name_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#visibleChanged)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#visibleChanged)
///
/// ``` QAbstractSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractseries_on_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacityChanged)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_opacity_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#opacityChanged)
///
/// ``` QAbstractSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractseries_on_opacity_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGLChanged)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_use_open_g_l_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#useOpenGLChanged)
///
/// ``` QAbstractSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setVisible)
///
/// ``` QAbstractSeries* self, bool visible ```
void q_abstractseries_set_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#setUseOpenGL)
///
/// ``` QAbstractSeries* self, bool enable ```
void q_abstractseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractSeries* self, QEvent* event ```
bool q_abstractseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractSeries* self, QObject* watched, QEvent* event ```
bool q_abstractseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractSeries* self ```
const char* q_abstractseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractSeries* self, char* name ```
void q_abstractseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractSeries* self ```
bool q_abstractseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractSeries* self, bool b ```
bool q_abstractseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractSeries* self ```
QThread* q_abstractseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSeries* self, QThread* thread ```
bool q_abstractseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSeries* self, int interval ```
int32_t q_abstractseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSeries* self, int id ```
void q_abstractseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSeries* self, enum Qt__TimerId id ```
void q_abstractseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractSeries* self ```
libqt_list /* of QObject* */ q_abstractseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractSeries* self, QObject* parent ```
void q_abstractseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractSeries* self, QObject* filterObj ```
void q_abstractseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractSeries* self, QObject* obj ```
void q_abstractseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractSeries* self, const char* name, QVariant* value ```
bool q_abstractseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractSeries* self, const char* name ```
QVariant* q_abstractseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractSeries* self ```
const char** q_abstractseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSeries* self ```
QBindingStorage* q_abstractseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSeries* self ```
const QBindingStorage* q_abstractseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSeries* self, void (*slot)(QObject*) ```
void q_abstractseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractSeries* self ```
QObject* q_abstractseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractSeries* self, const char* classname ```
bool q_abstractseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstractseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSeries* self, QObject* param1 ```
void q_abstractseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSeries* self, void (*slot)(QObject*, QObject*) ```
void q_abstractseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractSeries* self, void (*slot)(QObject*, const char*) ```
void q_abstractseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#dtor.QAbstractSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractSeries* self ```
void q_abstractseries_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractseries-qtcharts.html#types

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
