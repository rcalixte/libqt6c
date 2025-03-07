#include "libqcborcommon.hpp"
#include "../libqiodevice.hpp"
#include "libqcborstreamreader.hpp"
#include "libqcborstreamreader.h"

/// https://doc.qt.io/qt-6/qcborstreamreader.html

/// q_cborstreamreader_new constructs a new QCborStreamReader object.
///
///
QCborStreamReader* q_cborstreamreader_new() {
    return QCborStreamReader_new();
}

/// q_cborstreamreader_new2 constructs a new QCborStreamReader object.
///
/// ``` const char* data, int64_t lenVal ```
QCborStreamReader* q_cborstreamreader_new2(const char* data, int64_t lenVal) {
    return QCborStreamReader_new2(data, lenVal);
}

/// q_cborstreamreader_new3 constructs a new QCborStreamReader object.
///
/// ``` unsigned char* data, int64_t lenVal ```
QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, int64_t lenVal) {
    return QCborStreamReader_new3(data, lenVal);
}

/// q_cborstreamreader_new4 constructs a new QCborStreamReader object.
///
/// ``` const char* data ```
QCborStreamReader* q_cborstreamreader_new4(const char* data) {
    return QCborStreamReader_new4(qstring(data));
}

/// q_cborstreamreader_new5 constructs a new QCborStreamReader object.
///
/// ``` QIODevice* device ```
QCborStreamReader* q_cborstreamreader_new5(void* device) {
    return QCborStreamReader_new5((QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
///
/// ``` QCborStreamReader* self, QIODevice* device ```
void q_cborstreamreader_set_device(void* self, void* device) {
    QCborStreamReader_SetDevice((QCborStreamReader*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
///
/// ``` QCborStreamReader* self ```
QIODevice* q_cborstreamreader_device(void* self) {
    return QCborStreamReader_Device((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, const char* data ```
void q_cborstreamreader_add_data(void* self, const char* data) {
    QCborStreamReader_AddData((QCborStreamReader*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, const char* data, int64_t lenVal ```
void q_cborstreamreader_add_data2(void* self, const char* data, int64_t lenVal) {
    QCborStreamReader_AddData2((QCborStreamReader*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, unsigned char* data, int64_t lenVal ```
void q_cborstreamreader_add_data3(void* self, unsigned char* data, int64_t lenVal) {
    QCborStreamReader_AddData3((QCborStreamReader*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_reparse(void* self) {
    QCborStreamReader_Reparse((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_clear(void* self) {
    QCborStreamReader_Clear((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_reset(void* self) {
    QCborStreamReader_Reset((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
///
/// ``` QCborStreamReader* self ```
QCborError* q_cborstreamreader_last_error(void* self) {
    return QCborStreamReader_LastError((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
///
/// ``` QCborStreamReader* self ```
long long q_cborstreamreader_current_offset(void* self) {
    return QCborStreamReader_CurrentOffset((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_valid(void* self) {
    return QCborStreamReader_IsValid((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
///
/// ``` QCborStreamReader* self ```
int32_t q_cborstreamreader_container_depth(void* self) {
    return QCborStreamReader_ContainerDepth((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#parentContainerType)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_parent_container_type(void* self) {
    return QCborStreamReader_ParentContainerType((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_has_next(void* self) {
    return QCborStreamReader_HasNext((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_next(void* self) {
    return QCborStreamReader_Next((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#type)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_type(void* self) {
    return QCborStreamReader_Type((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_unsigned_integer(void* self) {
    return QCborStreamReader_IsUnsignedInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_negative_integer(void* self) {
    return QCborStreamReader_IsNegativeInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_integer(void* self) {
    return QCborStreamReader_IsInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_byte_array(void* self) {
    return QCborStreamReader_IsByteArray((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_string(void* self) {
    return QCborStreamReader_IsString((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_array(void* self) {
    return QCborStreamReader_IsArray((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_map(void* self) {
    return QCborStreamReader_IsMap((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_tag(void* self) {
    return QCborStreamReader_IsTag((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_simple_type(void* self) {
    return QCborStreamReader_IsSimpleType((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_float16(void* self) {
    return QCborStreamReader_IsFloat16((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_float(void* self) {
    return QCborStreamReader_IsFloat((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_double(void* self) {
    return QCborStreamReader_IsDouble((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_invalid(void* self) {
    return QCborStreamReader_IsInvalid((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// ``` QCborStreamReader* self, enum QCborStreamReader__QCborSimpleType st ```
bool q_cborstreamreader_is_simple_type_with_st(void* self, int64_t st) {
    return QCborStreamReader_IsSimpleTypeWithSt((QCborStreamReader*)self, st);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_false(void* self) {
    return QCborStreamReader_IsFalse((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_true(void* self) {
    return QCborStreamReader_IsTrue((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_bool(void* self) {
    return QCborStreamReader_IsBool((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_null(void* self) {
    return QCborStreamReader_IsNull((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_undefined(void* self) {
    return QCborStreamReader_IsUndefined((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_length_known(void* self) {
    return QCborStreamReader_IsLengthKnown((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
///
/// ``` QCborStreamReader* self ```
uint64_t q_cborstreamreader_length(void* self) {
    return QCborStreamReader_Length((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_container(void* self) {
    return QCborStreamReader_IsContainer((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_enter_container(void* self) {
    return QCborStreamReader_EnterContainer((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_leave_container(void* self) {
    return QCborStreamReader_LeaveContainer((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_current_string_chunk_size(void* self) {
    return QCborStreamReader_CurrentStringChunkSize((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_to_bool(void* self) {
    return QCborStreamReader_ToBool((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toTag)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_tag(void* self) {
    return QCborStreamReader_ToTag((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
///
/// ``` QCborStreamReader* self ```
uint64_t q_cborstreamreader_to_unsigned_integer(void* self) {
    return QCborStreamReader_ToUnsignedInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toNegativeInteger)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_negative_integer(void* self) {
    return QCborStreamReader_ToNegativeInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toSimpleType)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_simple_type(void* self) {
    return QCborStreamReader_ToSimpleType((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
///
/// ``` QCborStreamReader* self ```
float q_cborstreamreader_to_float(void* self) {
    return QCborStreamReader_ToFloat((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
///
/// ``` QCborStreamReader* self ```
double q_cborstreamreader_to_double(void* self) {
    return QCborStreamReader_ToDouble((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
///
/// ``` QCborStreamReader* self ```
long long q_cborstreamreader_to_integer(void* self) {
    return QCborStreamReader_ToInteger((QCborStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// ``` QCborStreamReader* self, int maxRecursion ```
bool q_cborstreamreader_next1(void* self, int maxRecursion) {
    return QCborStreamReader_Next1((QCborStreamReader*)self, maxRecursion);
}

/// Delete this object from C++ memory.
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_delete(void* self) {
    QCborStreamReader_Delete((QCborStreamReader*)(self));
}