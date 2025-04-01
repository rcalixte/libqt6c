#pragma once
#ifndef SRCQT6C_LIBQIMAGEIOHANDLER_H
#define SRCQT6C_LIBQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qimageiohandler.html

/// q_imageiohandler_new constructs a new QImageIOHandler object.
///
///
QImageIOHandler* q_imageiohandler_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
///
/// ``` QImageIOHandler* self, QIODevice* device ```
void q_imageiohandler_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#device)
///
/// ``` QImageIOHandler* self ```
QIODevice* q_imageiohandler_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// ``` QImageIOHandler* self, const char* format ```
void q_imageiohandler_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// ``` QImageIOHandler* self, const char* format ```
void q_imageiohandler_set_format_with_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#format)
///
/// ``` QImageIOHandler* self ```
char* q_imageiohandler_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_can_read(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)() ```
void q_imageiohandler_on_can_read(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_qbase_can_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_read(void* self, void* image);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, QImage*) ```
void q_imageiohandler_on_read(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_qbase_read(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_write(void* self, void* image);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, QImage*) ```
void q_imageiohandler_on_write(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_qbase_write(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
QVariant* q_imageiohandler_option(void* self, int64_t option);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, QVariant* (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption) ```
void q_imageiohandler_on_option(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
QVariant* q_imageiohandler_qbase_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option, QVariant* value ```
void q_imageiohandler_set_option(void* self, int64_t option, void* value);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, void (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption, QVariant*) ```
void q_imageiohandler_on_set_option(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option, QVariant* value ```
void q_imageiohandler_qbase_set_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
bool q_imageiohandler_supports_option(void* self, int64_t option);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption) ```
void q_imageiohandler_on_supports_option(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
bool q_imageiohandler_qbase_supports_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_jump_to_next_image(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)() ```
void q_imageiohandler_on_jump_to_next_image(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_qbase_jump_to_next_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// ``` QImageIOHandler* self, int imageNumber ```
bool q_imageiohandler_jump_to_image(void* self, int imageNumber);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, int) ```
void q_imageiohandler_on_jump_to_image(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QImageIOHandler* self, int imageNumber ```
bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_loop_count(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_loop_count(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_image_count(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_image_count(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_image_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_next_image_delay(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_next_image_delay(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_next_image_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_current_image_number(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_current_image_number(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_current_image_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// ``` QImageIOHandler* self ```
QRect* q_imageiohandler_current_image_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, QRect* (*slot)() ```
void q_imageiohandler_on_current_image_rect(void* self, QRect* (*slot)());

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
QRect* q_imageiohandler_qbase_current_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
///
/// ``` QSize* size, enum QImage__Format format, QImage* image ```
bool q_imageiohandler_allocate_image(void* size, int64_t format, void* image);

/// Delete this object from C++ memory.
///
/// ``` QImageIOHandler* self ```
void q_imageiohandler_delete(void* self);

/// https://doc.qt.io/qt-6/qimageioplugin.html

/// q_imageioplugin_new constructs a new QImageIOPlugin object.
///
///
QImageIOPlugin* q_imageioplugin_new();

/// q_imageioplugin_new2 constructs a new QImageIOPlugin object.
///
/// ``` QObject* parent ```
QImageIOPlugin* q_imageioplugin_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QImageIOPlugin* self ```
QMetaObject* q_imageioplugin_meta_object(void* self);

/// ``` QImageIOPlugin* self, const char* param1 ```
void* q_imageioplugin_metacast(void* self, const char* param1);

/// ``` QImageIOPlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imageioplugin_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)(QImageIOPlugin*, enum QMetaObject__Call, int, void*) ```
void q_imageioplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imageioplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_imageioplugin_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
int64_t q_imageioplugin_capabilities(void* self, void* device, const char* format);

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, int64_t (*slot)(QImageIOPlugin*, QIODevice*, const char*) ```
void q_imageioplugin_on_capabilities(void* self, int64_t (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
int64_t q_imageioplugin_qbase_capabilities(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format);

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, QImageIOHandler* (*slot)(QImageIOPlugin*, QIODevice*, const char*) ```
void q_imageioplugin_on_create(void* self, QImageIOHandler* (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
QImageIOHandler* q_imageioplugin_qbase_create(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_imageioplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_imageioplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QImageIOPlugin* self ```
const char* q_imageioplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QImageIOPlugin* self, const char* name ```
void q_imageioplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QImageIOPlugin* self, bool b ```
bool q_imageioplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QImageIOPlugin* self ```
QThread* q_imageioplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QImageIOPlugin* self, QThread* thread ```
void q_imageioplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageIOPlugin* self, int interval ```
int32_t q_imageioplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QImageIOPlugin* self, int id ```
void q_imageioplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QImageIOPlugin* self ```
libqt_list /* of QObject* */ q_imageioplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QImageIOPlugin* self, QObject* parent ```
void q_imageioplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QImageIOPlugin* self, QObject* filterObj ```
void q_imageioplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QImageIOPlugin* self, QObject* obj ```
void q_imageioplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageIOPlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_imageioplugin_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QImageIOPlugin* self, const char* name, QVariant* value ```
bool q_imageioplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QImageIOPlugin* self, const char* name ```
QVariant* q_imageioplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QImageIOPlugin* self ```
const char** q_imageioplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageIOPlugin* self ```
QBindingStorage* q_imageioplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageIOPlugin* self ```
QBindingStorage* q_imageioplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QImageIOPlugin* self, void (*slot)(QObject*) ```
void q_imageioplugin_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QImageIOPlugin* self, const char* classname ```
bool q_imageioplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageIOPlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_imageioplugin_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageIOPlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageIOPlugin* self, QObject* param1 ```
void q_imageioplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QImageIOPlugin* self, void (*slot)(QObject*, QObject*) ```
void q_imageioplugin_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
bool q_imageioplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
bool q_imageioplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QEvent*) ```
void q_imageioplugin_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* watched, QEvent* event ```
bool q_imageioplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* watched, QEvent* event ```
bool q_imageioplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QObject*, QEvent*) ```
void q_imageioplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QTimerEvent* event ```
void q_imageioplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QTimerEvent* event ```
void q_imageioplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QTimerEvent*) ```
void q_imageioplugin_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QChildEvent* event ```
void q_imageioplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QChildEvent* event ```
void q_imageioplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QChildEvent*) ```
void q_imageioplugin_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
void q_imageioplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
void q_imageioplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QEvent*) ```
void q_imageioplugin_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* (*slot)() ```
void q_imageioplugin_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self ```
int32_t q_imageioplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self ```
int32_t q_imageioplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)() ```
void q_imageioplugin_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, const char* signal ```
int32_t q_imageioplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, const char* signal ```
int32_t q_imageioplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)(QImageIOPlugin*, const char*) ```
void q_imageioplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
bool q_imageioplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
bool q_imageioplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_delete(void* self);

/// https://doc.qt.io/qt-6/qimageiohandler.html#types

typedef enum {
    QIMAGEIOHANDLER_IMAGEOPTION_SIZE = 0,
    QIMAGEIOHANDLER_IMAGEOPTION_CLIPRECT = 1,
    QIMAGEIOHANDLER_IMAGEOPTION_DESCRIPTION = 2,
    QIMAGEIOHANDLER_IMAGEOPTION_SCALEDCLIPRECT = 3,
    QIMAGEIOHANDLER_IMAGEOPTION_SCALEDSIZE = 4,
    QIMAGEIOHANDLER_IMAGEOPTION_COMPRESSIONRATIO = 5,
    QIMAGEIOHANDLER_IMAGEOPTION_GAMMA = 6,
    QIMAGEIOHANDLER_IMAGEOPTION_QUALITY = 7,
    QIMAGEIOHANDLER_IMAGEOPTION_NAME = 8,
    QIMAGEIOHANDLER_IMAGEOPTION_SUBTYPE = 9,
    QIMAGEIOHANDLER_IMAGEOPTION_INCREMENTALREADING = 10,
    QIMAGEIOHANDLER_IMAGEOPTION_ENDIANNESS = 11,
    QIMAGEIOHANDLER_IMAGEOPTION_ANIMATION = 12,
    QIMAGEIOHANDLER_IMAGEOPTION_BACKGROUNDCOLOR = 13,
    QIMAGEIOHANDLER_IMAGEOPTION_IMAGEFORMAT = 14,
    QIMAGEIOHANDLER_IMAGEOPTION_SUPPORTEDSUBTYPES = 15,
    QIMAGEIOHANDLER_IMAGEOPTION_OPTIMIZEDWRITE = 16,
    QIMAGEIOHANDLER_IMAGEOPTION_PROGRESSIVESCANWRITE = 17,
    QIMAGEIOHANDLER_IMAGEOPTION_IMAGETRANSFORMATION = 18
} QImageIOHandler__ImageOption;

typedef enum {
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONNONE = 0,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONMIRROR = 1,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONFLIP = 2,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE180 = 3,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE90 = 4,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONMIRRORANDROTATE90 = 5,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONFLIPANDROTATE90 = 6,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE270 = 7
} QImageIOHandler__Transformation;

typedef enum {
    QIMAGEIOPLUGIN_CAPABILITY_CANREAD = 1,
    QIMAGEIOPLUGIN_CAPABILITY_CANWRITE = 2,
    QIMAGEIOPLUGIN_CAPABILITY_CANREADINCREMENTAL = 4
} QImageIOPlugin__Capability;

#endif
