#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qlegendmarker.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLegendMarker* self ```
QMetaObject* q_legendmarker_meta_object(void* self);

/// ``` QLegendMarker* self, const char* param1 ```
void* q_legendmarker_metacast(void* self, const char* param1);

/// ``` QLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_legendmarker_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_legendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#type)
///
/// ``` QLegendMarker* self ```
int64_t q_legendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QLegendMarker* self ```
const char* q_legendmarker_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QLegendMarker* self, const char* label ```
void q_legendmarker_set_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QLegendMarker* self ```
QBrush* q_legendmarker_label_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QLegendMarker* self, QBrush* brush ```
void q_legendmarker_set_label_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QLegendMarker* self ```
QFont* q_legendmarker_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QLegendMarker* self, QFont* font ```
void q_legendmarker_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QLegendMarker* self ```
QPen* q_legendmarker_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QLegendMarker* self, QPen* pen ```
void q_legendmarker_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QLegendMarker* self ```
QBrush* q_legendmarker_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QLegendMarker* self, QBrush* brush ```
void q_legendmarker_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QLegendMarker* self ```
bool q_legendmarker_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QLegendMarker* self, bool visible ```
void q_legendmarker_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QLegendMarker* self ```
int64_t q_legendmarker_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_legendmarker_set_shape(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#series)
///
/// ``` QLegendMarker* self ```
QAbstractSeries* q_legendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_clicked(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QLegendMarker* self, bool status ```
void q_legendmarker_hovered(void* self, bool status);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_legendmarker_on_hovered(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_label_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_label_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_label_brush_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_label_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_font_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_font_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_pen_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_brush_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_visible_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_shape_changed(void* self);

/// ``` QLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_legendmarker_on_shape_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_legendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_legendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QLegendMarker* self, QEvent* event ```
bool q_legendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QLegendMarker* self, QObject* watched, QEvent* event ```
bool q_legendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLegendMarker* self ```
const char* q_legendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLegendMarker* self, char* name ```
void q_legendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLegendMarker* self ```
bool q_legendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLegendMarker* self ```
bool q_legendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLegendMarker* self ```
bool q_legendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLegendMarker* self ```
bool q_legendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLegendMarker* self, bool b ```
bool q_legendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLegendMarker* self ```
QThread* q_legendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLegendMarker* self, QThread* thread ```
void q_legendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLegendMarker* self, int interval ```
int32_t q_legendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLegendMarker* self, int id ```
void q_legendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLegendMarker* self ```
libqt_list /* of QObject* */ q_legendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLegendMarker* self, QObject* parent ```
void q_legendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLegendMarker* self, QObject* filterObj ```
void q_legendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLegendMarker* self, QObject* obj ```
void q_legendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_legendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_legendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_legendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_legendmarker_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLegendMarker* self, const char* name, QVariant* value ```
bool q_legendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLegendMarker* self, const char* name ```
QVariant* q_legendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLegendMarker* self ```
const char** q_legendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLegendMarker* self ```
QBindingStorage* q_legendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLegendMarker* self ```
QBindingStorage* q_legendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QLegendMarker* self, void (*slot)(QObject*) ```
void q_legendmarker_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLegendMarker* self ```
QObject* q_legendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLegendMarker* self, const char* classname ```
bool q_legendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLegendMarker* self ```
void q_legendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_legendmarker_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_legendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_legendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegendMarker* self, QObject* param1 ```
void q_legendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_legendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QLegendMarker* self ```
void q_legendmarker_delete(void* self);

/// https://doc.qt.io/qt-6/qlegendmarker.html#types

typedef enum {
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEAREA = 0,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBAR = 1,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEPIE = 2,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEXY = 3,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBOXPLOT = 4,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPECANDLESTICK = 5
} QLegendMarker__LegendMarkerType;

#endif
