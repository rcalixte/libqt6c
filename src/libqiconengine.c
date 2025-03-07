#include "libqdatastream.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqiconengine.hpp"
#include "libqiconengine.h"

/// https://doc.qt.io/qt-6/qiconengine.html

/// q_iconengine_new constructs a new QIconEngine object.
///
///
QIconEngine* q_iconengine_new() {
    return QIconEngine_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// ``` QIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state) {
    QIconEngine_Paint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, QPainter*, QRect*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_paint(void* self, void (*slot)(void*, void*, void*, int64_t, int64_t)) {
    QIconEngine_OnPaint((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state) {
    QIconEngine_QBasePaint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_iconengine_actual_size(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_ActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QSize* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_actual_size(void* self, QSize* (*slot)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnActualSize((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_iconengine_qbase_actual_size(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_QBaseActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_iconengine_pixmap(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_Pixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QPixmap* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnPixmap((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_QBasePixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// ``` QIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state) {
    QIconEngine_AddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, QPixmap*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_add_pixmap(void* self, void (*slot)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnAddPixmap((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state) {
    QIconEngine_QBaseAddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// ``` QIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state) {
    QIconEngine_AddFile((QIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, const char*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_add_file(void* self, void (*slot)(void*, const char*, void*, int64_t, int64_t)) {
    QIconEngine_OnAddFile((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state) {
    QIconEngine_QBaseAddFile((QIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// ``` QIconEngine* self ```
const char* q_iconengine_key(void* self) {
    libqt_string _str = QIconEngine_Key((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, const char* (*slot)() ```
void q_iconengine_on_key(void* self, const char* (*slot)()) {
    QIconEngine_OnKey((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self ```
const char* q_iconengine_qbase_key(void* self) {
    libqt_string _str = QIconEngine_QBaseKey((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// ``` QIconEngine* self ```
QIconEngine* q_iconengine_clone(void* self) {
    return QIconEngine_Clone((QIconEngine*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QIconEngine* (*slot)() ```
void q_iconengine_on_clone(void* self, QIconEngine* (*slot)()) {
    QIconEngine_OnClone((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self ```
QIconEngine* q_iconengine_qbase_clone(void* self) {
    return QIconEngine_QBaseClone((QIconEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// ``` QIconEngine* self, QDataStream* in ```
bool q_iconengine_read(void* self, void* in) {
    return QIconEngine_Read((QIconEngine*)self, (QDataStream*)in);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)(QIconEngine*, QDataStream*) ```
void q_iconengine_on_read(void* self, bool (*slot)(void*, void*)) {
    QIconEngine_OnRead((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QDataStream* in ```
bool q_iconengine_qbase_read(void* self, void* in) {
    return QIconEngine_QBaseRead((QIconEngine*)self, (QDataStream*)in);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// ``` QIconEngine* self, QDataStream* out ```
bool q_iconengine_write(void* self, void* out) {
    return QIconEngine_Write((QIconEngine*)self, (QDataStream*)out);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)(QIconEngine*, QDataStream*) ```
void q_iconengine_on_write(void* self, bool (*slot)(void*, void*)) {
    QIconEngine_OnWrite((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QDataStream* out ```
bool q_iconengine_qbase_write(void* self, void* out) {
    return QIconEngine_QBaseWrite((QIconEngine*)self, (QDataStream*)out);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// ``` QIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state ```
libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int64_t mode, int64_t state) {
    libqt_list _arr = QIconEngine_AvailableSizes((QIconEngine*)self, mode, state);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, libqt_list /* of QSize* */ (*slot)(QIconEngine*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*slot)(void*, int64_t, int64_t)) {
    QIconEngine_OnAvailableSizes((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state ```
libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int64_t mode, int64_t state) {
    libqt_list _arr = QIconEngine_QBaseAvailableSizes((QIconEngine*)self, mode, state);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// ``` QIconEngine* self ```
const char* q_iconengine_icon_name(void* self) {
    libqt_string _str = QIconEngine_IconName((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, const char* (*slot)() ```
void q_iconengine_on_icon_name(void* self, const char* (*slot)()) {
    QIconEngine_OnIconName((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self ```
const char* q_iconengine_qbase_icon_name(void* self) {
    libqt_string _str = QIconEngine_QBaseIconName((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// ``` QIconEngine* self ```
bool q_iconengine_is_null(void* self) {
    return QIconEngine_IsNull((QIconEngine*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)() ```
void q_iconengine_on_is_null(void* self, bool (*slot)()) {
    QIconEngine_OnIsNull((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self ```
bool q_iconengine_qbase_is_null(void* self) {
    return QIconEngine_QBaseIsNull((QIconEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale ```
QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale) {
    return QIconEngine_ScaledPixmap((QIconEngine*)self, (QSize*)size, mode, state, scale);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QPixmap* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State, double) ```
void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t, double)) {
    QIconEngine_OnScaledPixmap((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale ```
QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale) {
    return QIconEngine_QBaseScaledPixmap((QIconEngine*)self, (QSize*)size, mode, state, scale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// ``` QIconEngine* self, int id, void* data ```
void q_iconengine_virtual_hook(void* self, int id, void* data) {
    QIconEngine_VirtualHook((QIconEngine*)self, id, data);
}

/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, int, void*) ```
void q_iconengine_on_virtual_hook(void* self, void (*slot)(void*, int, void*)) {
    QIconEngine_OnVirtualHook((QIconEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconEngine* self, int id, void* data ```
void q_iconengine_qbase_virtual_hook(void* self, int id, void* data) {
    QIconEngine_QBaseVirtualHook((QIconEngine*)self, id, data);
}

/// Delete this object from C++ memory.
///
/// ``` QIconEngine* self ```
void q_iconengine_delete(void* self) {
    QIconEngine_Delete((QIconEngine*)(self));
}

/// https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html

/// q_iconengine__scaledpixmapargument_new constructs a new QIconEngine::ScaledPixmapArgument object.
///
/// ``` QIconEngine__ScaledPixmapArgument* param1 ```
QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1) {
    return QIconEngine__ScaledPixmapArgument_new((QIconEngine__ScaledPixmapArgument*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine__scaledpixmapargument.html#operator=)
///
/// ``` QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1 ```
void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1) {
    QIconEngine__ScaledPixmapArgument_OperatorAssign((QIconEngine__ScaledPixmapArgument*)self, (QIconEngine__ScaledPixmapArgument*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QIconEngine__ScaledPixmapArgument* self ```
void q_iconengine__scaledpixmapargument_delete(void* self) {
    QIconEngine__ScaledPixmapArgument_Delete((QIconEngine__ScaledPixmapArgument*)(self));
}