#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qbarset-qtcharts.html

/// q_barset_new constructs a new QBarSet object.
///
/// ``` const char* label ```
QBarSet* q_barset_new(const char* label);

/// q_barset_new2 constructs a new QBarSet object.
///
/// ``` const char* label, QObject* parent ```
QBarSet* q_barset_new2(const char* label, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarSet* self ```
const QMetaObject* q_barset_meta_object(void* self);

/// ``` QBarSet* self, const char* param1 ```
void* q_barset_metacast(void* self, const char* param1);

/// ``` QBarSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barset_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBarSet* self, int32_t (*slot)(QBarSet*, enum QMetaObject__Call, int, void*) ```
void q_barset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBarSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barset_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabel)
///
/// ``` QBarSet* self, const char* label ```
void q_barset_set_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#label)
///
/// ``` QBarSet* self ```
const char* q_barset_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
///
/// ``` QBarSet* self, double value ```
void q_barset_append(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#append)
///
/// ``` QBarSet* self, libqt_list /* of double */ values ```
void q_barset_append2(void* self, libqt_list values);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-lt-lt)
///
/// ``` QBarSet* self, double* value ```
QBarSet* q_barset_operator_shift_left(void* self, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#insert)
///
/// ``` QBarSet* self, int index, double value ```
void q_barset_insert(void* self, int index, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
///
/// ``` QBarSet* self, int index ```
void q_barset_remove(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#replace)
///
/// ``` QBarSet* self, int index, double value ```
void q_barset_replace(void* self, int index, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#at)
///
/// ``` QBarSet* self, int index ```
double q_barset_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#operator-5b-5d)
///
/// ``` QBarSet* self, int index ```
double q_barset_operator_subscript(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#count)
///
/// ``` QBarSet* self ```
int32_t q_barset_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#sum)
///
/// ``` QBarSet* self ```
double q_barset_sum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setPen)
///
/// ``` QBarSet* self, QPen* pen ```
void q_barset_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pen)
///
/// ``` QBarSet* self ```
QPen* q_barset_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBrush)
///
/// ``` QBarSet* self, QBrush* brush ```
void q_barset_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brush)
///
/// ``` QBarSet* self ```
QBrush* q_barset_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelBrush)
///
/// ``` QBarSet* self, QBrush* brush ```
void q_barset_set_label_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrush)
///
/// ``` QBarSet* self ```
QBrush* q_barset_label_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelFont)
///
/// ``` QBarSet* self, QFont* font ```
void q_barset_set_label_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFont)
///
/// ``` QBarSet* self ```
QFont* q_barset_label_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#color)
///
/// ``` QBarSet* self ```
QColor* q_barset_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBorderColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_label_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setLabelColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_label_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_selected_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setSelectedColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_selected_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#isBarSelected)
///
/// ``` QBarSet* self, int index ```
bool q_barset_is_bar_selected(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBar)
///
/// ``` QBarSet* self, int index ```
void q_barset_select_bar(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBar)
///
/// ``` QBarSet* self, int index ```
void q_barset_deselect_bar(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#setBarSelected)
///
/// ``` QBarSet* self, int index, bool selected ```
void q_barset_set_bar_selected(void* self, int index, bool selected);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectAllBars)
///
/// ``` QBarSet* self ```
void q_barset_select_all_bars(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectAllBars)
///
/// ``` QBarSet* self ```
void q_barset_deselect_all_bars(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectBars)
///
/// ``` QBarSet* self, libqt_list /* of int */ indexes ```
void q_barset_select_bars(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#deselectBars)
///
/// ``` QBarSet* self, libqt_list /* of int */ indexes ```
void q_barset_deselect_bars(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#toggleSelection)
///
/// ``` QBarSet* self, libqt_list /* of int */ indexes ```
void q_barset_toggle_selection(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBars)
///
/// ``` QBarSet* self ```
libqt_list /* of int */ q_barset_selected_bars(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
///
/// ``` QBarSet* self, int index ```
void q_barset_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#clicked)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
///
/// ``` QBarSet* self, bool status, int index ```
void q_barset_hovered(void* self, bool status, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#hovered)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, bool, int) ```
void q_barset_on_hovered(void* self, void (*slot)(void*, bool, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
///
/// ``` QBarSet* self, int index ```
void q_barset_pressed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#pressed)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_pressed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
///
/// ``` QBarSet* self, int index ```
void q_barset_released(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#released)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_released(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
///
/// ``` QBarSet* self, int index ```
void q_barset_double_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#doubleClicked)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_double_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
///
/// ``` QBarSet* self ```
void q_barset_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#penChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
///
/// ``` QBarSet* self ```
void q_barset_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#brushChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelBrushChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_font_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelFontChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_font_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#colorChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_border_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#borderColorChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_border_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_label_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#labelColorChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_label_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_selected_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedColorChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_selected_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_values_added(void* self, int index, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesAdded)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int, int) ```
void q_barset_on_values_added(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_values_removed(void* self, int index, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valuesRemoved)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int, int) ```
void q_barset_on_values_removed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
///
/// ``` QBarSet* self, int index ```
void q_barset_value_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#valueChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
///
/// ``` QBarSet* self, libqt_list /* of int */ indexes ```
void q_barset_selected_bars_changed(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#selectedBarsChanged)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, libqt_list /* of int */ indexes ) ```
void q_barset_on_selected_bars_changed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barset_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barset_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#remove)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_remove2(void* self, int index, int count);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarSet* self ```
const char* q_barset_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarSet* self, char* name ```
void q_barset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarSet* self ```
bool q_barset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarSet* self ```
bool q_barset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarSet* self ```
bool q_barset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarSet* self ```
bool q_barset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarSet* self, bool b ```
bool q_barset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarSet* self ```
QThread* q_barset_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarSet* self, QThread* thread ```
bool q_barset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSet* self, int interval ```
int32_t q_barset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarSet* self, int id ```
void q_barset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarSet* self, enum Qt__TimerId id ```
void q_barset_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarSet* self ```
libqt_list /* of QObject* */ q_barset_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarSet* self, QObject* parent ```
void q_barset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarSet* self, QObject* filterObj ```
void q_barset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarSet* self, QObject* obj ```
void q_barset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barset_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSet* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barset_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barset_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barset_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarSet* self ```
void q_barset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarSet* self ```
void q_barset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarSet* self, const char* name, QVariant* value ```
bool q_barset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarSet* self, const char* name ```
QVariant* q_barset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarSet* self ```
const char** q_barset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarSet* self ```
QBindingStorage* q_barset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarSet* self ```
const QBindingStorage* q_barset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self ```
void q_barset_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarSet* self ```
QObject* q_barset_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarSet* self, const char* classname ```
bool q_barset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarSet* self ```
void q_barset_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarSet* self, QThread* thread, Disambiguated_t* param2 ```
bool q_barset_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSet* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barset_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSet* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self, QObject* param1 ```
void q_barset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QObject*) ```
void q_barset_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
bool q_barset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
bool q_barset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QEvent*) ```
void q_barset_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QObject* watched, QEvent* event ```
bool q_barset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QObject* watched, QEvent* event ```
bool q_barset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QObject*, QEvent*) ```
void q_barset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QTimerEvent* event ```
void q_barset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QTimerEvent* event ```
void q_barset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QTimerEvent*) ```
void q_barset_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QChildEvent* event ```
void q_barset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QChildEvent* event ```
void q_barset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QChildEvent*) ```
void q_barset_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
void q_barset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
void q_barset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QEvent*) ```
void q_barset_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self ```
QObject* q_barset_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self ```
QObject* q_barset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, QObject* (*slot)() ```
void q_barset_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self ```
int32_t q_barset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self ```
int32_t q_barset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, int32_t (*slot)() ```
void q_barset_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, const char* signal ```
int32_t q_barset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, const char* signal ```
int32_t q_barset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, int32_t (*slot)(QBarSet*, const char*) ```
void q_barset_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
bool q_barset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
bool q_barset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, const char*) ```
void q_barset_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset-qtcharts.html#dtor.QBarSet)
///
/// Delete this object from C++ memory.
///
/// ``` QBarSet* self ```
void q_barset_delete(void* self);

#endif
