#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARSET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html)

/// q_barset_new constructs a new QBarSet object.
///
/// @param label const char*
///
QBarSet* q_barset_new(const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html)

/// q_barset_new2 constructs a new QBarSet object.
///
/// @param label const char*
/// @param parent QObject*
///
QBarSet* q_barset_new2(const char* label, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBarSet*
///
const QMetaObject* q_barset_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBarSet*
/// @param callback const QMetaObject* func()
///
void q_barset_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBarSet*
///
const QMetaObject* q_barset_qbase_meta_object(void* self);

/// @param self QBarSet*
/// @param param1 const char*
///
void* q_barset_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBarSet*
/// @param callback void* func(QBarSet* self, const char* param1)
///
void q_barset_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBarSet*
/// @param param1 const char*
///
void* q_barset_qbase_metacast(void* self, const char* param1);

/// @param self QBarSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barset_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarSet*
/// @param callback int32_t func(QBarSet* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_barset_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBarSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barset_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_barset_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabel)
///
/// @param self QBarSet*
/// @param label const char*
///
void q_barset_set_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarSet*
///
const char* q_barset_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
///
/// @param self QBarSet*
/// @param value double
///
void q_barset_append(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
///
/// @param self QBarSet*
/// @param values libqt_list of double
///
void q_barset_append2(void* self, libqt_list /* of double */ values);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-lt-lt)
///
/// @param self QBarSet*
/// @param value double*
///
QBarSet* q_barset_operator_shift_left(void* self, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#insert)
///
/// @param self QBarSet*
/// @param index int
/// @param value double
///
void q_barset_insert(void* self, int index, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_remove(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#replace)
///
/// @param self QBarSet*
/// @param index int
/// @param value double
///
void q_barset_replace(void* self, int index, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#at)
///
/// @param self QBarSet*
/// @param index int
///
double q_barset_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-5b-5d)
///
/// @param self QBarSet*
/// @param index int
///
double q_barset_operator_subscript(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#count)
///
/// @param self QBarSet*
///
int32_t q_barset_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#sum)
///
/// @param self QBarSet*
///
double q_barset_sum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setPen)
///
/// @param self QBarSet*
/// @param pen QPen*
///
void q_barset_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pen)
///
/// @param self QBarSet*
///
QPen* q_barset_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBrush)
///
/// @param self QBarSet*
/// @param brush QBrush*
///
void q_barset_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brush)
///
/// @param self QBarSet*
///
QBrush* q_barset_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelBrush)
///
/// @param self QBarSet*
/// @param brush QBrush*
///
void q_barset_set_label_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrush)
///
/// @param self QBarSet*
///
QBrush* q_barset_label_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelFont)
///
/// @param self QBarSet*
/// @param font QFont*
///
void q_barset_set_label_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFont)
///
/// @param self QBarSet*
///
QFont* q_barset_label_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#color)
///
/// @param self QBarSet*
///
QColor* q_barset_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setColor)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColor)
///
/// @param self QBarSet*
///
QColor* q_barset_border_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBorderColor)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_set_border_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColor)
///
/// @param self QBarSet*
///
QColor* q_barset_label_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelColor)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_set_label_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColor)
///
/// @param self QBarSet*
///
QColor* q_barset_selected_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setSelectedColor)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_set_selected_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#isBarSelected)
///
/// @param self QBarSet*
/// @param index int
///
bool q_barset_is_bar_selected(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBar)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_select_bar(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBar)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_deselect_bar(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBarSelected)
///
/// @param self QBarSet*
/// @param index int
/// @param selected bool
///
void q_barset_set_bar_selected(void* self, int index, bool selected);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectAllBars)
///
/// @param self QBarSet*
///
void q_barset_select_all_bars(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectAllBars)
///
/// @param self QBarSet*
///
void q_barset_deselect_all_bars(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBars)
///
/// @param self QBarSet*
/// @param indexes libqt_list of int
///
void q_barset_select_bars(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBars)
///
/// @param self QBarSet*
/// @param indexes libqt_list of int
///
void q_barset_deselect_bars(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#toggleSelection)
///
/// @param self QBarSet*
/// @param indexes libqt_list of int
///
void q_barset_toggle_selection(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBars)
///
/// @param self QBarSet*
///
/// @return libqt_list of int
///
libqt_list q_barset_selected_bars(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_clicked(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index)
///
void q_barset_on_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
///
/// @param self QBarSet*
/// @param status bool
/// @param index int
///
void q_barset_hovered(void* self, bool status, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, bool status, int index)
///
void q_barset_on_hovered(void* self, void (*callback)(void*, bool, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_pressed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index)
///
void q_barset_on_pressed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_released(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index)
///
void q_barset_on_released(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_double_clicked(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index)
///
void q_barset_on_double_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
///
/// @param self QBarSet*
///
void q_barset_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
///
/// @param self QBarSet*
///
void q_barset_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
///
/// @param self QBarSet*
///
void q_barset_label_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_label_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
///
/// @param self QBarSet*
///
void q_barset_label_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_label_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
///
/// @param self QBarSet*
///
void q_barset_label_font_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_label_font_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QColor* color)
///
void q_barset_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_border_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QColor* color)
///
void q_barset_on_border_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_label_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QColor* color)
///
void q_barset_on_label_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
///
/// @param self QBarSet*
/// @param color QColor*
///
void q_barset_selected_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QColor* color)
///
void q_barset_on_selected_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
///
/// @param self QBarSet*
/// @param index int
/// @param count int
///
void q_barset_values_added(void* self, int index, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index, int count)
///
void q_barset_on_values_added(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
///
/// @param self QBarSet*
/// @param index int
/// @param count int
///
void q_barset_values_removed(void* self, int index, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index, int count)
///
void q_barset_on_values_removed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
///
/// @param self QBarSet*
/// @param index int
///
void q_barset_value_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int index)
///
void q_barset_on_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
///
/// @param self QBarSet*
/// @param indexes libqt_list of int
///
void q_barset_selected_bars_changed(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, int* )
///
void q_barset_on_selected_bars_changed(void* self, void (*callback)(void*, libqt_list /* of int */));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_barset_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_barset_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
///
/// @param self QBarSet*
/// @param index int
/// @param count int
///
void q_barset_remove2(void* self, int index, int count);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarSet*
///
const char* q_barset_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarSet*
/// @param name char*
///
void q_barset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBarSet*
///
bool q_barset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBarSet*
///
bool q_barset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBarSet*
///
bool q_barset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBarSet*
///
bool q_barset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarSet*
/// @param b bool
///
bool q_barset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBarSet*
///
QThread* q_barset_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarSet*
/// @param thread QThread*
///
bool q_barset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSet*
/// @param interval int
///
int32_t q_barset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSet*
/// @param time int64_t of nanoseconds
///
int32_t q_barset_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarSet*
/// @param id int
///
void q_barset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarSet*
/// @param id enum Qt__TimerId
///
void q_barset_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBarSet*
///
/// @return libqt_list of QObject*
///
libqt_list q_barset_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarSet*
/// @param parent QObject*
///
void q_barset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarSet*
/// @param filterObj QObject*
///
void q_barset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarSet*
/// @param obj QObject*
///
void q_barset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_barset_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_barset_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_barset_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barset_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_barset_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
///
bool q_barset_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
/// @param receiver QObject*
///
bool q_barset_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_barset_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBarSet*
///
void q_barset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBarSet*
///
void q_barset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarSet*
/// @param name const char*
/// @param value QVariant*
///
bool q_barset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBarSet*
/// @param name const char*
///
QVariant* q_barset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBarSet*
///
const char** q_barset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarSet*
///
QBindingStorage* q_barset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarSet*
///
const QBindingStorage* q_barset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSet*
///
void q_barset_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self)
///
void q_barset_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBarSet*
///
QObject* q_barset_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBarSet*
/// @param classname const char*
///
bool q_barset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarSet*
///
void q_barset_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSet*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_barset_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSet*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_barset_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_barset_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_barset_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_barset_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
/// @param signal const char*
///
bool q_barset_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_barset_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barset_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSet*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barset_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSet*
/// @param param1 QObject*
///
void q_barset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QObject* param1)
///
void q_barset_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param event QEvent*
///
bool q_barset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param event QEvent*
///
bool q_barset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback bool func(QBarSet* self, QEvent* event)
///
void q_barset_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback bool func(QBarSet* self, QObject* watched, QEvent* event)
///
void q_barset_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param event QTimerEvent*
///
void q_barset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param event QTimerEvent*
///
void q_barset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QTimerEvent* event)
///
void q_barset_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param event QChildEvent*
///
void q_barset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param event QChildEvent*
///
void q_barset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QChildEvent* event)
///
void q_barset_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param event QEvent*
///
void q_barset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param event QEvent*
///
void q_barset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QEvent* event)
///
void q_barset_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
void q_barset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
void q_barset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QMetaMethod* signal)
///
void q_barset_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
void q_barset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
void q_barset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, QMetaMethod* signal)
///
void q_barset_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
///
QObject* q_barset_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
///
QObject* q_barset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback QObject* func()
///
void q_barset_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
///
int32_t q_barset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
///
int32_t q_barset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback int32_t func()
///
void q_barset_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param signal const char*
///
int32_t q_barset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param signal const char*
///
int32_t q_barset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback int32_t func(QBarSet* self, const char* signal)
///
void q_barset_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
bool q_barset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSet*
/// @param signal QMetaMethod*
///
bool q_barset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSet*
/// @param callback bool func(QBarSet* self, QMetaMethod* signal)
///
void q_barset_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarSet*
/// @param callback void func(QBarSet* self, const char* objectName)
///
void q_barset_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarset-qtcharts.html#dtor.QBarSet)
///
/// Delete this object from C++ memory.
///
/// @param self QBarSet*
///
void q_barset_delete(void* self);

#endif
