#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqimageiohandler.hpp"
#include "libqimageiohandler.h"

/// https://doc.qt.io/qt-6/qimageiohandler.html

/// q_imageiohandler_new constructs a new QImageIOHandler object.
///
///
QImageIOHandler* q_imageiohandler_new() {
    return QImageIOHandler_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
///
/// ``` QImageIOHandler* self, QIODevice* device ```
void q_imageiohandler_set_device(void* self, void* device) {
    QImageIOHandler_SetDevice((QImageIOHandler*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#device)
///
/// ``` QImageIOHandler* self ```
QIODevice* q_imageiohandler_device(void* self) {
    return QImageIOHandler_Device((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// ``` QImageIOHandler* self, const char* format ```
void q_imageiohandler_set_format(void* self, const char* format) {
    QImageIOHandler_SetFormat((QImageIOHandler*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
///
/// ``` QImageIOHandler* self, const char* format ```
void q_imageiohandler_set_format_with_format(void* self, const char* format) {
    QImageIOHandler_SetFormatWithFormat((QImageIOHandler*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#format)
///
/// ``` QImageIOHandler* self ```
char* q_imageiohandler_format(void* self) {
    libqt_string _str = QImageIOHandler_Format((QImageIOHandler*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_can_read(void* self) {
    return QImageIOHandler_CanRead((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)() ```
void q_imageiohandler_on_can_read(void* self, bool (*slot)()) {
    QImageIOHandler_OnCanRead((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_qbase_can_read(void* self) {
    return QImageIOHandler_QBaseCanRead((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_read(void* self, void* image) {
    return QImageIOHandler_Read((QImageIOHandler*)self, (QImage*)image);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, QImage*) ```
void q_imageiohandler_on_read(void* self, bool (*slot)(void*, void*)) {
    QImageIOHandler_OnRead((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_qbase_read(void* self, void* image) {
    return QImageIOHandler_QBaseRead((QImageIOHandler*)self, (QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_write(void* self, void* image) {
    return QImageIOHandler_Write((QImageIOHandler*)self, (QImage*)image);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, QImage*) ```
void q_imageiohandler_on_write(void* self, bool (*slot)(void*, void*)) {
    QImageIOHandler_OnWrite((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, QImage* image ```
bool q_imageiohandler_qbase_write(void* self, void* image) {
    return QImageIOHandler_QBaseWrite((QImageIOHandler*)self, (QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
QVariant* q_imageiohandler_option(void* self, int64_t option) {
    return QImageIOHandler_Option((QImageIOHandler*)self, option);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, QVariant* (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption) ```
void q_imageiohandler_on_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QImageIOHandler_OnOption((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
QVariant* q_imageiohandler_qbase_option(void* self, int64_t option) {
    return QImageIOHandler_QBaseOption((QImageIOHandler*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option, QVariant* value ```
void q_imageiohandler_set_option(void* self, int64_t option, void* value) {
    QImageIOHandler_SetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, void (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption, QVariant*) ```
void q_imageiohandler_on_set_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QImageIOHandler_OnSetOption((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option, QVariant* value ```
void q_imageiohandler_qbase_set_option(void* self, int64_t option, void* value) {
    QImageIOHandler_QBaseSetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
bool q_imageiohandler_supports_option(void* self, int64_t option) {
    return QImageIOHandler_SupportsOption((QImageIOHandler*)self, option);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, enum QImageIOHandler__ImageOption) ```
void q_imageiohandler_on_supports_option(void* self, bool (*slot)(void*, int64_t)) {
    QImageIOHandler_OnSupportsOption((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, enum QImageIOHandler__ImageOption option ```
bool q_imageiohandler_qbase_supports_option(void* self, int64_t option) {
    return QImageIOHandler_QBaseSupportsOption((QImageIOHandler*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_jump_to_next_image(void* self) {
    return QImageIOHandler_JumpToNextImage((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)() ```
void q_imageiohandler_on_jump_to_next_image(void* self, bool (*slot)()) {
    QImageIOHandler_OnJumpToNextImage((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
bool q_imageiohandler_qbase_jump_to_next_image(void* self) {
    return QImageIOHandler_QBaseJumpToNextImage((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
///
/// ``` QImageIOHandler* self, int imageNumber ```
bool q_imageiohandler_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_JumpToImage((QImageIOHandler*)self, imageNumber);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, bool (*slot)(QImageIOHandler*, int) ```
void q_imageiohandler_on_jump_to_image(void* self, bool (*slot)(void*, int)) {
    QImageIOHandler_OnJumpToImage((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self, int imageNumber ```
bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_QBaseJumpToImage((QImageIOHandler*)self, imageNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_loop_count(void* self) {
    return QImageIOHandler_LoopCount((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_loop_count(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnLoopCount((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_loop_count(void* self) {
    return QImageIOHandler_QBaseLoopCount((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_image_count(void* self) {
    return QImageIOHandler_ImageCount((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_image_count(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnImageCount((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_image_count(void* self) {
    return QImageIOHandler_QBaseImageCount((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_next_image_delay(void* self) {
    return QImageIOHandler_NextImageDelay((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_next_image_delay(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnNextImageDelay((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_next_image_delay(void* self) {
    return QImageIOHandler_QBaseNextImageDelay((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_current_image_number(void* self) {
    return QImageIOHandler_CurrentImageNumber((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, int32_t (*slot)() ```
void q_imageiohandler_on_current_image_number(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnCurrentImageNumber((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
int32_t q_imageiohandler_qbase_current_image_number(void* self) {
    return QImageIOHandler_QBaseCurrentImageNumber((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
///
/// ``` QImageIOHandler* self ```
QRect* q_imageiohandler_current_image_rect(void* self) {
    return QImageIOHandler_CurrentImageRect((QImageIOHandler*)self);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOHandler* self, QRect* (*slot)() ```
void q_imageiohandler_on_current_image_rect(void* self, QRect* (*slot)()) {
    QImageIOHandler_OnCurrentImageRect((QImageIOHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOHandler* self ```
QRect* q_imageiohandler_qbase_current_image_rect(void* self) {
    return QImageIOHandler_QBaseCurrentImageRect((QImageIOHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
///
/// ``` QSize* size, enum QImage__Format format, QImage* image ```
bool q_imageiohandler_allocate_image(void* size, int64_t format, void* image) {
    return QImageIOHandler_AllocateImage((QSize*)size, format, (QImage*)image);
}

/// Delete this object from C++ memory.
///
/// ``` QImageIOHandler* self ```
void q_imageiohandler_delete(void* self) {
    QImageIOHandler_Delete((QImageIOHandler*)(self));
}

/// https://doc.qt.io/qt-6/qimageioplugin.html

/// q_imageioplugin_new constructs a new QImageIOPlugin object.
///
///
QImageIOPlugin* q_imageioplugin_new() {
    return QImageIOPlugin_new();
}

/// q_imageioplugin_new2 constructs a new QImageIOPlugin object.
///
/// ``` QObject* parent ```
QImageIOPlugin* q_imageioplugin_new2(void* parent) {
    return QImageIOPlugin_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QImageIOPlugin* self ```
QMetaObject* q_imageioplugin_meta_object(void* self) {
    return QImageIOPlugin_MetaObject((QImageIOPlugin*)self);
}

/// ``` QImageIOPlugin* self, const char* param1 ```
void* q_imageioplugin_metacast(void* self, const char* param1) {
    return QImageIOPlugin_Metacast((QImageIOPlugin*)self, param1);
}

/// ``` QImageIOPlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imageioplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageIOPlugin_Metacall((QImageIOPlugin*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)(QImageIOPlugin*, enum QMetaObject__Call, int, void*) ```
void q_imageioplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QImageIOPlugin_OnMetacall((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imageioplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageIOPlugin_QBaseMetacall((QImageIOPlugin*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_imageioplugin_tr(const char* s) {
    libqt_string _str = QImageIOPlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
int64_t q_imageioplugin_capabilities(void* self, void* device, const char* format) {
    return QImageIOPlugin_Capabilities((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, int64_t (*slot)(QImageIOPlugin*, QIODevice*, const char*) ```
void q_imageioplugin_on_capabilities(void* self, int64_t (*slot)(void*, void*, const char*)) {
    QImageIOPlugin_OnCapabilities((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
int64_t q_imageioplugin_qbase_capabilities(void* self, void* device, const char* format) {
    return QImageIOPlugin_QBaseCapabilities((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format) {
    return QImageIOPlugin_Create((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

/// Allows for overriding the related default method
///
/// ``` QImageIOPlugin* self, QImageIOHandler* (*slot)(QImageIOPlugin*, QIODevice*, const char*) ```
void q_imageioplugin_on_create(void* self, QImageIOHandler* (*slot)(void*, void*, const char*)) {
    QImageIOPlugin_OnCreate((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageIOPlugin* self, QIODevice* device, const char* format ```
QImageIOHandler* q_imageioplugin_qbase_create(void* self, void* device, const char* format) {
    return QImageIOPlugin_QBaseCreate((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_imageioplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QImageIOPlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_imageioplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QImageIOPlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QImageIOPlugin* self ```
const char* q_imageioplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QImageIOPlugin* self, const char* name ```
void q_imageioplugin_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QImageIOPlugin* self ```
bool q_imageioplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QImageIOPlugin* self, bool b ```
bool q_imageioplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QImageIOPlugin* self ```
QThread* q_imageioplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QImageIOPlugin* self, QThread* thread ```
void q_imageioplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageIOPlugin* self, int interval ```
int32_t q_imageioplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QImageIOPlugin* self, int id ```
void q_imageioplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QImageIOPlugin* self ```
libqt_list /* of QObject* */ q_imageioplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QImageIOPlugin* self, QObject* parent ```
void q_imageioplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QImageIOPlugin* self, QObject* filterObj ```
void q_imageioplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QImageIOPlugin* self, QObject* obj ```
void q_imageioplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageIOPlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_imageioplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QImageIOPlugin* self, const char* name, QVariant* value ```
bool q_imageioplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QImageIOPlugin* self, const char* name ```
QVariant* q_imageioplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QImageIOPlugin* self ```
const char** q_imageioplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageIOPlugin* self ```
QBindingStorage* q_imageioplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageIOPlugin* self ```
QBindingStorage* q_imageioplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QImageIOPlugin* self, void (*slot)(QObject*) ```
void q_imageioplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QImageIOPlugin* self, const char* classname ```
bool q_imageioplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageIOPlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_imageioplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageIOPlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageIOPlugin* self, QObject* param1 ```
void q_imageioplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QImageIOPlugin* self, void (*slot)(QObject*, QObject*) ```
void q_imageioplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
bool q_imageioplugin_event(void* self, void* event) {
    return QImageIOPlugin_Event((QImageIOPlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
bool q_imageioplugin_qbase_event(void* self, void* event) {
    return QImageIOPlugin_QBaseEvent((QImageIOPlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QEvent*) ```
void q_imageioplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QImageIOPlugin_OnEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* watched, QEvent* event ```
bool q_imageioplugin_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_EventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* watched, QEvent* event ```
bool q_imageioplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_QBaseEventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QObject*, QEvent*) ```
void q_imageioplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QImageIOPlugin_OnEventFilter((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QTimerEvent* event ```
void q_imageioplugin_timer_event(void* self, void* event) {
    QImageIOPlugin_TimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QTimerEvent* event ```
void q_imageioplugin_qbase_timer_event(void* self, void* event) {
    QImageIOPlugin_QBaseTimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QTimerEvent*) ```
void q_imageioplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnTimerEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QChildEvent* event ```
void q_imageioplugin_child_event(void* self, void* event) {
    QImageIOPlugin_ChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QChildEvent* event ```
void q_imageioplugin_qbase_child_event(void* self, void* event) {
    QImageIOPlugin_QBaseChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QChildEvent*) ```
void q_imageioplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnChildEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
void q_imageioplugin_custom_event(void* self, void* event) {
    QImageIOPlugin_CustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QEvent* event ```
void q_imageioplugin_qbase_custom_event(void* self, void* event) {
    QImageIOPlugin_QBaseCustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QEvent*) ```
void q_imageioplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnCustomEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_connect_notify(void* self, void* signal) {
    QImageIOPlugin_ConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_qbase_connect_notify(void* self, void* signal) {
    QImageIOPlugin_QBaseConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnConnectNotify((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_disconnect_notify(void* self, void* signal) {
    QImageIOPlugin_DisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
void q_imageioplugin_qbase_disconnect_notify(void* self, void* signal) {
    QImageIOPlugin_QBaseDisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, void (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnDisconnectNotify((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_sender(void* self) {
    return QImageIOPlugin_Sender((QImageIOPlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self ```
QObject* q_imageioplugin_qbase_sender(void* self) {
    return QImageIOPlugin_QBaseSender((QImageIOPlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QObject* (*slot)() ```
void q_imageioplugin_on_sender(void* self, QObject* (*slot)()) {
    QImageIOPlugin_OnSender((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self ```
int32_t q_imageioplugin_sender_signal_index(void* self) {
    return QImageIOPlugin_SenderSignalIndex((QImageIOPlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self ```
int32_t q_imageioplugin_qbase_sender_signal_index(void* self) {
    return QImageIOPlugin_QBaseSenderSignalIndex((QImageIOPlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)() ```
void q_imageioplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QImageIOPlugin_OnSenderSignalIndex((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, const char* signal ```
int32_t q_imageioplugin_receivers(void* self, const char* signal) {
    return QImageIOPlugin_Receivers((QImageIOPlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, const char* signal ```
int32_t q_imageioplugin_qbase_receivers(void* self, const char* signal) {
    return QImageIOPlugin_QBaseReceivers((QImageIOPlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, int32_t (*slot)(QImageIOPlugin*, const char*) ```
void q_imageioplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QImageIOPlugin_OnReceivers((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
bool q_imageioplugin_is_signal_connected(void* self, void* signal) {
    return QImageIOPlugin_IsSignalConnected((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageIOPlugin* self, QMetaMethod* signal ```
bool q_imageioplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QImageIOPlugin_QBaseIsSignalConnected((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageIOPlugin* self, bool (*slot)(QImageIOPlugin*, QMetaMethod*) ```
void q_imageioplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QImageIOPlugin_OnIsSignalConnected((QImageIOPlugin*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QImageIOPlugin* self ```
void q_imageioplugin_delete(void* self) {
    QImageIOPlugin_Delete((QImageIOPlugin*)(self));
}