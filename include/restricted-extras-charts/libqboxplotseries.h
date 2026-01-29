#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBOXPLOTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBOXPLOTSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html)

/// q_boxplotseries_new constructs a new QBoxPlotSeries object.
///
QBoxPlotSeries* q_boxplotseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html)

/// q_boxplotseries_new2 constructs a new QBoxPlotSeries object.
///
/// @param parent QObject*
///
QBoxPlotSeries* q_boxplotseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBoxPlotSeries*
///
const QMetaObject* q_boxplotseries_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBoxPlotSeries*
/// @param callback const QMetaObject* func()
///
void q_boxplotseries_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBoxPlotSeries*
///
const QMetaObject* q_boxplotseries_qbase_meta_object(void* self);

/// @param self QBoxPlotSeries*
/// @param param1 const char*
///
void* q_boxplotseries_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBoxPlotSeries*
/// @param callback void* func(QBoxPlotSeries* self, const char* param1)
///
void q_boxplotseries_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBoxPlotSeries*
/// @param param1 const char*
///
void* q_boxplotseries_qbase_metacast(void* self, const char* param1);

/// @param self QBoxPlotSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxplotseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBoxPlotSeries*
/// @param callback int32_t func(QBoxPlotSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_boxplotseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBoxPlotSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxplotseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_boxplotseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
///
/// @param self QBoxPlotSeries*
/// @param box QBoxSet*
///
bool q_boxplotseries_append(void* self, void* box);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#remove)
///
/// @param self QBoxPlotSeries*
/// @param box QBoxSet*
///
bool q_boxplotseries_remove(void* self, void* box);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#take)
///
/// @param self QBoxPlotSeries*
/// @param box QBoxSet*
///
bool q_boxplotseries_take(void* self, void* box);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#append)
///
/// @param self QBoxPlotSeries*
/// @param boxes libqt_list of QBoxSet*
///
bool q_boxplotseries_append2(void* self, libqt_list /* of QBoxSet* */ boxes);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#insert)
///
/// @param self QBoxPlotSeries*
/// @param index int
/// @param box QBoxSet*
///
bool q_boxplotseries_insert(void* self, int index, void* box);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#count)
///
/// @param self QBoxPlotSeries*
///
int32_t q_boxplotseries_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxSets)
///
/// @param self QBoxPlotSeries*
///
/// @return libqt_list of QBoxSet*
///
libqt_list q_boxplotseries_box_sets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clear)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// @param self QBoxPlotSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_boxplotseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBoxPlotSeries*
/// @param callback int32_t func()
///
void q_boxplotseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBoxPlotSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_boxplotseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxOutlineVisible)
///
/// @param self QBoxPlotSeries*
/// @param visible bool
///
void q_boxplotseries_set_box_outline_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisible)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_box_outline_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBoxWidth)
///
/// @param self QBoxPlotSeries*
/// @param width double
///
void q_boxplotseries_set_box_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidth)
///
/// @param self QBoxPlotSeries*
///
double q_boxplotseries_box_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setBrush)
///
/// @param self QBoxPlotSeries*
/// @param brush QBrush*
///
void q_boxplotseries_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brush)
///
/// @param self QBoxPlotSeries*
///
QBrush* q_boxplotseries_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#setPen)
///
/// @param self QBoxPlotSeries*
/// @param pen QPen*
///
void q_boxplotseries_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pen)
///
/// @param self QBoxPlotSeries*
///
QPen* q_boxplotseries_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
///
/// @param self QBoxPlotSeries*
/// @param boxset QBoxSet*
///
void q_boxplotseries_clicked(void* self, void* boxset);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#clicked)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet* boxset)
///
void q_boxplotseries_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
///
/// @param self QBoxPlotSeries*
/// @param status bool
/// @param boxset QBoxSet*
///
void q_boxplotseries_hovered(void* self, bool status, void* boxset);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#hovered)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, bool status, QBoxSet* boxset)
///
void q_boxplotseries_on_hovered(void* self, void (*callback)(void*, bool, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
///
/// @param self QBoxPlotSeries*
/// @param boxset QBoxSet*
///
void q_boxplotseries_pressed(void* self, void* boxset);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#pressed)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet* boxset)
///
void q_boxplotseries_on_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
///
/// @param self QBoxPlotSeries*
/// @param boxset QBoxSet*
///
void q_boxplotseries_released(void* self, void* boxset);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#released)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet* boxset)
///
void q_boxplotseries_on_released(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
///
/// @param self QBoxPlotSeries*
/// @param boxset QBoxSet*
///
void q_boxplotseries_double_clicked(void* self, void* boxset);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#doubleClicked)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet* boxset)
///
void q_boxplotseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#countChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#penChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#brushChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_box_outline_visibility_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxOutlineVisibilityChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_box_outline_visibility_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_box_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxWidthChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_box_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
///
/// @param self QBoxPlotSeries*
/// @param sets libqt_list of QBoxSet*
///
void q_boxplotseries_boxsets_added(void* self, libqt_list /* of QBoxSet* */ sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsAdded)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet** sets)
///
void q_boxplotseries_on_boxsets_added(void* self, void (*callback)(void*, QBoxSet**));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
///
/// @param self QBoxPlotSeries*
/// @param sets libqt_list of QBoxSet*
///
void q_boxplotseries_boxsets_removed(void* self, libqt_list /* of QBoxSet* */ sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#boxsetsRemoved)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QBoxSet** sets)
///
void q_boxplotseries_on_boxsets_removed(void* self, void (*callback)(void*, QBoxSet**));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_boxplotseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_boxplotseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QBoxPlotSeries*
/// @param name const char*
///
void q_boxplotseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBoxPlotSeries*
///
const char* q_boxplotseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QBoxPlotSeries*
///
double q_boxplotseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QBoxPlotSeries*
/// @param opacity double
///
void q_boxplotseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QBoxPlotSeries*
///
QChart* q_boxplotseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QBoxPlotSeries*
/// @param axis QAbstractAxis*
///
bool q_boxplotseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QBoxPlotSeries*
/// @param axis QAbstractAxis*
///
bool q_boxplotseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QBoxPlotSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_boxplotseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QBoxPlotSeries*
/// @param visible bool
///
void q_boxplotseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QBoxPlotSeries*
/// @param enable bool
///
void q_boxplotseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBoxPlotSeries*
///
const char* q_boxplotseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBoxPlotSeries*
/// @param name char*
///
void q_boxplotseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBoxPlotSeries*
///
bool q_boxplotseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBoxPlotSeries*
/// @param b bool
///
bool q_boxplotseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBoxPlotSeries*
///
QThread* q_boxplotseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBoxPlotSeries*
/// @param thread QThread*
///
bool q_boxplotseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotSeries*
/// @param interval int
///
int32_t q_boxplotseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_boxplotseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxPlotSeries*
/// @param id int
///
void q_boxplotseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxPlotSeries*
/// @param id enum Qt__TimerId
///
void q_boxplotseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBoxPlotSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_boxplotseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBoxPlotSeries*
/// @param parent QObject*
///
void q_boxplotseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBoxPlotSeries*
/// @param filterObj QObject*
///
void q_boxplotseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBoxPlotSeries*
/// @param obj QObject*
///
void q_boxplotseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_boxplotseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxPlotSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_boxplotseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_boxplotseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_boxplotseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBoxPlotSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_boxplotseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBoxPlotSeries*
/// @param name const char*
///
QVariant* q_boxplotseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBoxPlotSeries*
///
const char** q_boxplotseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxPlotSeries*
///
QBindingStorage* q_boxplotseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxPlotSeries*
///
const QBindingStorage* q_boxplotseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self)
///
void q_boxplotseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBoxPlotSeries*
///
QObject* q_boxplotseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBoxPlotSeries*
/// @param classname const char*
///
bool q_boxplotseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_boxplotseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_boxplotseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_boxplotseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxPlotSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_boxplotseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotSeries*
/// @param param1 QObject*
///
void q_boxplotseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QObject* param1)
///
void q_boxplotseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QEvent*
///
bool q_boxplotseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QEvent*
///
bool q_boxplotseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback bool func(QBoxPlotSeries* self, QEvent* event)
///
void q_boxplotseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxplotseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxplotseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback bool func(QBoxPlotSeries* self, QObject* watched, QEvent* event)
///
void q_boxplotseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QTimerEvent*
///
void q_boxplotseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QTimerEvent*
///
void q_boxplotseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QTimerEvent* event)
///
void q_boxplotseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QChildEvent*
///
void q_boxplotseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QChildEvent*
///
void q_boxplotseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QChildEvent* event)
///
void q_boxplotseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QEvent*
///
void q_boxplotseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param event QEvent*
///
void q_boxplotseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QEvent* event)
///
void q_boxplotseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
void q_boxplotseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
void q_boxplotseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QMetaMethod* signal)
///
void q_boxplotseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
void q_boxplotseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
void q_boxplotseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, QMetaMethod* signal)
///
void q_boxplotseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
///
QObject* q_boxplotseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
///
QObject* q_boxplotseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback QObject* func()
///
void q_boxplotseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
///
int32_t q_boxplotseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
///
int32_t q_boxplotseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback int32_t func()
///
void q_boxplotseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal const char*
///
int32_t q_boxplotseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal const char*
///
int32_t q_boxplotseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback int32_t func(QBoxPlotSeries* self, const char* signal)
///
void q_boxplotseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
bool q_boxplotseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param signal QMetaMethod*
///
bool q_boxplotseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotSeries*
/// @param callback bool func(QBoxPlotSeries* self, QMetaMethod* signal)
///
void q_boxplotseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBoxPlotSeries*
/// @param callback void func(QBoxPlotSeries* self, const char* objectName)
///
void q_boxplotseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotseries-qtcharts.html#dtor.QBoxPlotSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QBoxPlotSeries*
///
void q_boxplotseries_delete(void* self);

#endif
