#pragma once
#ifndef SRC_QT6C_LIBQIMAGEIOHANDLER_H
#define SRC_QT6C_LIBQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html)

/// q_imageiohandler_new constructs a new QImageIOHandler object.
///
QImageIOHandler* q_imageiohandler_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
///
/// @param self QImageIOHandler*
/// @param device QIODevice*
///
void q_imageiohandler_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#device)
///
/// @param self QImageIOHandler*
///
QIODevice* q_imageiohandler_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// @param self QImageIOHandler*
/// @param format const char*
///
void q_imageiohandler_set_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// @param self QImageIOHandler*
/// @param format const char*
///
void q_imageiohandler_set_format2(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#format)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QImageIOHandler*
///
char* q_imageiohandler_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// @param self QImageIOHandler*
///
bool q_imageiohandler_can_read(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func()
///
void q_imageiohandler_on_can_read(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
bool q_imageiohandler_qbase_can_read(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// @param self QImageIOHandler*
/// @param image QImage*
///
bool q_imageiohandler_read(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func(QImageIOHandler* self, QImage* image)
///
void q_imageiohandler_on_read(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param image QImage*
///
bool q_imageiohandler_qbase_read(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// @param self QImageIOHandler*
/// @param image QImage*
///
bool q_imageiohandler_write(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func(QImageIOHandler* self, QImage* image)
///
void q_imageiohandler_on_write(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param image QImage*
///
bool q_imageiohandler_qbase_write(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
///
QVariant* q_imageiohandler_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback QVariant* func(QImageIOHandler* self, enum QImageIOHandler__ImageOption option)
///
void q_imageiohandler_on_option(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
///
QVariant* q_imageiohandler_qbase_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
/// @param value QVariant*
///
void q_imageiohandler_set_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback void func(QImageIOHandler* self, enum QImageIOHandler__ImageOption option, QVariant* value)
///
void q_imageiohandler_on_set_option(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
/// @param value QVariant*
///
void q_imageiohandler_qbase_set_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
///
bool q_imageiohandler_supports_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func(QImageIOHandler* self, enum QImageIOHandler__ImageOption option)
///
void q_imageiohandler_on_supports_option(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param option enum QImageIOHandler__ImageOption
///
bool q_imageiohandler_qbase_supports_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// @param self QImageIOHandler*
///
bool q_imageiohandler_jump_to_next_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func()
///
void q_imageiohandler_on_jump_to_next_image(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
bool q_imageiohandler_qbase_jump_to_next_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// @param self QImageIOHandler*
/// @param imageNumber int
///
bool q_imageiohandler_jump_to_image(void* self, int imageNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback bool func(QImageIOHandler* self, int imageNumber)
///
void q_imageiohandler_on_jump_to_image(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
/// @param imageNumber int
///
bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t func()
///
void q_imageiohandler_on_loop_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_qbase_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_image_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t func()
///
void q_imageiohandler_on_image_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_qbase_image_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_next_image_delay(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t func()
///
void q_imageiohandler_on_next_image_delay(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_qbase_next_image_delay(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_current_image_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback int32_t func()
///
void q_imageiohandler_on_current_image_number(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
int32_t q_imageiohandler_qbase_current_image_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// @param self QImageIOHandler*
///
QRect* q_imageiohandler_current_image_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOHandler*
/// @param callback QRect* func()
///
void q_imageiohandler_on_current_image_rect(void* self, QRect* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// Base class method implementation
///
/// @param self QImageIOHandler*
///
QRect* q_imageiohandler_qbase_current_image_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
///
/// @param size QSize*
/// @param format enum QImage__Format
/// @param image QImage*
///
bool q_imageiohandler_allocate_image(void* size, int32_t format, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#dtor.QImageIOHandler)
///
/// Delete this object from C++ memory.
///
/// @param self QImageIOHandler*
///
void q_imageiohandler_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html)

/// q_imageioplugin_new constructs a new QImageIOPlugin object.
///
QImageIOPlugin* q_imageioplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html)

/// q_imageioplugin_new2 constructs a new QImageIOPlugin object.
///
/// @param parent QObject*
///
QImageIOPlugin* q_imageioplugin_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QImageIOPlugin*
///
const QMetaObject* q_imageioplugin_meta_object(void* self);

/// @param self QImageIOPlugin*
/// @param param1 const char*
///
void* q_imageioplugin_metacast(void* self, const char* param1);

/// @param self QImageIOPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_imageioplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QImageIOPlugin*
/// @param callback int32_t func(QImageIOPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_imageioplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QImageIOPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_imageioplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_imageioplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
///
/// @return flag of enum QImageIOPlugin__Capability
///
int32_t q_imageioplugin_capabilities(void* self, void* device, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOPlugin*
/// @param callback int32_t func(QImageIOPlugin* self, QIODevice* device, const char* format)
///
void q_imageioplugin_on_capabilities(void* self, int32_t (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// Base class method implementation
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
///
/// @return flag of enum QImageIOPlugin__Capability
///
int32_t q_imageioplugin_qbase_capabilities(void* self, void* device, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
///
QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QImageIOPlugin*
/// @param callback QImageIOHandler* func(QImageIOPlugin* self, QIODevice* device, const char* format)
///
void q_imageioplugin_on_create(void* self, QImageIOHandler* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// Base class method implementation
///
/// @param self QImageIOPlugin*
/// @param device QIODevice*
/// @param format const char*
///
QImageIOHandler* q_imageioplugin_qbase_create(void* self, void* device, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_imageioplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_imageioplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QImageIOPlugin*
///
const char* q_imageioplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QImageIOPlugin*
/// @param name char*
///
void q_imageioplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QImageIOPlugin*
///
bool q_imageioplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QImageIOPlugin*
///
bool q_imageioplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QImageIOPlugin*
///
bool q_imageioplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QImageIOPlugin*
///
bool q_imageioplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QImageIOPlugin*
/// @param b bool
///
bool q_imageioplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QImageIOPlugin*
///
QThread* q_imageioplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QImageIOPlugin*
/// @param thread QThread*
///
bool q_imageioplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QImageIOPlugin*
/// @param interval int
///
int32_t q_imageioplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QImageIOPlugin*
/// @param id int
///
void q_imageioplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QImageIOPlugin*
/// @param id enum Qt__TimerId
///
void q_imageioplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QImageIOPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_imageioplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QImageIOPlugin*
/// @param parent QObject*
///
void q_imageioplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QImageIOPlugin*
/// @param filterObj QObject*
///
void q_imageioplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QImageIOPlugin*
/// @param obj QObject*
///
void q_imageioplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QImageIOPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_imageioplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QImageIOPlugin*
///
void q_imageioplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QImageIOPlugin*
///
void q_imageioplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QImageIOPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_imageioplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QImageIOPlugin*
/// @param name const char*
///
QVariant* q_imageioplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QImageIOPlugin*
///
const char** q_imageioplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QImageIOPlugin*
///
QBindingStorage* q_imageioplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QImageIOPlugin*
///
const QBindingStorage* q_imageioplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
///
void q_imageioplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self)
///
void q_imageioplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QImageIOPlugin*
///
QObject* q_imageioplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QImageIOPlugin*
/// @param classname const char*
///
bool q_imageioplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QImageIOPlugin*
///
void q_imageioplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QImageIOPlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_imageioplugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QImageIOPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_imageioplugin_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QImageIOPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param param1 QObject*
///
void q_imageioplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QObject* param1)
///
void q_imageioplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QEvent*
///
bool q_imageioplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QEvent*
///
bool q_imageioplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback bool func(QImageIOPlugin* self, QEvent* event)
///
void q_imageioplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_imageioplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_imageioplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback bool func(QImageIOPlugin* self, QObject* watched, QEvent* event)
///
void q_imageioplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QTimerEvent*
///
void q_imageioplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QTimerEvent*
///
void q_imageioplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QTimerEvent* event)
///
void q_imageioplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QChildEvent*
///
void q_imageioplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QChildEvent*
///
void q_imageioplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QChildEvent* event)
///
void q_imageioplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QEvent*
///
void q_imageioplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param event QEvent*
///
void q_imageioplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QEvent* event)
///
void q_imageioplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
void q_imageioplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
void q_imageioplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QMetaMethod* signal)
///
void q_imageioplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
void q_imageioplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
void q_imageioplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, QMetaMethod* signal)
///
void q_imageioplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
///
QObject* q_imageioplugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
///
QObject* q_imageioplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback QObject* func()
///
void q_imageioplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
///
int32_t q_imageioplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
///
int32_t q_imageioplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback int32_t func()
///
void q_imageioplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal const char*
///
int32_t q_imageioplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal const char*
///
int32_t q_imageioplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback int32_t func(QImageIOPlugin* self, const char* signal)
///
void q_imageioplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
bool q_imageioplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param signal QMetaMethod*
///
bool q_imageioplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImageIOPlugin*
/// @param callback bool func(QImageIOPlugin* self, QMetaMethod* signal)
///
void q_imageioplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QImageIOPlugin*
/// @param callback void func(QImageIOPlugin* self, const char* objectName)
///
void q_imageioplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#dtor.QImageIOPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QImageIOPlugin*
///
void q_imageioplugin_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#public-types)

typedef enum {
    QIMAGEIOPLUGIN_CAPABILITY_CANREAD = 1,
    QIMAGEIOPLUGIN_CAPABILITY_CANWRITE = 2,
    QIMAGEIOPLUGIN_CAPABILITY_CANREADINCREMENTAL = 4
} QImageIOPlugin__Capability;

#endif
