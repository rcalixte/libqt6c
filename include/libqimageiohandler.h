#pragma once
#ifndef SRCQT6C_LIBQIMAGEIOHANDLER_H
#define SRCQT6C_LIBQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qimageiohandler.html

/// q_imageiohandler_new constructs a new QImageIOHandler object.
///
QImageIOHandler* q_imageiohandler_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
///
/// @param self QImageIOHandler*
/// @param device QIODevice*
void q_imageiohandler_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#device)
///
/// @param self QImageIOHandler*
QIODevice* q_imageiohandler_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// @param self QImageIOHandler*
/// @param format const char*
void q_imageiohandler_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// @param self QImageIOHandler*
/// @param format const char*
void q_imageiohandler_set_format2(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#format)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageIOHandler*
char* q_imageiohandler_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// @param self QImageIOHandler*
bool q_imageiohandler_can_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn()
void q_imageiohandler_on_can_read(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
bool q_imageiohandler_qbase_can_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// @param self QImageIOHandler*
/// @param image QImage*
bool q_imageiohandler_read(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn(QImageIOHandler*, QImage*)
void q_imageiohandler_on_read(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param image QImage*
bool q_imageiohandler_qbase_read(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// @param self QImageIOHandler*
/// @param image QImage*
bool q_imageiohandler_write(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn(QImageIOHandler*, QImage*)
void q_imageiohandler_on_write(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param image QImage*
bool q_imageiohandler_qbase_write(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
QVariant* q_imageiohandler_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback QVariant* fn(QImageIOHandler*, enum QImageIOHandler__ImageOption)
void q_imageiohandler_on_option(void* self, QVariant* (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
QVariant* q_imageiohandler_qbase_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
/// @param value QVariant*
void q_imageiohandler_set_option(void* self, int32_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback void fn(QImageIOHandler*, enum QImageIOHandler__ImageOption, QVariant*)
void q_imageiohandler_on_set_option(void* self, void (*callback)(void*, int32_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
/// @param value QVariant*
void q_imageiohandler_qbase_set_option(void* self, int32_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
bool q_imageiohandler_supports_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn(QImageIOHandler*, enum QImageIOHandler__ImageOption)
void q_imageiohandler_on_supports_option(void* self, bool (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
bool q_imageiohandler_qbase_supports_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// @param self QImageIOHandler*
bool q_imageiohandler_jump_to_next_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn()
void q_imageiohandler_on_jump_to_next_image(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
bool q_imageiohandler_qbase_jump_to_next_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// @param self QImageIOHandler*
/// @param imageNumber int
bool q_imageiohandler_jump_to_image(void* self, int imageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool fn(QImageIOHandler*, int)
void q_imageiohandler_on_jump_to_image(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param imageNumber int
bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t fn()
void q_imageiohandler_on_loop_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_qbase_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_image_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t fn()
void q_imageiohandler_on_image_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_qbase_image_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_next_image_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t fn()
void q_imageiohandler_on_next_image_delay(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_qbase_next_image_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_current_image_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t fn()
void q_imageiohandler_on_current_image_number(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
int32_t q_imageiohandler_qbase_current_image_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// @param self QImageIOHandler*
QRect* q_imageiohandler_current_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback QRect* fn()
void q_imageiohandler_on_current_image_rect(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
QRect* q_imageiohandler_qbase_current_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
///
/// @param size QSize*
/// @param format enum QImage__Format
/// @param image QImage*
bool q_imageiohandler_allocate_image(void* size, int32_t format, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#dtor.QImageIOHandler)
///
/// Delete this object from C++ memory.
///
/// @param self QImageIOHandler*
void q_imageiohandler_delete(void* self);

/// https://doc.qt.io/qt-6/qimageioplugin.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QImageIOPlugin*
const QMetaObject* q_imageioplugin_meta_object(void* self);

/// @param self QImageIOPlugin*
/// @param param1 const char*
void* q_imageioplugin_metacast(void* self, const char* param1);

/// @param self QImageIOPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_imageioplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_imageioplugin_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
///
/// @return flag of enum QImageIOPlugin__Capability
int64_t q_imageioplugin_capabilities(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_imageioplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_imageioplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QImageIOPlugin*
/// @param event QEvent*
bool q_imageioplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QImageIOPlugin*
/// @param watched QObject*
/// @param event QEvent*
bool q_imageioplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageIOPlugin*
const char* q_imageioplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QImageIOPlugin*
/// @param name char*
void q_imageioplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QImageIOPlugin*
bool q_imageioplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QImageIOPlugin*
bool q_imageioplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QImageIOPlugin*
bool q_imageioplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QImageIOPlugin*
bool q_imageioplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QImageIOPlugin*
/// @param b bool
bool q_imageioplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QImageIOPlugin*
QThread* q_imageioplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QImageIOPlugin*
/// @param thread QThread*
bool q_imageioplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QImageIOPlugin*
/// @param interval int
int32_t q_imageioplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QImageIOPlugin*
/// @param id int
void q_imageioplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QImageIOPlugin*
/// @param id enum Qt__TimerId
void q_imageioplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QImageIOPlugin*
libqt_list /* of QObject* */ q_imageioplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QImageIOPlugin*
/// @param parent QObject*
void q_imageioplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QImageIOPlugin*
/// @param filterObj QObject*
void q_imageioplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QImageIOPlugin*
/// @param obj QObject*
void q_imageioplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QImageIOPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_imageioplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QImageIOPlugin*
void q_imageioplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QImageIOPlugin*
void q_imageioplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QImageIOPlugin*
/// @param name const char*
/// @param value QVariant*
bool q_imageioplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QImageIOPlugin*
/// @param name const char*
QVariant* q_imageioplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageIOPlugin*
const char** q_imageioplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QImageIOPlugin*
QBindingStorage* q_imageioplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QImageIOPlugin*
const QBindingStorage* q_imageioplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
void q_imageioplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param callback void fn(QImageIOPlugin*)
void q_imageioplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QImageIOPlugin*
QObject* q_imageioplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QImageIOPlugin*
/// @param classname const char*
bool q_imageioplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QImageIOPlugin*
void q_imageioplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QImageIOPlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_imageioplugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QImageIOPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_imageioplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QImageIOPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param param1 QObject*
void q_imageioplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param callback void fn(QImageIOPlugin*, QObject*)
void q_imageioplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QImageIOPlugin*
/// @param callback void fn(QImageIOPlugin*, const char*)
void q_imageioplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#dtor.QImageIOPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QImageIOPlugin*
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
