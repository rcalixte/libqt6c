#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include "libqpieseries.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html

/// q_pieslice_new constructs a new QPieSlice object.
///
///
QPieSlice* q_pieslice_new();

/// q_pieslice_new2 constructs a new QPieSlice object.
///
/// ``` const char* label, double value ```
QPieSlice* q_pieslice_new2(const char* label, double value);

/// q_pieslice_new3 constructs a new QPieSlice object.
///
/// ``` QObject* parent ```
QPieSlice* q_pieslice_new3(void* parent);

/// q_pieslice_new4 constructs a new QPieSlice object.
///
/// ``` const char* label, double value, QObject* parent ```
QPieSlice* q_pieslice_new4(const char* label, double value, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPieSlice* self ```
const QMetaObject* q_pieslice_meta_object(void* self);

/// ``` QPieSlice* self, const char* param1 ```
void* q_pieslice_metacast(void* self, const char* param1);

/// ``` QPieSlice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieslice_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPieSlice* self, int32_t (*slot)(QPieSlice*, enum QMetaObject__Call, int, void*) ```
void q_pieslice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPieSlice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieslice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pieslice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabel)
///
/// ``` QPieSlice* self, const char* label ```
void q_pieslice_set_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#label)
///
/// ``` QPieSlice* self ```
const char* q_pieslice_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setValue)
///
/// ``` QPieSlice* self, double value ```
void q_pieslice_set_value(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#value)
///
/// ``` QPieSlice* self ```
double q_pieslice_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
///
/// ``` QPieSlice* self ```
void q_pieslice_set_label_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isLabelVisible)
///
/// ``` QPieSlice* self ```
bool q_pieslice_is_label_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelPosition)
///
/// ``` QPieSlice* self ```
int64_t q_pieslice_label_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelPosition)
///
/// ``` QPieSlice* self, enum QPieSlice__LabelPosition position ```
void q_pieslice_set_label_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
///
/// ``` QPieSlice* self ```
void q_pieslice_set_exploded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#isExploded)
///
/// ``` QPieSlice* self ```
bool q_pieslice_is_exploded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setPen)
///
/// ``` QPieSlice* self, QPen* pen ```
void q_pieslice_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pen)
///
/// ``` QPieSlice* self ```
QPen* q_pieslice_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColor)
///
/// ``` QPieSlice* self ```
QColor* q_pieslice_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderColor)
///
/// ``` QPieSlice* self, QColor* color ```
void q_pieslice_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidth)
///
/// ``` QPieSlice* self ```
int32_t q_pieslice_border_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBorderWidth)
///
/// ``` QPieSlice* self, int width ```
void q_pieslice_set_border_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setBrush)
///
/// ``` QPieSlice* self, QBrush* brush ```
void q_pieslice_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brush)
///
/// ``` QPieSlice* self ```
QBrush* q_pieslice_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#color)
///
/// ``` QPieSlice* self ```
QColor* q_pieslice_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setColor)
///
/// ``` QPieSlice* self, QColor* color ```
void q_pieslice_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelBrush)
///
/// ``` QPieSlice* self, QBrush* brush ```
void q_pieslice_set_label_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrush)
///
/// ``` QPieSlice* self ```
QBrush* q_pieslice_label_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColor)
///
/// ``` QPieSlice* self ```
QColor* q_pieslice_label_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelColor)
///
/// ``` QPieSlice* self, QColor* color ```
void q_pieslice_set_label_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelFont)
///
/// ``` QPieSlice* self, QFont* font ```
void q_pieslice_set_label_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFont)
///
/// ``` QPieSlice* self ```
QFont* q_pieslice_label_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelArmLengthFactor)
///
/// ``` QPieSlice* self, double factor ```
void q_pieslice_set_label_arm_length_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelArmLengthFactor)
///
/// ``` QPieSlice* self ```
double q_pieslice_label_arm_length_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExplodeDistanceFactor)
///
/// ``` QPieSlice* self, double factor ```
void q_pieslice_set_explode_distance_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#explodeDistanceFactor)
///
/// ``` QPieSlice* self ```
double q_pieslice_explode_distance_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentage)
///
/// ``` QPieSlice* self ```
double q_pieslice_percentage(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngle)
///
/// ``` QPieSlice* self ```
double q_pieslice_start_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpan)
///
/// ``` QPieSlice* self ```
double q_pieslice_angle_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#series)
///
/// ``` QPieSlice* self ```
QPieSeries* q_pieslice_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
///
/// ``` QPieSlice* self ```
void q_pieslice_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#clicked)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
///
/// ``` QPieSlice* self, bool state ```
void q_pieslice_hovered(void* self, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#hovered)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, bool) ```
void q_pieslice_on_hovered(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
///
/// ``` QPieSlice* self ```
void q_pieslice_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#pressed)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_pressed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
///
/// ``` QPieSlice* self ```
void q_pieslice_released(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#released)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_released(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
///
/// ``` QPieSlice* self ```
void q_pieslice_double_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#doubleClicked)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_double_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_label_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_label_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_value_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#valueChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_value_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_label_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelVisibleChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_label_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#penChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#brushChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_label_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelBrushChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_label_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_label_font_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelFontChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_label_font_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_percentage_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#percentageChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_percentage_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_start_angle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#startAngleChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_start_angle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_angle_span_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#angleSpanChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_angle_span_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#colorChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_color_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_border_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderColorChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_border_color_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_border_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#borderWidthChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_border_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
///
/// ``` QPieSlice* self ```
void q_pieslice_label_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#labelColorChanged)
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*) ```
void q_pieslice_on_label_color_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pieslice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pieslice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setLabelVisible)
///
/// ``` QPieSlice* self, bool visible ```
void q_pieslice_set_label_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#setExploded)
///
/// ``` QPieSlice* self, bool exploded ```
void q_pieslice_set_exploded1(void* self, bool exploded);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPieSlice* self ```
const char* q_pieslice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPieSlice* self, char* name ```
void q_pieslice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPieSlice* self ```
bool q_pieslice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPieSlice* self ```
bool q_pieslice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPieSlice* self ```
bool q_pieslice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPieSlice* self ```
bool q_pieslice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPieSlice* self, bool b ```
bool q_pieslice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPieSlice* self ```
QThread* q_pieslice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieSlice* self, QThread* thread ```
void q_pieslice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSlice* self, int interval ```
int32_t q_pieslice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieSlice* self, int id ```
void q_pieslice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPieSlice* self ```
const libqt_list /* of QObject* */ q_pieslice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPieSlice* self, QObject* parent ```
void q_pieslice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPieSlice* self, QObject* filterObj ```
void q_pieslice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPieSlice* self, QObject* obj ```
void q_pieslice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pieslice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSlice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pieslice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pieslice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pieslice_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPieSlice* self ```
void q_pieslice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPieSlice* self ```
void q_pieslice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPieSlice* self, const char* name, QVariant* value ```
bool q_pieslice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPieSlice* self, const char* name ```
QVariant* q_pieslice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPieSlice* self ```
const char** q_pieslice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieSlice* self ```
QBindingStorage* q_pieslice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieSlice* self ```
const QBindingStorage* q_pieslice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSlice* self ```
void q_pieslice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSlice* self, void (*slot)(QObject*) ```
void q_pieslice_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPieSlice* self ```
QObject* q_pieslice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPieSlice* self, const char* classname ```
bool q_pieslice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPieSlice* self ```
void q_pieslice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSlice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pieslice_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieslice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSlice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieslice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSlice* self, QObject* param1 ```
void q_pieslice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSlice* self, void (*slot)(QObject*, QObject*) ```
void q_pieslice_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QEvent* event ```
bool q_pieslice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QEvent* event ```
bool q_pieslice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, bool (*slot)(QPieSlice*, QEvent*) ```
void q_pieslice_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QObject* watched, QEvent* event ```
bool q_pieslice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QObject* watched, QEvent* event ```
bool q_pieslice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, bool (*slot)(QPieSlice*, QObject*, QEvent*) ```
void q_pieslice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QTimerEvent* event ```
void q_pieslice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QTimerEvent* event ```
void q_pieslice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, QTimerEvent*) ```
void q_pieslice_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QChildEvent* event ```
void q_pieslice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QChildEvent* event ```
void q_pieslice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, QChildEvent*) ```
void q_pieslice_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QEvent* event ```
void q_pieslice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QEvent* event ```
void q_pieslice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, QEvent*) ```
void q_pieslice_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
void q_pieslice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
void q_pieslice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, QMetaMethod*) ```
void q_pieslice_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
void q_pieslice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
void q_pieslice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, void (*slot)(QPieSlice*, QMetaMethod*) ```
void q_pieslice_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self ```
QObject* q_pieslice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self ```
QObject* q_pieslice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, QObject* (*slot)() ```
void q_pieslice_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self ```
int32_t q_pieslice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self ```
int32_t q_pieslice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, int32_t (*slot)() ```
void q_pieslice_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, const char* signal ```
int32_t q_pieslice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, const char* signal ```
int32_t q_pieslice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, int32_t (*slot)(QPieSlice*, const char*) ```
void q_pieslice_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
bool q_pieslice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSlice* self, QMetaMethod* signal ```
bool q_pieslice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSlice* self, bool (*slot)(QPieSlice*, QMetaMethod*) ```
void q_pieslice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPieSlice* self, void (*slot)(QObject*, const char*) ```
void q_pieslice_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieslice-qtcharts.html#dtor.QPieSlice)
///
/// Delete this object from C++ memory.
///
/// ``` QPieSlice* self ```
void q_pieslice_delete(void* self);

/// https://doc.qt.io/qt-6/qpieslice-qtcharts.html#types

typedef enum {
    QPIESLICE_LABELPOSITION_LABELOUTSIDE = 0,
    QPIESLICE_LABELPOSITION_LABELINSIDEHORIZONTAL = 1,
    QPIESLICE_LABELPOSITION_LABELINSIDETANGENTIAL = 2,
    QPIESLICE_LABELPOSITION_LABELINSIDENORMAL = 3
} QPieSlice__LabelPosition;

#endif
