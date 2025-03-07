#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include <string.h>
#include "libqabstractfileiconprovider.hpp"
#include "libqabstractfileiconprovider.h"

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html

/// q_abstractfileiconprovider_new constructs a new QAbstractFileIconProvider object.
///
///
QAbstractFileIconProvider* q_abstractfileiconprovider_new() {
    return QAbstractFileIconProvider_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// ``` QAbstractFileIconProvider* self, enum QAbstractFileIconProvider__IconType param1 ```
QIcon* q_abstractfileiconprovider_icon(void* self, int64_t param1) {
    return QAbstractFileIconProvider_Icon((QAbstractFileIconProvider*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, QIcon* (*slot)(QAbstractFileIconProvider*, enum QAbstractFileIconProvider__IconType) ```
void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*slot)(void*, int64_t)) {
    QAbstractFileIconProvider_OnIcon((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractFileIconProvider* self, enum QAbstractFileIconProvider__IconType param1 ```
QIcon* q_abstractfileiconprovider_qbase_icon(void* self, int64_t param1) {
    return QAbstractFileIconProvider_QBaseIcon((QAbstractFileIconProvider*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// ``` QAbstractFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_abstractfileiconprovider_icon_with_q_file_info(void* self, void* param1) {
    return QAbstractFileIconProvider_IconWithQFileInfo((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, QIcon* (*slot)(QAbstractFileIconProvider*, QFileInfo*) ```
void q_abstractfileiconprovider_on_icon_with_q_file_info(void* self, QIcon* (*slot)(void*, void*)) {
    QAbstractFileIconProvider_OnIconWithQFileInfo((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_abstractfileiconprovider_qbase_icon_with_q_file_info(void* self, void* param1) {
    return QAbstractFileIconProvider_QBaseIconWithQFileInfo((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// ``` QAbstractFileIconProvider* self, QFileInfo* param1 ```
const char* q_abstractfileiconprovider_type(void* self, void* param1) {
    libqt_string _str = QAbstractFileIconProvider_Type((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, const char* (*slot)(QAbstractFileIconProvider*, QFileInfo*) ```
void q_abstractfileiconprovider_on_type(void* self, const char* (*slot)(void*, void*)) {
    QAbstractFileIconProvider_OnType((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractFileIconProvider* self, QFileInfo* param1 ```
const char* q_abstractfileiconprovider_qbase_type(void* self, void* param1) {
    libqt_string _str = QAbstractFileIconProvider_QBaseType((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// ``` QAbstractFileIconProvider* self, int options ```
void q_abstractfileiconprovider_set_options(void* self, int64_t options) {
    QAbstractFileIconProvider_SetOptions((QAbstractFileIconProvider*)self, options);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, void (*slot)(QAbstractFileIconProvider*, int) ```
void q_abstractfileiconprovider_on_set_options(void* self, void (*slot)(void*, int64_t)) {
    QAbstractFileIconProvider_OnSetOptions((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractFileIconProvider* self, int options ```
void q_abstractfileiconprovider_qbase_set_options(void* self, int64_t options) {
    QAbstractFileIconProvider_QBaseSetOptions((QAbstractFileIconProvider*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// ``` QAbstractFileIconProvider* self ```
int64_t q_abstractfileiconprovider_options(void* self) {
    return QAbstractFileIconProvider_Options((QAbstractFileIconProvider*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, int64_t (*slot)() ```
void q_abstractfileiconprovider_on_options(void* self, int64_t (*slot)()) {
    QAbstractFileIconProvider_OnOptions((QAbstractFileIconProvider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractFileIconProvider* self ```
int64_t q_abstractfileiconprovider_qbase_options(void* self) {
    return QAbstractFileIconProvider_QBaseOptions((QAbstractFileIconProvider*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractFileIconProvider* self ```
void q_abstractfileiconprovider_delete(void* self) {
    QAbstractFileIconProvider_Delete((QAbstractFileIconProvider*)(self));
}