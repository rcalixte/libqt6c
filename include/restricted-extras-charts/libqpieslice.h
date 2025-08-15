#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html

/// q_pieslice_new constructs a new QPieSlice object.
///
QPieSlice* q_pieslice_new();

/// q_pieslice_new2 constructs a new QPieSlice object.
///
/// @param label const char*
/// @param value double
QPieSlice* q_pieslice_new2(const char* label, double value);

/// q_pieslice_new3 constructs a new QPieSlice object.
///
/// @param parent QObject*
QPieSlice* q_pieslice_new3(void* parent);

/// q_pieslice_new4 constructs a new QPieSlice object.
///
/// @param label const char*
/// @param value double
/// @param parent QObject*
QPieSlice* q_pieslice_new4(const char* label, double value, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPieSlice*
const QMetaObject* q_pieslice_meta_object(void* self);

/// @param self QPieSlice*
/// @param param1 const char*
void* q_pieslice_metacast(void* self, const char* param1);

/// @param self QPieSlice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pieslice_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPieSlice*
/// @param callback int32_t fn(QPieSlice*, enum QMetaObject__Call, int, void*)
void q_pieslice_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QPieSlice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pieslice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pieslice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabel)
///
/// @param self QPieSlice*
/// @param label const char*
void q_pieslice_set_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSlice*
const char* q_pieslice_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setValue)
///
/// @param self QPieSlice*
/// @param value double
void q_pieslice_set_value(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#value)
///
/// @param self QPieSlice*
double q_pieslice_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
///
/// @param self QPieSlice*
void q_pieslice_set_label_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isLabelVisible)
///
/// @param self QPieSlice*
bool q_pieslice_is_label_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelPosition)
///
/// @param self QPieSlice*
///
/// @return enum QPieSlice__LabelPosition
int64_t q_pieslice_label_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelPosition)
///
/// @param self QPieSlice*
/// @param position enum QPieSlice__LabelPosition
void q_pieslice_set_label_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
///
/// @param self QPieSlice*
void q_pieslice_set_exploded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isExploded)
///
/// @param self QPieSlice*
bool q_pieslice_is_exploded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setPen)
///
/// @param self QPieSlice*
/// @param pen QPen*
void q_pieslice_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pen)
///
/// @param self QPieSlice*
QPen* q_pieslice_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColor)
///
/// @param self QPieSlice*
QColor* q_pieslice_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderColor)
///
/// @param self QPieSlice*
/// @param color QColor*
void q_pieslice_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidth)
///
/// @param self QPieSlice*
int32_t q_pieslice_border_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderWidth)
///
/// @param self QPieSlice*
/// @param width int
void q_pieslice_set_border_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBrush)
///
/// @param self QPieSlice*
/// @param brush QBrush*
void q_pieslice_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brush)
///
/// @param self QPieSlice*
QBrush* q_pieslice_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#color)
///
/// @param self QPieSlice*
QColor* q_pieslice_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setColor)
///
/// @param self QPieSlice*
/// @param color QColor*
void q_pieslice_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelBrush)
///
/// @param self QPieSlice*
/// @param brush QBrush*
void q_pieslice_set_label_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrush)
///
/// @param self QPieSlice*
QBrush* q_pieslice_label_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColor)
///
/// @param self QPieSlice*
QColor* q_pieslice_label_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelColor)
///
/// @param self QPieSlice*
/// @param color QColor*
void q_pieslice_set_label_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelFont)
///
/// @param self QPieSlice*
/// @param font QFont*
void q_pieslice_set_label_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFont)
///
/// @param self QPieSlice*
QFont* q_pieslice_label_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelArmLengthFactor)
///
/// @param self QPieSlice*
/// @param factor double
void q_pieslice_set_label_arm_length_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelArmLengthFactor)
///
/// @param self QPieSlice*
double q_pieslice_label_arm_length_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExplodeDistanceFactor)
///
/// @param self QPieSlice*
/// @param factor double
void q_pieslice_set_explode_distance_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#explodeDistanceFactor)
///
/// @param self QPieSlice*
double q_pieslice_explode_distance_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentage)
///
/// @param self QPieSlice*
double q_pieslice_percentage(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngle)
///
/// @param self QPieSlice*
double q_pieslice_start_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpan)
///
/// @param self QPieSlice*
double q_pieslice_angle_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#series)
///
/// @param self QPieSlice*
QPieSeries* q_pieslice_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
///
/// @param self QPieSlice*
void q_pieslice_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_clicked(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
///
/// @param self QPieSlice*
/// @param state bool
void q_pieslice_hovered(void* self, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, bool)
void q_pieslice_on_hovered(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
///
/// @param self QPieSlice*
void q_pieslice_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_pressed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
///
/// @param self QPieSlice*
void q_pieslice_released(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_released(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
///
/// @param self QPieSlice*
void q_pieslice_double_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_double_clicked(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
///
/// @param self QPieSlice*
void q_pieslice_label_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_label_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
///
/// @param self QPieSlice*
void q_pieslice_value_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_value_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
///
/// @param self QPieSlice*
void q_pieslice_label_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_label_visible_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
///
/// @param self QPieSlice*
void q_pieslice_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_pen_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
///
/// @param self QPieSlice*
void q_pieslice_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_brush_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
///
/// @param self QPieSlice*
void q_pieslice_label_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_label_brush_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
///
/// @param self QPieSlice*
void q_pieslice_label_font_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_label_font_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
///
/// @param self QPieSlice*
void q_pieslice_percentage_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_percentage_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
///
/// @param self QPieSlice*
void q_pieslice_start_angle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_start_angle_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
///
/// @param self QPieSlice*
void q_pieslice_angle_span_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_angle_span_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
///
/// @param self QPieSlice*
void q_pieslice_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_color_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
///
/// @param self QPieSlice*
void q_pieslice_border_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_border_color_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
///
/// @param self QPieSlice*
void q_pieslice_border_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_border_width_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
///
/// @param self QPieSlice*
void q_pieslice_label_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_label_color_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pieslice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pieslice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
///
/// @param self QPieSlice*
/// @param visible bool
void q_pieslice_set_label_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
///
/// @param self QPieSlice*
/// @param exploded bool
void q_pieslice_set_exploded1(void* self, bool exploded);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSlice*
const char* q_pieslice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPieSlice*
/// @param name char*
void q_pieslice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPieSlice*
bool q_pieslice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPieSlice*
bool q_pieslice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPieSlice*
bool q_pieslice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPieSlice*
bool q_pieslice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPieSlice*
/// @param b bool
bool q_pieslice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPieSlice*
QThread* q_pieslice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieSlice*
/// @param thread QThread*
bool q_pieslice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieSlice*
/// @param interval int
int32_t q_pieslice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieSlice*
/// @param id int
void q_pieslice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieSlice*
/// @param id enum Qt__TimerId
void q_pieslice_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPieSlice*
libqt_list /* of QObject* */ q_pieslice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPieSlice*
/// @param parent QObject*
void q_pieslice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPieSlice*
/// @param filterObj QObject*
void q_pieslice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPieSlice*
/// @param obj QObject*
void q_pieslice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pieslice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieSlice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pieslice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pieslice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pieslice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPieSlice*
void q_pieslice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPieSlice*
void q_pieslice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPieSlice*
/// @param name const char*
/// @param value QVariant*
bool q_pieslice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPieSlice*
/// @param name const char*
QVariant* q_pieslice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSlice*
const char** q_pieslice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieSlice*
QBindingStorage* q_pieslice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieSlice*
const QBindingStorage* q_pieslice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSlice*
void q_pieslice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*)
void q_pieslice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPieSlice*
QObject* q_pieslice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPieSlice*
/// @param classname const char*
bool q_pieslice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPieSlice*
void q_pieslice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieSlice*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pieslice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieSlice*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pieslice_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pieslice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieSlice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pieslice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSlice*
/// @param param1 QObject*
void q_pieslice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QObject*)
void q_pieslice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param event QEvent*
bool q_pieslice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param event QEvent*
bool q_pieslice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback bool fn(QPieSlice*, QEvent*)
void q_pieslice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param watched QObject*
/// @param event QEvent*
bool q_pieslice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param watched QObject*
/// @param event QEvent*
bool q_pieslice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback bool fn(QPieSlice*, QObject*, QEvent*)
void q_pieslice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param event QTimerEvent*
void q_pieslice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param event QTimerEvent*
void q_pieslice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QTimerEvent*)
void q_pieslice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param event QChildEvent*
void q_pieslice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param event QChildEvent*
void q_pieslice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QChildEvent*)
void q_pieslice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param event QEvent*
void q_pieslice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param event QEvent*
void q_pieslice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QEvent*)
void q_pieslice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
void q_pieslice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
void q_pieslice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QMetaMethod*)
void q_pieslice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
void q_pieslice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
void q_pieslice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, QMetaMethod*)
void q_pieslice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
QObject* q_pieslice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
QObject* q_pieslice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback QObject* fn()
void q_pieslice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
int32_t q_pieslice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
int32_t q_pieslice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback int32_t fn()
void q_pieslice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param signal const char*
int32_t q_pieslice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param signal const char*
int32_t q_pieslice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback int32_t fn(QPieSlice*, const char*)
void q_pieslice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
bool q_pieslice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSlice*
/// @param signal QMetaMethod*
bool q_pieslice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSlice*
/// @param callback bool fn(QPieSlice*, QMetaMethod*)
void q_pieslice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPieSlice*
/// @param callback void fn(QPieSlice*, const char*)
void q_pieslice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#dtor.QPieSlice)
///
/// Delete this object from C++ memory.
///
/// @param self QPieSlice*
void q_pieslice_delete(void* self);

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html#types

typedef enum {
    QPIESLICE_LABELPOSITION_LABELOUTSIDE = 0,
    QPIESLICE_LABELPOSITION_LABELINSIDEHORIZONTAL = 1,
    QPIESLICE_LABELPOSITION_LABELINSIDETANGENTIAL = 2,
    QPIESLICE_LABELPOSITION_LABELINSIDENORMAL = 3
} QPieSlice__LabelPosition;

#endif
