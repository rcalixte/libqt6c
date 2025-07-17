#pragma once
#ifndef SRCQT6C_LIBQTEXTOBJECT_H
#define SRCQT6C_LIBQTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextobject.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextObject* self ```
const QMetaObject* q_textobject_meta_object(void* self);

/// ``` QTextObject* self, const char* param1 ```
void* q_textobject_metacast(void* self, const char* param1);

/// ``` QTextObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textobject_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textobject_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// ``` QTextObject* self ```
QTextFormat* q_textobject_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextObject* self ```
int32_t q_textobject_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextObject* self ```
QTextDocument* q_textobject_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextObject* self ```
int32_t q_textobject_object_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textobject_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QTextObject* self, QEvent* event ```
bool q_textobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QTextObject* self, QObject* watched, QEvent* event ```
bool q_textobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextObject* self ```
const char* q_textobject_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextObject* self, char* name ```
void q_textobject_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextObject* self ```
bool q_textobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextObject* self ```
bool q_textobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextObject* self ```
bool q_textobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextObject* self ```
bool q_textobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextObject* self, bool b ```
bool q_textobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextObject* self ```
QThread* q_textobject_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextObject* self, QThread* thread ```
bool q_textobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextObject* self, int interval ```
int32_t q_textobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextObject* self, int id ```
void q_textobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextObject* self, enum Qt__TimerId id ```
void q_textobject_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextObject* self ```
libqt_list /* of QObject* */ q_textobject_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextObject* self, QObject* parent ```
void q_textobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextObject* self, QObject* filterObj ```
void q_textobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextObject* self, QObject* obj ```
void q_textobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textobject_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextObject* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textobject_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textobject_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textobject_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextObject* self ```
void q_textobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextObject* self ```
void q_textobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextObject* self, const char* name, QVariant* value ```
bool q_textobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextObject* self, const char* name ```
QVariant* q_textobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextObject* self ```
const char** q_textobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextObject* self ```
QBindingStorage* q_textobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextObject* self ```
const QBindingStorage* q_textobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextObject* self ```
void q_textobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextObject* self, void (*slot)(QObject*) ```
void q_textobject_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextObject* self ```
QObject* q_textobject_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextObject* self, const char* classname ```
bool q_textobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextObject* self ```
void q_textobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextObject* self, QThread* thread, Disambiguated_t* param2 ```
bool q_textobject_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextObject* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textobject_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textobject_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextObject* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textobject_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextObject* self, QObject* param1 ```
void q_textobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextObject* self, void (*slot)(QObject*, QObject*) ```
void q_textobject_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextObject* self, void (*slot)(QObject*, const char*) ```
void q_textobject_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// https://doc.qt.io/qt-6/qtextblockgroup.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextBlockGroup* self ```
const QMetaObject* q_textblockgroup_meta_object(void* self);

/// ``` QTextBlockGroup* self, const char* param1 ```
void* q_textblockgroup_metacast(void* self, const char* param1);

/// ``` QTextBlockGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textblockgroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textblockgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textblockgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textblockgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// ``` QTextBlockGroup* self ```
QTextFormat* q_textblockgroup_format(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextBlockGroup* self ```
int32_t q_textblockgroup_format_index(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextBlockGroup* self ```
QTextDocument* q_textblockgroup_document(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextBlockGroup* self ```
int32_t q_textblockgroup_object_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QTextBlockGroup* self, QEvent* event ```
bool q_textblockgroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QTextBlockGroup* self, QObject* watched, QEvent* event ```
bool q_textblockgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextBlockGroup* self ```
const char* q_textblockgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextBlockGroup* self, char* name ```
void q_textblockgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextBlockGroup* self ```
bool q_textblockgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextBlockGroup* self ```
bool q_textblockgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextBlockGroup* self ```
bool q_textblockgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextBlockGroup* self ```
bool q_textblockgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextBlockGroup* self, bool b ```
bool q_textblockgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextBlockGroup* self ```
QThread* q_textblockgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextBlockGroup* self, QThread* thread ```
bool q_textblockgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextBlockGroup* self, int interval ```
int32_t q_textblockgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextBlockGroup* self, int id ```
void q_textblockgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextBlockGroup* self, enum Qt__TimerId id ```
void q_textblockgroup_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextBlockGroup* self ```
libqt_list /* of QObject* */ q_textblockgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextBlockGroup* self, QObject* parent ```
void q_textblockgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextBlockGroup* self, QObject* filterObj ```
void q_textblockgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextBlockGroup* self, QObject* obj ```
void q_textblockgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textblockgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextBlockGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textblockgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textblockgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textblockgroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextBlockGroup* self ```
void q_textblockgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextBlockGroup* self ```
void q_textblockgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextBlockGroup* self, const char* name, QVariant* value ```
bool q_textblockgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextBlockGroup* self, const char* name ```
QVariant* q_textblockgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextBlockGroup* self ```
const char** q_textblockgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextBlockGroup* self ```
QBindingStorage* q_textblockgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextBlockGroup* self ```
const QBindingStorage* q_textblockgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBlockGroup* self ```
void q_textblockgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBlockGroup* self, void (*slot)(QObject*) ```
void q_textblockgroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextBlockGroup* self ```
QObject* q_textblockgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextBlockGroup* self, const char* classname ```
bool q_textblockgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextBlockGroup* self ```
void q_textblockgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextBlockGroup* self, QThread* thread, Disambiguated_t* param2 ```
bool q_textblockgroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextBlockGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textblockgroup_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textblockgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextBlockGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textblockgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBlockGroup* self, QObject* param1 ```
void q_textblockgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBlockGroup* self, void (*slot)(QObject*, QObject*) ```
void q_textblockgroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextBlockGroup* self, void (*slot)(QObject*, const char*) ```
void q_textblockgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// https://doc.qt.io/qt-6/qtextframelayoutdata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframelayoutdata.html#operator-eq)
///
/// ``` QTextFrameLayoutData* self, QTextFrameLayoutData* param1 ```
void q_textframelayoutdata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframelayoutdata.html#dtor.QTextFrameLayoutData)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFrameLayoutData* self ```
void q_textframelayoutdata_delete(void* self);

/// https://doc.qt.io/qt-6/qtextframe.html

/// q_textframe_new constructs a new QTextFrame object.
///
/// ``` QTextDocument* doc ```
QTextFrame* q_textframe_new(void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextFrame* self ```
const QMetaObject* q_textframe_meta_object(void* self);

/// ``` QTextFrame* self, const char* param1 ```
void* q_textframe_metacast(void* self, const char* param1);

/// ``` QTextFrame* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textframe_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTextFrame* self, int32_t (*slot)(QTextFrame*, enum QMetaObject__Call, int, void*) ```
void q_textframe_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTextFrame* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textframe_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textframe_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
///
/// ``` QTextFrame* self, QTextFrameFormat* format ```
void q_textframe_set_frame_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
///
/// ``` QTextFrame* self ```
QTextFrameFormat* q_textframe_frame_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
///
/// ``` QTextFrame* self ```
QTextCursor* q_textframe_first_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
///
/// ``` QTextFrame* self ```
QTextCursor* q_textframe_last_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
///
/// ``` QTextFrame* self ```
int32_t q_textframe_first_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
///
/// ``` QTextFrame* self ```
int32_t q_textframe_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
///
/// ``` QTextFrame* self ```
QTextFrameLayoutData* q_textframe_layout_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
///
/// ``` QTextFrame* self, QTextFrameLayoutData* data ```
void q_textframe_set_layout_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
///
/// ``` QTextFrame* self ```
libqt_list /* of QTextFrame* */ q_textframe_child_frames(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
///
/// ``` QTextFrame* self ```
QTextFrame* q_textframe_parent_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#begin)
///
/// ``` QTextFrame* self ```
QTextFrame__iterator* q_textframe_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#end)
///
/// ``` QTextFrame* self ```
QTextFrame__iterator* q_textframe_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textframe_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textframe_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// ``` QTextFrame* self ```
QTextFormat* q_textframe_format(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextFrame* self ```
int32_t q_textframe_format_index(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextFrame* self ```
QTextDocument* q_textframe_document(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextFrame* self ```
int32_t q_textframe_object_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextFrame* self ```
const char* q_textframe_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextFrame* self, char* name ```
void q_textframe_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextFrame* self ```
bool q_textframe_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextFrame* self ```
bool q_textframe_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextFrame* self ```
bool q_textframe_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextFrame* self ```
bool q_textframe_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextFrame* self, bool b ```
bool q_textframe_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextFrame* self ```
QThread* q_textframe_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextFrame* self, QThread* thread ```
bool q_textframe_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextFrame* self, int interval ```
int32_t q_textframe_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextFrame* self, int id ```
void q_textframe_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextFrame* self, enum Qt__TimerId id ```
void q_textframe_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextFrame* self ```
libqt_list /* of QObject* */ q_textframe_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextFrame* self, QObject* parent ```
void q_textframe_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextFrame* self, QObject* filterObj ```
void q_textframe_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextFrame* self, QObject* obj ```
void q_textframe_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textframe_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextFrame* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textframe_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textframe_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textframe_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextFrame* self ```
void q_textframe_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextFrame* self ```
void q_textframe_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextFrame* self, const char* name, QVariant* value ```
bool q_textframe_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextFrame* self, const char* name ```
QVariant* q_textframe_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextFrame* self ```
const char** q_textframe_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextFrame* self ```
QBindingStorage* q_textframe_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextFrame* self ```
const QBindingStorage* q_textframe_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextFrame* self ```
void q_textframe_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextFrame* self, void (*slot)(QObject*) ```
void q_textframe_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextFrame* self ```
QObject* q_textframe_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextFrame* self, const char* classname ```
bool q_textframe_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextFrame* self ```
void q_textframe_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextFrame* self, QThread* thread, Disambiguated_t* param2 ```
bool q_textframe_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextFrame* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textframe_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textframe_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextFrame* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textframe_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextFrame* self, QObject* param1 ```
void q_textframe_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextFrame* self, void (*slot)(QObject*, QObject*) ```
void q_textframe_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QEvent* event ```
bool q_textframe_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QEvent* event ```
bool q_textframe_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, bool (*slot)(QTextFrame*, QEvent*) ```
void q_textframe_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QObject* watched, QEvent* event ```
bool q_textframe_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QObject* watched, QEvent* event ```
bool q_textframe_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, bool (*slot)(QTextFrame*, QObject*, QEvent*) ```
void q_textframe_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QTimerEvent* event ```
void q_textframe_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QTimerEvent* event ```
void q_textframe_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QTimerEvent*) ```
void q_textframe_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QChildEvent* event ```
void q_textframe_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QChildEvent* event ```
void q_textframe_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QChildEvent*) ```
void q_textframe_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QEvent* event ```
void q_textframe_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QEvent* event ```
void q_textframe_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QEvent*) ```
void q_textframe_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
void q_textframe_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
void q_textframe_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QMetaMethod*) ```
void q_textframe_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
void q_textframe_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
void q_textframe_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QMetaMethod*) ```
void q_textframe_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QTextFormat* format ```
void q_textframe_set_format(void* self, void* format);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QTextFormat* format ```
void q_textframe_qbase_set_format(void* self, void* format);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, void (*slot)(QTextFrame*, QTextFormat*) ```
void q_textframe_on_set_format(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self ```
QObject* q_textframe_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self ```
QObject* q_textframe_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, QObject* (*slot)() ```
void q_textframe_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self ```
int32_t q_textframe_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self ```
int32_t q_textframe_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, int32_t (*slot)() ```
void q_textframe_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, const char* signal ```
int32_t q_textframe_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, const char* signal ```
int32_t q_textframe_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, int32_t (*slot)(QTextFrame*, const char*) ```
void q_textframe_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
bool q_textframe_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextFrame* self, QMetaMethod* signal ```
bool q_textframe_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextFrame* self, bool (*slot)(QTextFrame*, QMetaMethod*) ```
void q_textframe_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextFrame* self, void (*slot)(QObject*, const char*) ```
void q_textframe_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#dtor.QTextFrame)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFrame* self ```
void q_textframe_delete(void* self);

/// https://doc.qt.io/qt-6/qtextblockuserdata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockuserdata.html#operator-eq)
///
/// ``` QTextBlockUserData* self, QTextBlockUserData* param1 ```
void q_textblockuserdata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockuserdata.html#dtor.QTextBlockUserData)
///
/// Delete this object from C++ memory.
///
/// ``` QTextBlockUserData* self ```
void q_textblockuserdata_delete(void* self);

/// https://doc.qt.io/qt-6/qtextblock.html

/// q_textblock_new constructs a new QTextBlock object.
///
///
QTextBlock* q_textblock_new();

/// q_textblock_new2 constructs a new QTextBlock object.
///
/// ``` QTextBlock* o ```
QTextBlock* q_textblock_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator-eq)
///
/// ``` QTextBlock* self, QTextBlock* o ```
void q_textblock_operator_assign(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#isValid)
///
/// ``` QTextBlock* self ```
bool q_textblock_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator-eq-eq)
///
/// ``` QTextBlock* self, QTextBlock* o ```
bool q_textblock_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator-not-eq)
///
/// ``` QTextBlock* self, QTextBlock* o ```
bool q_textblock_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator-lt)
///
/// ``` QTextBlock* self, QTextBlock* o ```
bool q_textblock_operator_lesser(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#position)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#length)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#contains)
///
/// ``` QTextBlock* self, int position ```
bool q_textblock_contains(void* self, int position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#layout)
///
/// ``` QTextBlock* self ```
QTextLayout* q_textblock_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#clearLayout)
///
/// ``` QTextBlock* self ```
void q_textblock_clear_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockFormat)
///
/// ``` QTextBlock* self ```
QTextBlockFormat* q_textblock_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockFormatIndex)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_block_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#charFormat)
///
/// ``` QTextBlock* self ```
QTextCharFormat* q_textblock_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#charFormatIndex)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_char_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textDirection)
///
/// ``` QTextBlock* self ```
int64_t q_textblock_text_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#text)
///
/// ``` QTextBlock* self ```
const char* q_textblock_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textFormats)
///
/// ``` QTextBlock* self ```
libqt_list /* of QTextLayout__FormatRange* */ q_textblock_text_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#document)
///
/// ``` QTextBlock* self ```
const QTextDocument* q_textblock_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textList)
///
/// ``` QTextBlock* self ```
QTextList* q_textblock_text_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#userData)
///
/// ``` QTextBlock* self ```
QTextBlockUserData* q_textblock_user_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setUserData)
///
/// ``` QTextBlock* self, QTextBlockUserData* data ```
void q_textblock_set_user_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#userState)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_user_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setUserState)
///
/// ``` QTextBlock* self, int state ```
void q_textblock_set_user_state(void* self, int state);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#revision)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setRevision)
///
/// ``` QTextBlock* self, int rev ```
void q_textblock_set_revision(void* self, int rev);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#isVisible)
///
/// ``` QTextBlock* self ```
bool q_textblock_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setVisible)
///
/// ``` QTextBlock* self, bool visible ```
void q_textblock_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockNumber)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_block_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#firstLineNumber)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_first_line_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setLineCount)
///
/// ``` QTextBlock* self, int count ```
void q_textblock_set_line_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#lineCount)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_line_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#begin)
///
/// ``` QTextBlock* self ```
QTextBlock__iterator* q_textblock_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#end)
///
/// ``` QTextBlock* self ```
QTextBlock__iterator* q_textblock_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#next)
///
/// ``` QTextBlock* self ```
QTextBlock* q_textblock_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#previous)
///
/// ``` QTextBlock* self ```
QTextBlock* q_textblock_previous(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#fragmentIndex)
///
/// ``` QTextBlock* self ```
int32_t q_textblock_fragment_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#dtor.QTextBlock)
///
/// Delete this object from C++ memory.
///
/// ``` QTextBlock* self ```
void q_textblock_delete(void* self);

/// https://doc.qt.io/qt-6/qtextfragment.html

/// q_textfragment_new constructs a new QTextFragment object.
///
///
QTextFragment* q_textfragment_new();

/// q_textfragment_new2 constructs a new QTextFragment object.
///
/// ``` QTextFragment* o ```
QTextFragment* q_textfragment_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq)
///
/// ``` QTextFragment* self, QTextFragment* o ```
void q_textfragment_operator_assign(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#isValid)
///
/// ``` QTextFragment* self ```
bool q_textfragment_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq-eq)
///
/// ``` QTextFragment* self, QTextFragment* o ```
bool q_textfragment_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator-not-eq)
///
/// ``` QTextFragment* self, QTextFragment* o ```
bool q_textfragment_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator-lt)
///
/// ``` QTextFragment* self, QTextFragment* o ```
bool q_textfragment_operator_lesser(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#position)
///
/// ``` QTextFragment* self ```
int32_t q_textfragment_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#length)
///
/// ``` QTextFragment* self ```
int32_t q_textfragment_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#contains)
///
/// ``` QTextFragment* self, int position ```
bool q_textfragment_contains(void* self, int position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#charFormat)
///
/// ``` QTextFragment* self ```
QTextCharFormat* q_textfragment_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#charFormatIndex)
///
/// ``` QTextFragment* self ```
int32_t q_textfragment_char_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#text)
///
/// ``` QTextFragment* self ```
const char* q_textfragment_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// ``` QTextFragment* self ```
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// ``` QTextFragment* self, int from ```
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs1(void* self, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// ``` QTextFragment* self, int from, int length ```
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs2(void* self, int from, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#dtor.QTextFragment)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFragment* self ```
void q_textfragment_delete(void* self);

/// https://doc.qt.io/qt-6/qtextframe-iterator.html

/// q_textframe__iterator_new constructs a new QTextFrame::iterator object.
///
/// ``` QTextFrame__iterator* other ```
QTextFrame__iterator* q_textframe__iterator_new(void* other);

/// q_textframe__iterator_new2 constructs a new QTextFrame::iterator object and invalidates the source QTextFrame::iterator object.
///
/// ``` QTextFrame__iterator* other ```
QTextFrame__iterator* q_textframe__iterator_new2(void* other);

/// q_textframe__iterator_new3 constructs a new QTextFrame::iterator object.
///
///
QTextFrame__iterator* q_textframe__iterator_new3();

/// q_textframe__iterator_new4 constructs a new QTextFrame::iterator object.
///
/// ``` QTextFrame__iterator* param1 ```
QTextFrame__iterator* q_textframe__iterator_new4(void* param1);

/// q_textframe__iterator_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextFrame__iterator* self, QTextFrame__iterator* other ```
void q_textframe__iterator_copy_assign(void* self, void* other);

/// q_textframe__iterator_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextFrame__iterator* self, QTextFrame__iterator* other ```
void q_textframe__iterator_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#parentFrame)
///
/// ``` QTextFrame__iterator* self ```
QTextFrame* q_textframe__iterator_parent_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#currentFrame)
///
/// ``` QTextFrame__iterator* self ```
QTextFrame* q_textframe__iterator_current_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#currentBlock)
///
/// ``` QTextFrame__iterator* self ```
QTextBlock* q_textframe__iterator_current_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#atEnd)
///
/// ``` QTextFrame__iterator* self ```
bool q_textframe__iterator_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator-eq-eq)
///
/// ``` QTextFrame__iterator* self, QTextFrame__iterator* o ```
bool q_textframe__iterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator-not-eq)
///
/// ``` QTextFrame__iterator* self, QTextFrame__iterator* o ```
bool q_textframe__iterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator-2b-2b)
///
/// ``` QTextFrame__iterator* self ```
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator-2b-2b)
///
/// ``` QTextFrame__iterator* self, int param1 ```
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator--)
///
/// ``` QTextFrame__iterator* self ```
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator--)
///
/// ``` QTextFrame__iterator* self, int param1 ```
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe::iterator.html#dtor.QTextFrame::iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFrame__iterator* self ```
void q_textframe__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qtextblock-iterator.html

/// q_textblock__iterator_new constructs a new QTextBlock::iterator object.
///
/// ``` QTextBlock__iterator* other ```
QTextBlock__iterator* q_textblock__iterator_new(void* other);

/// q_textblock__iterator_new2 constructs a new QTextBlock::iterator object and invalidates the source QTextBlock::iterator object.
///
/// ``` QTextBlock__iterator* other ```
QTextBlock__iterator* q_textblock__iterator_new2(void* other);

/// q_textblock__iterator_new3 constructs a new QTextBlock::iterator object.
///
///
QTextBlock__iterator* q_textblock__iterator_new3();

/// q_textblock__iterator_new4 constructs a new QTextBlock::iterator object.
///
/// ``` QTextBlock__iterator* param1 ```
QTextBlock__iterator* q_textblock__iterator_new4(void* param1);

/// q_textblock__iterator_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextBlock__iterator* self, QTextBlock__iterator* other ```
void q_textblock__iterator_copy_assign(void* self, void* other);

/// q_textblock__iterator_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextBlock__iterator* self, QTextBlock__iterator* other ```
void q_textblock__iterator_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#fragment)
///
/// ``` QTextBlock__iterator* self ```
QTextFragment* q_textblock__iterator_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#atEnd)
///
/// ``` QTextBlock__iterator* self ```
bool q_textblock__iterator_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator-eq-eq)
///
/// ``` QTextBlock__iterator* self, QTextBlock__iterator* o ```
bool q_textblock__iterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator-not-eq)
///
/// ``` QTextBlock__iterator* self, QTextBlock__iterator* o ```
bool q_textblock__iterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator-2b-2b)
///
/// ``` QTextBlock__iterator* self ```
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator-2b-2b)
///
/// ``` QTextBlock__iterator* self, int param1 ```
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator--)
///
/// ``` QTextBlock__iterator* self ```
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator--)
///
/// ``` QTextBlock__iterator* self, int param1 ```
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblock::iterator.html#dtor.QTextBlock::iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QTextBlock__iterator* self ```
void q_textblock__iterator_delete(void* self);

#endif
