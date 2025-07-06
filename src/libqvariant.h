#pragma once
#ifndef SRCQT6C_LIBQVARIANT_H
#define SRCQT6C_LIBQVARIANT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvariant.html

/// q_variant_new constructs a new QVariant object.
///
///
QVariant* q_variant_new();

/// q_variant_new2 constructs a new QVariant object.
///
/// ``` QMetaType* typeVal ```
QVariant* q_variant_new2(void* typeVal);

/// q_variant_new3 constructs a new QVariant object.
///
/// ``` QVariant* other ```
QVariant* q_variant_new3(void* other);

/// q_variant_new4 constructs a new QVariant object.
///
/// ``` int i ```
QVariant* q_variant_new4(int i);

/// q_variant_new5 constructs a new QVariant object.
///
/// ``` uint32_t ui ```
QVariant* q_variant_new5(uint32_t ui);

/// q_variant_new6 constructs a new QVariant object.
///
/// ``` long long ll ```
QVariant* q_variant_new6(long long ll);

/// q_variant_new7 constructs a new QVariant object.
///
/// ``` uint64_t ull ```
QVariant* q_variant_new7(uint64_t ull);

/// q_variant_new8 constructs a new QVariant object.
///
/// ``` bool b ```
QVariant* q_variant_new8(bool b);

/// q_variant_new9 constructs a new QVariant object.
///
/// ``` double d ```
QVariant* q_variant_new9(double d);

/// q_variant_new10 constructs a new QVariant object.
///
/// ``` float f ```
QVariant* q_variant_new10(float f);

/// q_variant_new11 constructs a new QVariant object.
///
/// ``` QChar* qchar ```
QVariant* q_variant_new11(void* qchar);

/// q_variant_new12 constructs a new QVariant object.
///
/// ``` QDate* date ```
QVariant* q_variant_new12(void* date);

/// q_variant_new13 constructs a new QVariant object.
///
/// ``` QTime* time ```
QVariant* q_variant_new13(void* time);

/// q_variant_new14 constructs a new QVariant object.
///
/// ``` QBitArray* bitarray ```
QVariant* q_variant_new14(void* bitarray);

/// q_variant_new15 constructs a new QVariant object.
///
/// ``` const char* bytearray ```
QVariant* q_variant_new15(const char* bytearray);

/// q_variant_new16 constructs a new QVariant object.
///
/// ``` QDateTime* datetime ```
QVariant* q_variant_new16(void* datetime);

/// q_variant_new17 constructs a new QVariant object.
///
/// ``` libqt_map /* of const char* to QVariant* */ hash ```
QVariant* q_variant_new17(libqt_map /* of const char* to QVariant* */ hash);

/// q_variant_new18 constructs a new QVariant object.
///
/// ``` QJsonArray* jsonArray ```
QVariant* q_variant_new18(void* jsonArray);

/// q_variant_new19 constructs a new QVariant object.
///
/// ``` QJsonObject* jsonObject ```
QVariant* q_variant_new19(void* jsonObject);

/// q_variant_new20 constructs a new QVariant object.
///
/// ``` QLocale* locale ```
QVariant* q_variant_new20(void* locale);

/// q_variant_new21 constructs a new QVariant object.
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QVariant* q_variant_new21(libqt_map /* of const char* to QVariant* */ mapVal);

/// q_variant_new22 constructs a new QVariant object.
///
/// ``` QRegularExpression* re ```
QVariant* q_variant_new22(void* re);

/// q_variant_new23 constructs a new QVariant object.
///
/// ``` const char* stringVal ```
QVariant* q_variant_new23(const char* stringVal);

/// q_variant_new24 constructs a new QVariant object.
///
/// ``` const char* stringlist[] ```
QVariant* q_variant_new24(const char* stringlist[]);

/// q_variant_new25 constructs a new QVariant object.
///
/// ``` QUrl* url ```
QVariant* q_variant_new25(void* url);

/// q_variant_new26 constructs a new QVariant object.
///
/// ``` QSize* size ```
QVariant* q_variant_new26(void* size);

/// q_variant_new27 constructs a new QVariant object.
///
/// ``` QPoint* pt ```
QVariant* q_variant_new27(void* pt);

/// q_variant_new28 constructs a new QVariant object.
///
/// ``` enum QVariant__Type typeVal ```
QVariant* q_variant_new28(int64_t typeVal);

/// q_variant_new29 constructs a new QVariant object.
///
/// ``` QMetaType* typeVal, void* copyVal ```
QVariant* q_variant_new29(void* typeVal, void* copyVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#operator=)
///
/// ``` QVariant* self, QVariant* other ```
void q_variant_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#swap)
///
/// ``` QVariant* self, QVariant* other ```
void q_variant_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#userType)
///
/// ``` QVariant* self ```
int32_t q_variant_user_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeId)
///
/// ``` QVariant* self ```
int32_t q_variant_type_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeName)
///
/// ``` QVariant* self ```
const char* q_variant_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#metaType)
///
/// ``` QVariant* self ```
QMetaType* q_variant_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// ``` QVariant* self, QMetaType* targetType ```
bool q_variant_can_convert(void* self, void* targetType);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// ``` QVariant* self, QMetaType* typeVal ```
bool q_variant_convert(void* self, void* typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canView)
///
/// ``` QVariant* self, QMetaType* targetType ```
bool q_variant_can_view(void* self, void* targetType);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// ``` QVariant* self, int targetTypeId ```
bool q_variant_can_convert_with_target_type_id(void* self, int targetTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// ``` QVariant* self, int targetTypeId ```
bool q_variant_convert_with_target_type_id(void* self, int targetTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isValid)
///
/// ``` QVariant* self ```
bool q_variant_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isNull)
///
/// ``` QVariant* self ```
bool q_variant_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#clear)
///
/// ``` QVariant* self ```
void q_variant_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#detach)
///
/// ``` QVariant* self ```
void q_variant_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isDetached)
///
/// ``` QVariant* self ```
bool q_variant_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// ``` QVariant* self ```
int32_t q_variant_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// ``` QVariant* self ```
uint32_t q_variant_to_u_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// ``` QVariant* self ```
long long q_variant_to_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// ``` QVariant* self ```
uint64_t q_variant_to_u_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBool)
///
/// ``` QVariant* self ```
bool q_variant_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// ``` QVariant* self ```
double q_variant_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// ``` QVariant* self ```
float q_variant_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// ``` QVariant* self ```
double q_variant_to_real(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
///
/// ``` QVariant* self ```
char* q_variant_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
///
/// ``` QVariant* self ```
QBitArray* q_variant_to_bit_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toString)
///
/// ``` QVariant* self ```
const char* q_variant_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toStringList)
///
/// ``` QVariant* self ```
const char** q_variant_to_string_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toChar)
///
/// ``` QVariant* self ```
QChar* q_variant_to_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDate)
///
/// ``` QVariant* self ```
QDate* q_variant_to_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toTime)
///
/// ``` QVariant* self ```
QTime* q_variant_to_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
///
/// ``` QVariant* self ```
QDateTime* q_variant_to_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toMap)
///
/// ``` QVariant* self ```
libqt_map /* of const char* to QVariant* */ q_variant_to_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toHash)
///
/// ``` QVariant* self ```
libqt_map /* of const char* to QVariant* */ q_variant_to_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPoint)
///
/// ``` QVariant* self ```
QPoint* q_variant_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPointF)
///
/// ``` QVariant* self ```
QPointF* q_variant_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRect)
///
/// ``` QVariant* self ```
QRect* q_variant_to_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSize)
///
/// ``` QVariant* self ```
QSize* q_variant_to_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
///
/// ``` QVariant* self ```
QSizeF* q_variant_to_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLine)
///
/// ``` QVariant* self ```
QLine* q_variant_to_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLineF)
///
/// ``` QVariant* self ```
QLineF* q_variant_to_line_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRectF)
///
/// ``` QVariant* self ```
QRectF* q_variant_to_rect_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLocale)
///
/// ``` QVariant* self ```
QLocale* q_variant_to_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
///
/// ``` QVariant* self ```
QRegularExpression* q_variant_to_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
///
/// ``` QVariant* self ```
QEasingCurve* q_variant_to_easing_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUuid)
///
/// ``` QVariant* self ```
QUuid* q_variant_to_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUrl)
///
/// ``` QVariant* self ```
QUrl* q_variant_to_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
///
/// ``` QVariant* self ```
QJsonValue* q_variant_to_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
///
/// ``` QVariant* self ```
QJsonObject* q_variant_to_json_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
///
/// ``` QVariant* self ```
QJsonArray* q_variant_to_json_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
///
/// ``` QVariant* self ```
QJsonDocument* q_variant_to_json_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
///
/// ``` QVariant* self ```
QModelIndex* q_variant_to_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
///
/// ``` QVariant* self ```
QPersistentModelIndex* q_variant_to_persistent_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#load)
///
/// ``` QVariant* self, QDataStream* ds ```
void q_variant_load(void* self, void* ds);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#save)
///
/// ``` QVariant* self, QDataStream* ds ```
void q_variant_save(void* self, void* ds);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#type)
///
/// ``` QVariant* self ```
int64_t q_variant_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeToName)
///
/// ``` int typeId ```
const char* q_variant_type_to_name(int typeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#nameToType)
///
/// ``` const char* name ```
int64_t q_variant_name_to_type(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// ``` QVariant* self ```
void* q_variant_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#constData)
///
/// ``` QVariant* self ```
const void* q_variant_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// ``` QVariant* self ```
const void* q_variant_data2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#setValue)
///
/// ``` QVariant* self, QVariant* avalue ```
void q_variant_set_value(void* self, void* avalue);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// ``` QMetaType* typeVal ```
QVariant* q_variant_from_meta_type(void* typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#compare)
///
/// ``` QVariant* lhs, QVariant* rhs ```
QPartialOrdering* q_variant_compare(void* lhs, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// ``` QVariant* self, bool* ok ```
int32_t q_variant_to_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// ``` QVariant* self, bool* ok ```
uint32_t q_variant_to_u_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// ``` QVariant* self, bool* ok ```
long long q_variant_to_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// ``` QVariant* self, bool* ok ```
uint64_t q_variant_to_u_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// ``` QVariant* self, bool* ok ```
double q_variant_to_double1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// ``` QVariant* self, bool* ok ```
float q_variant_to_float1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// ``` QVariant* self, bool* ok ```
double q_variant_to_real1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// ``` QMetaType* typeVal, void* copyVal ```
QVariant* q_variant_from_meta_type2(void* typeVal, void* copyVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
///
/// Delete this object from C++ memory.
///
/// ``` QVariant* self ```
void q_variant_delete(void* self);

/// https://doc.qt.io/qt-6/qvariant.html#types

typedef enum {
    QVARIANT_TYPE_INVALID = 0,
    QVARIANT_TYPE_BOOL = 1,
    QVARIANT_TYPE_INT = 2,
    QVARIANT_TYPE_UINT = 3,
    QVARIANT_TYPE_LONGLONG = 4,
    QVARIANT_TYPE_ULONGLONG = 5,
    QVARIANT_TYPE_DOUBLE = 6,
    QVARIANT_TYPE_CHAR = 7,
    QVARIANT_TYPE_MAP = 8,
    QVARIANT_TYPE_LIST = 9,
    QVARIANT_TYPE_STRING = 10,
    QVARIANT_TYPE_STRINGLIST = 11,
    QVARIANT_TYPE_BYTEARRAY = 12,
    QVARIANT_TYPE_BITARRAY = 13,
    QVARIANT_TYPE_DATE = 14,
    QVARIANT_TYPE_TIME = 15,
    QVARIANT_TYPE_DATETIME = 16,
    QVARIANT_TYPE_URL = 17,
    QVARIANT_TYPE_LOCALE = 18,
    QVARIANT_TYPE_RECT = 19,
    QVARIANT_TYPE_RECTF = 20,
    QVARIANT_TYPE_SIZE = 21,
    QVARIANT_TYPE_SIZEF = 22,
    QVARIANT_TYPE_LINE = 23,
    QVARIANT_TYPE_LINEF = 24,
    QVARIANT_TYPE_POINT = 25,
    QVARIANT_TYPE_POINTF = 26,
    QVARIANT_TYPE_REGULAREXPRESSION = 44,
    QVARIANT_TYPE_HASH = 28,
    QVARIANT_TYPE_EASINGCURVE = 29,
    QVARIANT_TYPE_UUID = 30,
    QVARIANT_TYPE_MODELINDEX = 42,
    QVARIANT_TYPE_PERSISTENTMODELINDEX = 50,
    QVARIANT_TYPE_LASTCORETYPE = 63,
    QVARIANT_TYPE_FONT = 4096,
    QVARIANT_TYPE_PIXMAP = 4097,
    QVARIANT_TYPE_BRUSH = 4098,
    QVARIANT_TYPE_COLOR = 4099,
    QVARIANT_TYPE_PALETTE = 4100,
    QVARIANT_TYPE_IMAGE = 4102,
    QVARIANT_TYPE_POLYGON = 4103,
    QVARIANT_TYPE_REGION = 4104,
    QVARIANT_TYPE_BITMAP = 4105,
    QVARIANT_TYPE_CURSOR = 4106,
    QVARIANT_TYPE_KEYSEQUENCE = 4107,
    QVARIANT_TYPE_PEN = 4108,
    QVARIANT_TYPE_TEXTLENGTH = 4109,
    QVARIANT_TYPE_TEXTFORMAT = 4110,
    QVARIANT_TYPE_TRANSFORM = 4112,
    QVARIANT_TYPE_MATRIX4X4 = 4113,
    QVARIANT_TYPE_VECTOR2D = 4114,
    QVARIANT_TYPE_VECTOR3D = 4115,
    QVARIANT_TYPE_VECTOR4D = 4116,
    QVARIANT_TYPE_QUATERNION = 4117,
    QVARIANT_TYPE_POLYGONF = 4118,
    QVARIANT_TYPE_ICON = 4101,
    QVARIANT_TYPE_LASTGUITYPE = 4119,
    QVARIANT_TYPE_SIZEPOLICY = 8192,
    QVARIANT_TYPE_USERTYPE = 65536,
    QVARIANT_TYPE_LASTTYPE = 4294967295
} QVariant__Type;

#endif
