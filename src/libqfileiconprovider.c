#include "libqabstractfileiconprovider.hpp"
#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include <string.h>
#include "libqfileiconprovider.hpp"
#include "libqfileiconprovider.h"

/// https://doc.qt.io/qt-6/qfileiconprovider.html

/// q_fileiconprovider_new constructs a new QFileIconProvider object.
///
///
QFileIconProvider* q_fileiconprovider_new() {
    return QFileIconProvider_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, enum QAbstractFileIconProvider__IconType typeVal ```
QIcon* q_fileiconprovider_icon(void* self, int64_t typeVal) {
    return QFileIconProvider_Icon((QFileIconProvider*)self, typeVal);
}

/// Allows for overriding the related default method
///
/// ``` QFileIconProvider* self, QIcon* (*slot)(QFileIconProvider*, enum QAbstractFileIconProvider__IconType) ```
void q_fileiconprovider_on_icon(void* self, QIcon* (*slot)(void*, int64_t)) {
    QFileIconProvider_OnIcon((QFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileIconProvider* self, enum QAbstractFileIconProvider__IconType typeVal ```
QIcon* q_fileiconprovider_qbase_icon(void* self, int64_t typeVal) {
    return QFileIconProvider_QBaseIcon((QFileIconProvider*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, QFileInfo* info ```
QIcon* q_fileiconprovider_icon_with_info(void* self, void* info) {
    return QFileIconProvider_IconWithInfo((QFileIconProvider*)self, (QFileInfo*)info);
}

/// Allows for overriding the related default method
///
/// ``` QFileIconProvider* self, QIcon* (*slot)(QFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_icon_with_info(void* self, QIcon* (*slot)(void*, void*)) {
    QFileIconProvider_OnIconWithInfo((QFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileIconProvider* self, QFileInfo* info ```
QIcon* q_fileiconprovider_qbase_icon_with_info(void* self, void* info) {
    return QFileIconProvider_QBaseIconWithInfo((QFileIconProvider*)self, (QFileInfo*)info);
}

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_fileiconprovider_icon_with_q_file_info(void* self, void* param1) {
    return QAbstractFileIconProvider_IconWithQFileInfo((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

/// Inherited from QAbstractFileIconProvider
///
/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, QIcon* (*slot)(QAbstractFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_icon_with_q_file_info(void* self, QIcon* (*slot)(void*, void*)) {
    QAbstractFileIconProvider_OnIconWithQFileInfo((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractFileIconProvider
///
/// Base class method implementation
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_fileiconprovider_qbase_icon_with_q_file_info(void* self, void* param1) {
    return QAbstractFileIconProvider_QBaseIconWithQFileInfo((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
const char* q_fileiconprovider_type(void* self, void* param1) {
    libqt_string _str = QFileIconProvider_Type((QFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
const char* q_fileiconprovider_qbase_type(void* self, void* param1) {
    libqt_string _str = QFileIconProvider_QBaseType((QFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, const char* (*slot)(QFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_type(void* self, const char* (*slot)(void*, void*)) {
    QFileIconProvider_OnType((QFileIconProvider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self, int options ```
void q_fileiconprovider_set_options(void* self, int64_t options) {
    QFileIconProvider_SetOptions((QFileIconProvider*)self, options);
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self, int options ```
void q_fileiconprovider_qbase_set_options(void* self, int64_t options) {
    QFileIconProvider_QBaseSetOptions((QFileIconProvider*)self, options);
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, void (*slot)(QFileIconProvider*, int) ```
void q_fileiconprovider_on_set_options(void* self, void (*slot)(void*, int64_t)) {
    QFileIconProvider_OnSetOptions((QFileIconProvider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self ```
int64_t q_fileiconprovider_options(void* self) {
    return QFileIconProvider_Options((QFileIconProvider*)self);
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self ```
int64_t q_fileiconprovider_qbase_options(void* self) {
    return QFileIconProvider_QBaseOptions((QFileIconProvider*)self);
}

/// Inherited from QAbstractFileIconProvider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, int64_t (*slot)() ```
void q_fileiconprovider_on_options(void* self, int64_t (*slot)()) {
    QFileIconProvider_OnOptions((QFileIconProvider*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileIconProvider* self ```
void q_fileiconprovider_delete(void* self) {
    QFileIconProvider_Delete((QFileIconProvider*)(self));
}