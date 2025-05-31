#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "libqboxset.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html

/// q_boxplotseries_new constructs a new QBoxPlotSeries object.
///
///
QBoxPlotSeries* q_boxplotseries_new();

/// q_boxplotseries_new2 constructs a new QBoxPlotSeries object.
///
/// ``` QObject* parent ```
QBoxPlotSeries* q_boxplotseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxPlotSeries* self ```
const QMetaObject* q_boxplotseries_meta_object(void* self);

/// ``` QBoxPlotSeries* self, const char* param1 ```
void* q_boxplotseries_metacast(void* self, const char* param1);

/// ``` QBoxPlotSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)(QBoxPlotSeries*, enum QMetaObject__Call, int, void*) ```
void q_boxplotseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBoxPlotSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxplotseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_append(void* self, void* box);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#remove)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_remove(void* self, void* box);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#take)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_take(void* self, void* box);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
///
/// ``` QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ boxes ```
bool q_boxplotseries_append_with_boxes(void* self, libqt_list boxes);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#insert)
///
/// ``` QBoxPlotSeries* self, int index, QBoxSet* box ```
bool q_boxplotseries_insert(void* self, int index, void* box);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#count)
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxSets)
///
/// ``` QBoxPlotSeries* self ```
libqt_list /* of QBoxSet* */ q_boxplotseries_box_sets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clear)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// ``` QBoxPlotSeries* self ```
int64_t q_boxplotseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QBoxPlotSeries* self, int64_t (*slot)() ```
void q_boxplotseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QBoxPlotSeries* self ```
int64_t q_boxplotseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxOutlineVisible)
///
/// ``` QBoxPlotSeries* self, bool visible ```
void q_boxplotseries_set_box_outline_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisible)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_box_outline_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxWidth)
///
/// ``` QBoxPlotSeries* self, double width ```
void q_boxplotseries_set_box_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidth)
///
/// ``` QBoxPlotSeries* self ```
double q_boxplotseries_box_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBrush)
///
/// ``` QBoxPlotSeries* self, QBrush* brush ```
void q_boxplotseries_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brush)
///
/// ``` QBoxPlotSeries* self ```
QBrush* q_boxplotseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setPen)
///
/// ``` QBoxPlotSeries* self, QPen* pen ```
void q_boxplotseries_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pen)
///
/// ``` QBoxPlotSeries* self ```
QPen* q_boxplotseries_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_clicked(void* self, void* boxset);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
///
/// ``` QBoxPlotSeries* self, bool status, QBoxSet* boxset ```
void q_boxplotseries_hovered(void* self, bool status, void* boxset);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, bool, QBoxSet*) ```
void q_boxplotseries_on_hovered(void* self, void (*slot)(void*, bool, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_pressed(void* self, void* boxset);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_released(void* self, void* boxset);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_double_clicked(void* self, void* boxset);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_box_outline_visibility_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_box_outline_visibility_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_box_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_box_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
///
/// ``` QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ sets ```
void q_boxplotseries_boxsets_added(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, libqt_list /* of QBoxSet* */ sets ) ```
void q_boxplotseries_on_boxsets_added(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
///
/// ``` QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ sets ```
void q_boxplotseries_boxsets_removed(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, libqt_list /* of QBoxSet* */ sets ) ```
void q_boxplotseries_on_boxsets_removed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxplotseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxplotseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QBoxPlotSeries* self, const char* name ```
void q_boxplotseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QBoxPlotSeries* self ```
const char* q_boxplotseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QBoxPlotSeries* self ```
double q_boxplotseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QBoxPlotSeries* self, double opacity ```
void q_boxplotseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QBoxPlotSeries* self ```
QChart* q_boxplotseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QBoxPlotSeries* self, QAbstractAxis* axis ```
bool q_boxplotseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QBoxPlotSeries* self, QAbstractAxis* axis ```
bool q_boxplotseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QBoxPlotSeries* self ```
libqt_list /* of QAbstractAxis* */ q_boxplotseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBoxPlotSeries* self, bool visible ```
void q_boxplotseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBoxPlotSeries* self, bool enable ```
void q_boxplotseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxPlotSeries* self ```
const char* q_boxplotseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxPlotSeries* self, char* name ```
void q_boxplotseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxPlotSeries* self, bool b ```
bool q_boxplotseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxPlotSeries* self ```
QThread* q_boxplotseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxPlotSeries* self, QThread* thread ```
void q_boxplotseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotSeries* self, int interval ```
int32_t q_boxplotseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxPlotSeries* self, int id ```
void q_boxplotseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxPlotSeries* self ```
const libqt_list /* of QObject* */ q_boxplotseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxPlotSeries* self, QObject* parent ```
void q_boxplotseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxPlotSeries* self, QObject* filterObj ```
void q_boxplotseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxPlotSeries* self, QObject* obj ```
void q_boxplotseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxplotseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxplotseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxplotseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxplotseries_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxPlotSeries* self, const char* name, QVariant* value ```
bool q_boxplotseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxPlotSeries* self, const char* name ```
QVariant* q_boxplotseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxPlotSeries* self ```
const char** q_boxplotseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotSeries* self ```
QBindingStorage* q_boxplotseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotSeries* self ```
const QBindingStorage* q_boxplotseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QObject*) ```
void q_boxplotseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxPlotSeries* self, const char* classname ```
bool q_boxplotseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxplotseries_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self, QObject* param1 ```
void q_boxplotseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self, void (*slot)(QObject*, QObject*) ```
void q_boxplotseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
bool q_boxplotseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
bool q_boxplotseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QEvent*) ```
void q_boxplotseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* watched, QEvent* event ```
bool q_boxplotseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* watched, QEvent* event ```
bool q_boxplotseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QObject*, QEvent*) ```
void q_boxplotseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QTimerEvent* event ```
void q_boxplotseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QTimerEvent* event ```
void q_boxplotseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QTimerEvent*) ```
void q_boxplotseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QChildEvent* event ```
void q_boxplotseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QChildEvent* event ```
void q_boxplotseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QChildEvent*) ```
void q_boxplotseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
void q_boxplotseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
void q_boxplotseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QEvent*) ```
void q_boxplotseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* (*slot)() ```
void q_boxplotseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)() ```
void q_boxplotseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, const char* signal ```
int32_t q_boxplotseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, const char* signal ```
int32_t q_boxplotseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)(QBoxPlotSeries*, const char*) ```
void q_boxplotseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
bool q_boxplotseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
bool q_boxplotseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QBoxPlotSeries* self, void (*slot)(QObject*, const char*) ```
void q_boxplotseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#dtor.QBoxPlotSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_delete(void* self);

#endif
