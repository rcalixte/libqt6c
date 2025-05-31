#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSANCHORLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayout.h"
#include "libqgraphicslayoutitem.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qgraphicsanchor.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsAnchor* self ```
const QMetaObject* q_graphicsanchor_meta_object(void* self);

/// ``` QGraphicsAnchor* self, const char* param1 ```
void* q_graphicsanchor_metacast(void* self, const char* param1);

/// ``` QGraphicsAnchor* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsanchor_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsanchor_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSpacing)
///
/// ``` QGraphicsAnchor* self, double spacing ```
void q_graphicsanchor_set_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#unsetSpacing)
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_unset_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#spacing)
///
/// ``` QGraphicsAnchor* self ```
double q_graphicsanchor_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSizePolicy)
///
/// ``` QGraphicsAnchor* self, enum QSizePolicy__Policy policy ```
void q_graphicsanchor_set_size_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#sizePolicy)
///
/// ``` QGraphicsAnchor* self ```
int64_t q_graphicsanchor_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsanchor_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsanchor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QGraphicsAnchor* self, QEvent* event ```
bool q_graphicsanchor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QGraphicsAnchor* self, QObject* watched, QEvent* event ```
bool q_graphicsanchor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsAnchor* self ```
const char* q_graphicsanchor_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsAnchor* self, char* name ```
void q_graphicsanchor_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsAnchor* self ```
bool q_graphicsanchor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsAnchor* self ```
bool q_graphicsanchor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsAnchor* self ```
bool q_graphicsanchor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsAnchor* self ```
bool q_graphicsanchor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsAnchor* self, bool b ```
bool q_graphicsanchor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsAnchor* self ```
QThread* q_graphicsanchor_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsAnchor* self, QThread* thread ```
void q_graphicsanchor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsAnchor* self, int interval ```
int32_t q_graphicsanchor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsAnchor* self, int id ```
void q_graphicsanchor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsAnchor* self ```
const libqt_list /* of QObject* */ q_graphicsanchor_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsAnchor* self, QObject* parent ```
void q_graphicsanchor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsAnchor* self, QObject* filterObj ```
void q_graphicsanchor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsAnchor* self, QObject* obj ```
void q_graphicsanchor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsanchor_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsAnchor* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsanchor_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsanchor_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsanchor_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsAnchor* self, const char* name, QVariant* value ```
bool q_graphicsanchor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsAnchor* self, const char* name ```
QVariant* q_graphicsanchor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsAnchor* self ```
const char** q_graphicsanchor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsAnchor* self ```
QBindingStorage* q_graphicsanchor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsAnchor* self ```
const QBindingStorage* q_graphicsanchor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsAnchor* self, void (*slot)(QObject*) ```
void q_graphicsanchor_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsAnchor* self ```
QObject* q_graphicsanchor_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsAnchor* self, const char* classname ```
bool q_graphicsanchor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsAnchor* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsanchor_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsanchor_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsAnchor* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsanchor_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsAnchor* self, QObject* param1 ```
void q_graphicsanchor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsAnchor* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsanchor_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsAnchor* self, void (*slot)(QObject*, const char*) ```
void q_graphicsanchor_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#dtor.QGraphicsAnchor)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsAnchor* self ```
void q_graphicsanchor_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsanchorlayout.html

/// q_graphicsanchorlayout_new constructs a new QGraphicsAnchorLayout object.
///
///
QGraphicsAnchorLayout* q_graphicsanchorlayout_new();

/// q_graphicsanchorlayout_new2 constructs a new QGraphicsAnchorLayout object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsAnchorLayout* q_graphicsanchorlayout_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchor)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, enum Qt__AnchorPoint firstEdge, QGraphicsLayoutItem* secondItem, enum Qt__AnchorPoint secondEdge ```
QGraphicsAnchor* q_graphicsanchorlayout_add_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#anchor)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, enum Qt__AnchorPoint firstEdge, QGraphicsLayoutItem* secondItem, enum Qt__AnchorPoint secondEdge ```
QGraphicsAnchor* q_graphicsanchorlayout_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addCornerAnchors)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, enum Qt__Corner firstCorner, QGraphicsLayoutItem* secondItem, enum Qt__Corner secondCorner ```
void q_graphicsanchorlayout_add_corner_anchors(void* self, void* firstItem, int64_t firstCorner, void* secondItem, int64_t secondCorner);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem ```
void q_graphicsanchorlayout_add_anchors(void* self, void* firstItem, void* secondItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setHorizontalSpacing)
///
/// ``` QGraphicsAnchorLayout* self, double spacing ```
void q_graphicsanchorlayout_set_horizontal_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setVerticalSpacing)
///
/// ``` QGraphicsAnchorLayout* self, double spacing ```
void q_graphicsanchorlayout_set_vertical_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setSpacing)
///
/// ``` QGraphicsAnchorLayout* self, double spacing ```
void q_graphicsanchorlayout_set_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#horizontalSpacing)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_horizontal_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#verticalSpacing)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_vertical_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// ``` QGraphicsAnchorLayout* self, int index ```
void q_graphicsanchorlayout_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, int) ```
void q_graphicsanchorlayout_on_remove_at(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self, int index ```
void q_graphicsanchorlayout_qbase_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// ``` QGraphicsAnchorLayout* self, QRectF* rect ```
void q_graphicsanchorlayout_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, QRectF*) ```
void q_graphicsanchorlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self, QRectF* rect ```
void q_graphicsanchorlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// ``` QGraphicsAnchorLayout* self ```
int32_t q_graphicsanchorlayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, int32_t (*slot)() ```
void q_graphicsanchorlayout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self ```
int32_t q_graphicsanchorlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// ``` QGraphicsAnchorLayout* self, int index ```
QGraphicsLayoutItem* q_graphicsanchorlayout_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* (*slot)(QGraphicsAnchorLayout*, int) ```
void q_graphicsanchorlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self, int index ```
QGraphicsLayoutItem* q_graphicsanchorlayout_qbase_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)() ```
void q_graphicsanchorlayout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// ``` QGraphicsAnchorLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsanchorlayout_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsAnchorLayout* self, QSizeF* (*slot)(QGraphicsAnchorLayout*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicsanchorlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGraphicsAnchorLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsanchorlayout_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations ```
void q_graphicsanchorlayout_add_anchors3(void* self, void* firstItem, void* secondItem, int64_t orientations);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// ``` QGraphicsAnchorLayout* self, double left, double top, double right, double bottom ```
void q_graphicsanchorlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// ``` QGraphicsAnchorLayout* self ```
bool q_graphicsanchorlayout_is_activated(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// ``` bool enable ```
void q_graphicsanchorlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
///
bool q_graphicsanchorlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsAnchorLayout* self, QSizePolicy* policy ```
void q_graphicsanchorlayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsAnchorLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicsanchorlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsAnchorLayout* self ```
QSizePolicy* q_graphicsanchorlayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsAnchorLayout* self, QSizeF* size ```
void q_graphicsanchorlayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsAnchorLayout* self, double w, double h ```
void q_graphicsanchorlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsAnchorLayout* self ```
QSizeF* q_graphicsanchorlayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsAnchorLayout* self, double width ```
void q_graphicsanchorlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsAnchorLayout* self, double height ```
void q_graphicsanchorlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsAnchorLayout* self, QSizeF* size ```
void q_graphicsanchorlayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsAnchorLayout* self, double w, double h ```
void q_graphicsanchorlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsAnchorLayout* self ```
QSizeF* q_graphicsanchorlayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsAnchorLayout* self, double width ```
void q_graphicsanchorlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsAnchorLayout* self, double height ```
void q_graphicsanchorlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsAnchorLayout* self, QSizeF* size ```
void q_graphicsanchorlayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsAnchorLayout* self, double w, double h ```
void q_graphicsanchorlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsAnchorLayout* self ```
QSizeF* q_graphicsanchorlayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsAnchorLayout* self, double width ```
void q_graphicsanchorlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsAnchorLayout* self, double height ```
void q_graphicsanchorlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsAnchorLayout* self ```
double q_graphicsanchorlayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsAnchorLayout* self ```
QRectF* q_graphicsanchorlayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsAnchorLayout* self ```
QRectF* q_graphicsanchorlayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsAnchorLayout* self, enum Qt__SizeHint which ```
QSizeF* q_graphicsanchorlayout_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsAnchorLayout* self ```
QGraphicsLayoutItem* q_graphicsanchorlayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* parent ```
void q_graphicsanchorlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsAnchorLayout* self ```
bool q_graphicsanchorlayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsAnchorLayout* self ```
QGraphicsItem* q_graphicsanchorlayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsAnchorLayout* self ```
bool q_graphicsanchorlayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsAnchorLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicsanchorlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsAnchorLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsanchorlayout_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsanchorlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsanchorlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, double*, double*, double*, double*) ```
void q_graphicsanchorlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_qbase_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)() ```
void q_graphicsanchorlayout_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QEvent* e ```
void q_graphicsanchorlayout_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QEvent* e ```
void q_graphicsanchorlayout_qbase_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, QEvent*) ```
void q_graphicsanchorlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self ```
bool q_graphicsanchorlayout_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self ```
bool q_graphicsanchorlayout_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, bool (*slot)() ```
void q_graphicsanchorlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicsanchorlayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicsanchorlayout_qbase_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, QGraphicsLayoutItem*) ```
void q_graphicsanchorlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsItem* item ```
void q_graphicsanchorlayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, QGraphicsItem* item ```
void q_graphicsanchorlayout_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, QGraphicsItem*) ```
void q_graphicsanchorlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, bool ownedByLayout ```
void q_graphicsanchorlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, bool ownedByLayout ```
void q_graphicsanchorlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsAnchorLayout* self, void (*slot)(QGraphicsAnchorLayout*, bool) ```
void q_graphicsanchorlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#dtor.QGraphicsAnchorLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsAnchorLayout* self ```
void q_graphicsanchorlayout_delete(void* self);

#endif
