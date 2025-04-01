#pragma once
#ifndef SRCQT6C_LIBQCLIPBOARD_H
#define SRCQT6C_LIBQCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qclipboard.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QClipboard* self ```
QMetaObject* q_clipboard_meta_object(void* self);

/// ``` QClipboard* self, const char* param1 ```
void* q_clipboard_metacast(void* self, const char* param1);

/// ``` QClipboard* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_clipboard_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_clipboard_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// ``` QClipboard* self ```
void q_clipboard_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
///
/// ``` QClipboard* self ```
bool q_clipboard_supports_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
///
/// ``` QClipboard* self ```
bool q_clipboard_supports_find_buffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_clipboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
///
/// ``` QClipboard* self ```
bool q_clipboard_owns_find_buffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self ```
const char* q_clipboard_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, const char* subtype ```
const char* q_clipboard_text_with_subtype(void* self, const char* subtype);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// ``` QClipboard* self, const char* param1 ```
void q_clipboard_set_text(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// ``` QClipboard* self ```
QMimeData* q_clipboard_mime_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// ``` QClipboard* self, QMimeData* data ```
void q_clipboard_set_mime_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// ``` QClipboard* self ```
QImage* q_clipboard_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// ``` QClipboard* self ```
QPixmap* q_clipboard_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// ``` QClipboard* self, QImage* param1 ```
void q_clipboard_set_image(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// ``` QClipboard* self, QPixmap* param1 ```
void q_clipboard_set_pixmap(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#changed)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
void q_clipboard_changed(void* self, int64_t mode);

/// ``` QClipboard* self, void (*slot)(QClipboard*, enum QClipboard__Mode) ```
void q_clipboard_on_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_selection_changed(void* self);

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_find_buffer_changed(void* self);

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_find_buffer_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
///
/// ``` QClipboard* self ```
void q_clipboard_data_changed(void* self);

/// ``` QClipboard* self, void (*slot)(QClipboard*) ```
void q_clipboard_on_data_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_clipboard_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_clipboard_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#clear)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
void q_clipboard_clear1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
const char* q_clipboard_text1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#text)
///
/// ``` QClipboard* self, const char* subtype, enum QClipboard__Mode mode ```
const char* q_clipboard_text2(void* self, const char* subtype, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setText)
///
/// ``` QClipboard* self, const char* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_text2(void* self, const char* param1, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QMimeData* q_clipboard_mime_data1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
///
/// ``` QClipboard* self, QMimeData* data, enum QClipboard__Mode mode ```
void q_clipboard_set_mime_data2(void* self, void* data, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#image)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QImage* q_clipboard_image1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
///
/// ``` QClipboard* self, enum QClipboard__Mode mode ```
QPixmap* q_clipboard_pixmap1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setImage)
///
/// ``` QClipboard* self, QImage* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_image2(void* self, void* param1, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
///
/// ``` QClipboard* self, QPixmap* param1, enum QClipboard__Mode mode ```
void q_clipboard_set_pixmap2(void* self, void* param1, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QClipboard* self, QEvent* event ```
bool q_clipboard_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QClipboard* self, QObject* watched, QEvent* event ```
bool q_clipboard_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QClipboard* self ```
const char* q_clipboard_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QClipboard* self, const char* name ```
void q_clipboard_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QClipboard* self ```
bool q_clipboard_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QClipboard* self ```
bool q_clipboard_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QClipboard* self, bool b ```
bool q_clipboard_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QClipboard* self ```
QThread* q_clipboard_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QClipboard* self, QThread* thread ```
void q_clipboard_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QClipboard* self, int interval ```
int32_t q_clipboard_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QClipboard* self, int id ```
void q_clipboard_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QClipboard* self ```
libqt_list /* of QObject* */ q_clipboard_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QClipboard* self, QObject* parent ```
void q_clipboard_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QClipboard* self, QObject* filterObj ```
void q_clipboard_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QClipboard* self, QObject* obj ```
void q_clipboard_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_clipboard_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QClipboard* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_clipboard_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_clipboard_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_clipboard_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QClipboard* self ```
void q_clipboard_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QClipboard* self ```
void q_clipboard_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QClipboard* self, const char* name, QVariant* value ```
bool q_clipboard_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QClipboard* self, const char* name ```
QVariant* q_clipboard_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QClipboard* self ```
const char** q_clipboard_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QClipboard* self ```
QBindingStorage* q_clipboard_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QClipboard* self ```
QBindingStorage* q_clipboard_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QClipboard* self ```
void q_clipboard_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QClipboard* self, void (*slot)(QObject*) ```
void q_clipboard_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QClipboard* self ```
QObject* q_clipboard_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QClipboard* self, const char* classname ```
bool q_clipboard_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QClipboard* self ```
void q_clipboard_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QClipboard* self, int interval, enum Qt__TimerType timerType ```
int32_t q_clipboard_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_clipboard_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QClipboard* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_clipboard_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QClipboard* self, QObject* param1 ```
void q_clipboard_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QClipboard* self, void (*slot)(QObject*, QObject*) ```
void q_clipboard_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qclipboard.html#types

typedef enum {
    QCLIPBOARD_MODE_CLIPBOARD = 0,
    QCLIPBOARD_MODE_SELECTION = 1,
    QCLIPBOARD_MODE_FINDBUFFER = 2,
    QCLIPBOARD_MODE_LASTMODE = 2
} QClipboard__Mode;

#endif
