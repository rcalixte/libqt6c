#pragma once
#ifndef SRCQT6C_LIBQSTACKEDLAYOUT_H
#define SRCQT6C_LIBQSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqlayout.h"
#include "libqlayoutitem.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qstackedlayout.html

/// q_stackedlayout_new constructs a new QStackedLayout object.
///
/// ``` QWidget* parent ```
QStackedLayout* q_stackedlayout_new(void* parent);

/// q_stackedlayout_new2 constructs a new QStackedLayout object.
///
///
QStackedLayout* q_stackedlayout_new2();

/// q_stackedlayout_new3 constructs a new QStackedLayout object.
///
/// ``` QLayout* parentLayout ```
QStackedLayout* q_stackedlayout_new3(void* parentLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStackedLayout* self ```
QMetaObject* q_stackedlayout_meta_object(void* self);

/// ``` QStackedLayout* self, const char* param1 ```
void* q_stackedlayout_metacast(void* self, const char* param1);

/// ``` QStackedLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedlayout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, int32_t (*slot)(QStackedLayout*, enum QMetaObject__Call, int, void*) ```
void q_stackedlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QStackedLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_stackedlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#addWidget)
///
/// ``` QStackedLayout* self, QWidget* w ```
int32_t q_stackedlayout_add_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#insertWidget)
///
/// ``` QStackedLayout* self, int index, QWidget* w ```
int32_t q_stackedlayout_insert_widget(void* self, int index, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#currentWidget)
///
/// ``` QStackedLayout* self ```
QWidget* q_stackedlayout_current_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#currentIndex)
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#widget)
///
/// ``` QStackedLayout* self, int param1 ```
QWidget* q_stackedlayout_widget(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#count)
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_count(void* self);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, int32_t (*slot)() ```
void q_stackedlayout_on_count(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#stackingMode)
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_stacking_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#setStackingMode)
///
/// ``` QStackedLayout* self, enum QStackedLayout__StackingMode stackingMode ```
void q_stackedlayout_set_stacking_mode(void* self, int64_t stackingMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
///
/// ``` QStackedLayout* self, QLayoutItem* item ```
void q_stackedlayout_add_item(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QLayoutItem*) ```
void q_stackedlayout_on_add_item(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStackedLayout* self, QLayoutItem* item ```
void q_stackedlayout_qbase_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, QSize* (*slot)() ```
void q_stackedlayout_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_minimum_size(void* self);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, QSize* (*slot)() ```
void q_stackedlayout_on_minimum_size(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
///
/// ``` QStackedLayout* self, int param1 ```
QLayoutItem* q_stackedlayout_item_at(void* self, int param1);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, QLayoutItem* (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QStackedLayout* self, int param1 ```
QLayoutItem* q_stackedlayout_qbase_item_at(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
///
/// ``` QStackedLayout* self, int param1 ```
QLayoutItem* q_stackedlayout_take_at(void* self, int param1);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, QLayoutItem* (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QStackedLayout* self, int param1 ```
QLayoutItem* q_stackedlayout_qbase_take_at(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
///
/// ``` QStackedLayout* self, QRect* rect ```
void q_stackedlayout_set_geometry(void* self, void* rect);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QRect*) ```
void q_stackedlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStackedLayout* self, QRect* rect ```
void q_stackedlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_has_height_for_width(void* self);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, bool (*slot)() ```
void q_stackedlayout_on_has_height_for_width(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
///
/// ``` QStackedLayout* self, int width ```
int32_t q_stackedlayout_height_for_width(void* self, int width);

/// Allows for overriding the related default method
///
/// ``` QStackedLayout* self, int32_t (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QStackedLayout* self, int width ```
int32_t q_stackedlayout_qbase_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
///
/// ``` QStackedLayout* self, int index ```
void q_stackedlayout_widget_removed(void* self, int index);

/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_widget_removed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
///
/// ``` QStackedLayout* self, int index ```
void q_stackedlayout_current_changed(void* self, int index);

/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_current_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentIndex)
///
/// ``` QStackedLayout* self, int index ```
void q_stackedlayout_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentWidget)
///
/// ``` QStackedLayout* self, QWidget* w ```
void q_stackedlayout_set_current_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_stackedlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_stackedlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QStackedLayout* self, int left, int top, int right, int bottom ```
void q_stackedlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QStackedLayout* self, QMargins* margins ```
void q_stackedlayout_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QStackedLayout* self, int* left, int* top, int* right, int* bottom ```
void q_stackedlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QStackedLayout* self ```
QMargins* q_stackedlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QStackedLayout* self ```
QRect* q_stackedlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QStackedLayout* self, QWidget* w, int alignment ```
bool q_stackedlayout_set_alignment(void* self, void* w, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QStackedLayout* self, QLayout* l, int alignment ```
bool q_stackedlayout_set_alignment2(void* self, void* l, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QStackedLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_stackedlayout_set_size_constraint(void* self, int64_t sizeConstraint);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QStackedLayout* self, QWidget* w ```
void q_stackedlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QStackedLayout* self ```
QWidget* q_stackedlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QStackedLayout* self ```
QWidget* q_stackedlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_update(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QStackedLayout* self, QWidget* w ```
void q_stackedlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QStackedLayout* self, QLayoutItem* param1 ```
void q_stackedlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QStackedLayout* self, QLayoutItem* param1 ```
int32_t q_stackedlayout_index_of_with_q_layout_item(void* self, void* param1);

/// Inherited from QLayout
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_stackedlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// Base class method implementation
///
/// ``` QStackedLayout* self, QLayoutItem* param1 ```
int32_t q_stackedlayout_qbase_index_of_with_q_layout_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QStackedLayout* self, int w ```
int32_t q_stackedlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QStackedLayout* self, int w ```
int32_t q_stackedlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QStackedLayout* self, bool enabled ```
void q_stackedlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_stackedlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStackedLayout* self ```
const char* q_stackedlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStackedLayout* self, const char* name ```
void q_stackedlayout_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStackedLayout* self, bool b ```
bool q_stackedlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStackedLayout* self ```
QThread* q_stackedlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStackedLayout* self, QThread* thread ```
void q_stackedlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedLayout* self, int interval ```
int32_t q_stackedlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStackedLayout* self, int id ```
void q_stackedlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStackedLayout* self ```
libqt_list /* of QObject* */ q_stackedlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStackedLayout* self, QObject* parent ```
void q_stackedlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStackedLayout* self, QObject* filterObj ```
void q_stackedlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStackedLayout* self, QObject* obj ```
void q_stackedlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_stackedlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_stackedlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_stackedlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_stackedlayout_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStackedLayout* self, const char* name, QVariant* value ```
bool q_stackedlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStackedLayout* self, const char* name ```
QVariant* q_stackedlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStackedLayout* self ```
const char** q_stackedlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStackedLayout* self ```
QBindingStorage* q_stackedlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStackedLayout* self ```
QBindingStorage* q_stackedlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QStackedLayout* self, void (*slot)(QObject*) ```
void q_stackedlayout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStackedLayout* self ```
QObject* q_stackedlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStackedLayout* self, const char* classname ```
bool q_stackedlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_stackedlayout_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedLayout* self, QObject* param1 ```
void q_stackedlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QStackedLayout* self, void (*slot)(QObject*, QObject*) ```
void q_stackedlayout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_spacing(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_qbase_spacing(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int32_t (*slot)() ```
void q_stackedlayout_on_spacing(void* self, int32_t (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, int spacing ```
void q_stackedlayout_set_spacing(void* self, int spacing);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, int spacing ```
void q_stackedlayout_qbase_set_spacing(void* self, int spacing);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_set_spacing(void* self, void (*slot)(void*, int));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_invalidate(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_qbase_invalidate(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)() ```
void q_stackedlayout_on_invalidate(void* self, void (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
QRect* q_stackedlayout_geometry(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
QRect* q_stackedlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QRect* (*slot)() ```
void q_stackedlayout_on_geometry(void* self, QRect* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_expanding_directions(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_qbase_expanding_directions(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int64_t (*slot)() ```
void q_stackedlayout_on_expanding_directions(void* self, int64_t (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_maximum_size(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
QSize* q_stackedlayout_qbase_maximum_size(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QSize* (*slot)() ```
void q_stackedlayout_on_maximum_size(void* self, QSize* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* param1 ```
int32_t q_stackedlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* param1 ```
int32_t q_stackedlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int32_t (*slot)(QStackedLayout*, QWidget*) ```
void q_stackedlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
bool q_stackedlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, bool (*slot)() ```
void q_stackedlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_control_types(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
int64_t q_stackedlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int64_t (*slot)() ```
void q_stackedlayout_on_control_types(void* self, int64_t (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_stackedlayout_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_stackedlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QLayoutItem* (*slot)(QStackedLayout*, QWidget*, QWidget*, int) ```
void q_stackedlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
QLayout* q_stackedlayout_layout(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
QLayout* q_stackedlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QLayout* (*slot)() ```
void q_stackedlayout_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QChildEvent* e ```
void q_stackedlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QChildEvent* e ```
void q_stackedlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QChildEvent*) ```
void q_stackedlayout_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* event ```
bool q_stackedlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* event ```
bool q_stackedlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, bool (*slot)(QStackedLayout*, QEvent*) ```
void q_stackedlayout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QObject* watched, QEvent* event ```
bool q_stackedlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QObject* watched, QEvent* event ```
bool q_stackedlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, bool (*slot)(QStackedLayout*, QObject*, QEvent*) ```
void q_stackedlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QTimerEvent* event ```
void q_stackedlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QTimerEvent* event ```
void q_stackedlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QTimerEvent*) ```
void q_stackedlayout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* event ```
void q_stackedlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* event ```
void q_stackedlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QEvent*) ```
void q_stackedlayout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
void q_stackedlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
void q_stackedlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QMetaMethod*) ```
void q_stackedlayout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
void q_stackedlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
void q_stackedlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QMetaMethod*) ```
void q_stackedlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, int param1 ```
int32_t q_stackedlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, int param1 ```
int32_t q_stackedlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int32_t (*slot)(QStackedLayout*, int) ```
void q_stackedlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
QSpacerItem* q_stackedlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
QSpacerItem* q_stackedlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QSpacerItem* (*slot)() ```
void q_stackedlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* param1 ```
void q_stackedlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QEvent* param1 ```
void q_stackedlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QEvent*) ```
void q_stackedlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QLayout* l ```
void q_stackedlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QLayout* l ```
void q_stackedlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QLayout*) ```
void q_stackedlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* w ```
void q_stackedlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QWidget* w ```
void q_stackedlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, void (*slot)(QStackedLayout*, QWidget*) ```
void q_stackedlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QLayout* layout ```
bool q_stackedlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QLayout* layout ```
bool q_stackedlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, bool (*slot)(QStackedLayout*, QLayout*) ```
void q_stackedlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QRect* param1 ```
QRect* q_stackedlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QRect* param1 ```
QRect* q_stackedlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QRect* (*slot)(QStackedLayout*, QRect*) ```
void q_stackedlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
QObject* q_stackedlayout_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
QObject* q_stackedlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, QObject* (*slot)() ```
void q_stackedlayout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self ```
int32_t q_stackedlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int32_t (*slot)() ```
void q_stackedlayout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, const char* signal ```
int32_t q_stackedlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, const char* signal ```
int32_t q_stackedlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, int32_t (*slot)(QStackedLayout*, const char*) ```
void q_stackedlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
bool q_stackedlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedLayout* self, QMetaMethod* signal ```
bool q_stackedlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedLayout* self, bool (*slot)(QStackedLayout*, QMetaMethod*) ```
void q_stackedlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QStackedLayout* self ```
void q_stackedlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qstackedlayout.html#types

typedef enum {
    QSTACKEDLAYOUT_STACKINGMODE_STACKONE = 0,
    QSTACKEDLAYOUT_STACKINGMODE_STACKALL = 1
} QStackedLayout__StackingMode;

#endif
