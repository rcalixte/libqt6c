#pragma once
#ifndef SRC_QT6C_LIBQCLIPBOARD_H
#define SRC_QT6C_LIBQCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QClipboard*
///
const QMetaObject* q_clipboard_meta_object(void* self);

/// @param self QClipboard*
/// @param param1 const char*
///
void* q_clipboard_metacast(void* self, const char* param1);

/// @param self QClipboard*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_clipboard_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_clipboard_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// @param self QClipboard*
///
void q_clipboard_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
///
/// @param self QClipboard*
///
bool q_clipboard_supports_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
///
/// @param self QClipboard*
///
bool q_clipboard_supports_find_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
///
/// @param self QClipboard*
///
bool q_clipboard_owns_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
///
/// @param self QClipboard*
///
bool q_clipboard_owns_clipboard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
///
/// @param self QClipboard*
///
bool q_clipboard_owns_find_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
///
const char* q_clipboard_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
/// @param subtype const char*
///
const char* q_clipboard_text2(void* self, const char* subtype);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// @param self QClipboard*
/// @param param1 const char*
///
void q_clipboard_set_text(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// @param self QClipboard*
///
const QMimeData* q_clipboard_mime_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// @param self QClipboard*
/// @param data QMimeData*
///
void q_clipboard_set_mime_data(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// @param self QClipboard*
///
QImage* q_clipboard_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// @param self QClipboard*
///
QPixmap* q_clipboard_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// @param self QClipboard*
/// @param param1 QImage*
///
void q_clipboard_set_image(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// @param self QClipboard*
/// @param param1 QPixmap*
///
void q_clipboard_set_pixmap(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_changed(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self, enum QClipboard__Mode mode)
///
void q_clipboard_on_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
///
/// @param self QClipboard*
///
void q_clipboard_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self)
///
void q_clipboard_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
///
/// @param self QClipboard*
///
void q_clipboard_find_buffer_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self)
///
void q_clipboard_on_find_buffer_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
///
/// @param self QClipboard*
///
void q_clipboard_data_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self)
///
void q_clipboard_on_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_clipboard_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_clipboard_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_clear1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
const char* q_clipboard_text1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
/// @param subtype const char*
/// @param mode enum QClipboard__Mode
///
const char* q_clipboard_text22(void* self, const char* subtype, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// @param self QClipboard*
/// @param param1 const char*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_set_text2(void* self, const char* param1, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
const QMimeData* q_clipboard_mime_data1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// @param self QClipboard*
/// @param data QMimeData*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_set_mime_data2(void* self, void* data, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
QImage* q_clipboard_image1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// @param self QClipboard*
/// @param mode enum QClipboard__Mode
///
QPixmap* q_clipboard_pixmap1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// @param self QClipboard*
/// @param param1 QImage*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_set_image2(void* self, void* param1, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// @param self QClipboard*
/// @param param1 QPixmap*
/// @param mode enum QClipboard__Mode
///
void q_clipboard_set_pixmap2(void* self, void* param1, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QClipboard*
/// @param event QEvent*
///
bool q_clipboard_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QClipboard*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_clipboard_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
///
const char* q_clipboard_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QClipboard*
/// @param name char*
///
void q_clipboard_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QClipboard*
///
bool q_clipboard_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QClipboard*
///
bool q_clipboard_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QClipboard*
///
bool q_clipboard_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QClipboard*
///
bool q_clipboard_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QClipboard*
/// @param b bool
///
bool q_clipboard_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QClipboard*
///
QThread* q_clipboard_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QClipboard*
/// @param thread QThread*
///
bool q_clipboard_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QClipboard*
/// @param interval int
///
int32_t q_clipboard_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QClipboard*
/// @param id int
///
void q_clipboard_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QClipboard*
/// @param id enum Qt__TimerId
///
void q_clipboard_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QClipboard*
///
libqt_list /* of QObject* */ q_clipboard_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QClipboard*
/// @param parent QObject*
///
void q_clipboard_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QClipboard*
/// @param filterObj QObject*
///
void q_clipboard_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QClipboard*
/// @param obj QObject*
///
void q_clipboard_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_clipboard_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QClipboard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_clipboard_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_clipboard_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_clipboard_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QClipboard*
///
void q_clipboard_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QClipboard*
///
void q_clipboard_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QClipboard*
/// @param name const char*
/// @param value QVariant*
///
bool q_clipboard_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QClipboard*
/// @param name const char*
///
QVariant* q_clipboard_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QClipboard*
///
const char** q_clipboard_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QClipboard*
///
QBindingStorage* q_clipboard_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QClipboard*
///
const QBindingStorage* q_clipboard_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QClipboard*
///
void q_clipboard_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self)
///
void q_clipboard_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QClipboard*
///
QObject* q_clipboard_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QClipboard*
/// @param classname const char*
///
bool q_clipboard_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QClipboard*
///
void q_clipboard_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QClipboard*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_clipboard_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QClipboard*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_clipboard_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_clipboard_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QClipboard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_clipboard_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QClipboard*
/// @param param1 QObject*
///
void q_clipboard_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self, QObject* param1)
///
void q_clipboard_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QClipboard*
/// @param callback void func(QClipboard* self, const char* objectName)
///
void q_clipboard_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#public-types)

typedef enum {
    QCLIPBOARD_MODE_CLIPBOARD = 0,
    QCLIPBOARD_MODE_SELECTION = 1,
    QCLIPBOARD_MODE_FINDBUFFER = 2,
    QCLIPBOARD_MODE_LASTMODE = 2
} QClipboard__Mode;

#endif
