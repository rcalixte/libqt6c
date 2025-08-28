#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html

/// k_pixmapsequenceoverlaypainter_new constructs a new KPixmapSequenceOverlayPainter object.
///
KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new();

/// k_pixmapsequenceoverlaypainter_new2 constructs a new KPixmapSequenceOverlayPainter object.
///
/// @param seq KPixmapSequence*
KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new2(void* seq);

/// k_pixmapsequenceoverlaypainter_new3 constructs a new KPixmapSequenceOverlayPainter object.
///
/// @param parent QObject*
KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new3(void* parent);

/// k_pixmapsequenceoverlaypainter_new4 constructs a new KPixmapSequenceOverlayPainter object.
///
/// @param seq KPixmapSequence*
/// @param parent QObject*
KPixmapSequenceOverlayPainter* k_pixmapsequenceoverlaypainter_new4(void* seq, void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KPixmapSequenceOverlayPainter*
const QMetaObject* k_pixmapsequenceoverlaypainter_meta_object(void* self);

/// @param self KPixmapSequenceOverlayPainter*
/// @param param1 const char*
void* k_pixmapsequenceoverlaypainter_metacast(void* self, const char* param1);

/// @param self KPixmapSequenceOverlayPainter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_pixmapsequenceoverlaypainter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback int32_t func(KPixmapSequenceOverlayPainter* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_pixmapsequenceoverlaypainter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_pixmapsequenceoverlaypainter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_pixmapsequenceoverlaypainter_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#sequence)
///
/// @param self KPixmapSequenceOverlayPainter*
KPixmapSequence* k_pixmapsequenceoverlaypainter_sequence(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#interval)
///
/// @param self KPixmapSequenceOverlayPainter*
int32_t k_pixmapsequenceoverlaypainter_interval(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#rect)
///
/// @param self KPixmapSequenceOverlayPainter*
QRect* k_pixmapsequenceoverlaypainter_rect(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#alignment)
///
/// @param self KPixmapSequenceOverlayPainter*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t k_pixmapsequenceoverlaypainter_alignment(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#offset)
///
/// @param self KPixmapSequenceOverlayPainter*
QPoint* k_pixmapsequenceoverlaypainter_offset(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setSequence)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param seq KPixmapSequence*
void k_pixmapsequenceoverlaypainter_set_sequence(void* self, void* seq);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setInterval)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param msecs int
void k_pixmapsequenceoverlaypainter_set_interval(void* self, int msecs);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setWidget)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param w QWidget*
void k_pixmapsequenceoverlaypainter_set_widget(void* self, void* w);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setRect)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param rect QRect*
void k_pixmapsequenceoverlaypainter_set_rect(void* self, void* rect);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setAlignment)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param align flag of enum Qt__AlignmentFlag
void k_pixmapsequenceoverlaypainter_set_alignment(void* self, int64_t align);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#setOffset)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param offset QPoint*
void k_pixmapsequenceoverlaypainter_set_offset(void* self, void* offset);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#start)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_start(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#stop)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_stop(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param obj QObject*
/// @param event QEvent*
bool k_pixmapsequenceoverlaypainter_event_filter(void* self, void* obj, void* event);

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback bool func(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event)
void k_pixmapsequenceoverlaypainter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param obj QObject*
/// @param event QEvent*
bool k_pixmapsequenceoverlaypainter_qbase_event_filter(void* self, void* obj, void* event);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_pixmapsequenceoverlaypainter_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_pixmapsequenceoverlaypainter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPixmapSequenceOverlayPainter*
const char* k_pixmapsequenceoverlaypainter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param name char*
void k_pixmapsequenceoverlaypainter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPixmapSequenceOverlayPainter*
bool k_pixmapsequenceoverlaypainter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPixmapSequenceOverlayPainter*
bool k_pixmapsequenceoverlaypainter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPixmapSequenceOverlayPainter*
bool k_pixmapsequenceoverlaypainter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPixmapSequenceOverlayPainter*
bool k_pixmapsequenceoverlaypainter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param b bool
bool k_pixmapsequenceoverlaypainter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPixmapSequenceOverlayPainter*
QThread* k_pixmapsequenceoverlaypainter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param thread QThread*
bool k_pixmapsequenceoverlaypainter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param interval int
int32_t k_pixmapsequenceoverlaypainter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param id int
void k_pixmapsequenceoverlaypainter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param id enum Qt__TimerId
void k_pixmapsequenceoverlaypainter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPixmapSequenceOverlayPainter*
libqt_list /* of QObject* */ k_pixmapsequenceoverlaypainter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param parent QObject*
void k_pixmapsequenceoverlaypainter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param filterObj QObject*
void k_pixmapsequenceoverlaypainter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param obj QObject*
void k_pixmapsequenceoverlaypainter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_pixmapsequenceoverlaypainter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_pixmapsequenceoverlaypainter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param name const char*
/// @param value QVariant*
bool k_pixmapsequenceoverlaypainter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param name const char*
QVariant* k_pixmapsequenceoverlaypainter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPixmapSequenceOverlayPainter*
const char** k_pixmapsequenceoverlaypainter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPixmapSequenceOverlayPainter*
QBindingStorage* k_pixmapsequenceoverlaypainter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPixmapSequenceOverlayPainter*
const QBindingStorage* k_pixmapsequenceoverlaypainter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self)
void k_pixmapsequenceoverlaypainter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPixmapSequenceOverlayPainter*
QObject* k_pixmapsequenceoverlaypainter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param classname const char*
bool k_pixmapsequenceoverlaypainter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_pixmapsequenceoverlaypainter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_pixmapsequenceoverlaypainter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_pixmapsequenceoverlaypainter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param param1 QObject*
void k_pixmapsequenceoverlaypainter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QObject* param1)
void k_pixmapsequenceoverlaypainter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QEvent*
bool k_pixmapsequenceoverlaypainter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QEvent*
bool k_pixmapsequenceoverlaypainter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback bool func(KPixmapSequenceOverlayPainter* self, QEvent* event)
void k_pixmapsequenceoverlaypainter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QTimerEvent*
void k_pixmapsequenceoverlaypainter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QTimerEvent*
void k_pixmapsequenceoverlaypainter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QTimerEvent* event)
void k_pixmapsequenceoverlaypainter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QChildEvent*
void k_pixmapsequenceoverlaypainter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QChildEvent*
void k_pixmapsequenceoverlaypainter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QChildEvent* event)
void k_pixmapsequenceoverlaypainter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QEvent*
void k_pixmapsequenceoverlaypainter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param event QEvent*
void k_pixmapsequenceoverlaypainter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QEvent* event)
void k_pixmapsequenceoverlaypainter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
void k_pixmapsequenceoverlaypainter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
void k_pixmapsequenceoverlaypainter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QMetaMethod* signal)
void k_pixmapsequenceoverlaypainter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
void k_pixmapsequenceoverlaypainter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
void k_pixmapsequenceoverlaypainter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, QMetaMethod* signal)
void k_pixmapsequenceoverlaypainter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
QObject* k_pixmapsequenceoverlaypainter_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
QObject* k_pixmapsequenceoverlaypainter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback QObject* func()
void k_pixmapsequenceoverlaypainter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
int32_t k_pixmapsequenceoverlaypainter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
int32_t k_pixmapsequenceoverlaypainter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback int32_t func()
void k_pixmapsequenceoverlaypainter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal const char*
int32_t k_pixmapsequenceoverlaypainter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal const char*
int32_t k_pixmapsequenceoverlaypainter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback int32_t func(KPixmapSequenceOverlayPainter* self, const char* signal)
void k_pixmapsequenceoverlaypainter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
bool k_pixmapsequenceoverlaypainter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param signal QMetaMethod*
bool k_pixmapsequenceoverlaypainter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback bool func(KPixmapSequenceOverlayPainter* self, QMetaMethod* signal)
void k_pixmapsequenceoverlaypainter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPixmapSequenceOverlayPainter*
/// @param callback void func(KPixmapSequenceOverlayPainter* self, const char* objectName)
void k_pixmapsequenceoverlaypainter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kpixmapsequenceoverlaypainter.html#dtor.KPixmapSequenceOverlayPainter)
///
/// Delete this object from C++ memory.
///
/// @param self KPixmapSequenceOverlayPainter*
void k_pixmapsequenceoverlaypainter_delete(void* self);

#endif
