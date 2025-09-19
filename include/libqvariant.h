#pragma once
#ifndef SRCQT6C_LIBQVARIANT_H
#define SRCQT6C_LIBQVARIANT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvariant.html

/// q_variant_new constructs a new QVariant object.
///
QVariant* q_variant_new();

/// q_variant_new2 constructs a new QVariant object.
///
/// @param type QMetaType*
QVariant* q_variant_new2(void* type);

/// q_variant_new3 constructs a new QVariant object.
///
/// @param other QVariant*
QVariant* q_variant_new3(void* other);

/// q_variant_new4 constructs a new QVariant object.
///
/// @param i int
QVariant* q_variant_new4(int i);

/// q_variant_new5 constructs a new QVariant object.
///
/// @param ui uint32_t
QVariant* q_variant_new5(uint32_t ui);

/// q_variant_new6 constructs a new QVariant object.
///
/// @param ll long long
QVariant* q_variant_new6(long long ll);

/// q_variant_new7 constructs a new QVariant object.
///
/// @param ull uint64_t
QVariant* q_variant_new7(uint64_t ull);

/// q_variant_new8 constructs a new QVariant object.
///
/// @param b bool
QVariant* q_variant_new8(bool b);

/// q_variant_new9 constructs a new QVariant object.
///
/// @param d double
QVariant* q_variant_new9(double d);

/// q_variant_new10 constructs a new QVariant object.
///
/// @param f float
QVariant* q_variant_new10(float f);

/// q_variant_new11 constructs a new QVariant object.
///
/// @param qchar QChar*
QVariant* q_variant_new11(void* qchar);

/// q_variant_new12 constructs a new QVariant object.
///
/// @param date QDate*
QVariant* q_variant_new12(void* date);

/// q_variant_new13 constructs a new QVariant object.
///
/// @param time QTime*
QVariant* q_variant_new13(void* time);

/// q_variant_new14 constructs a new QVariant object.
///
/// @param bitarray QBitArray*
QVariant* q_variant_new14(void* bitarray);

/// q_variant_new15 constructs a new QVariant object.
///
/// @param bytearray const char*
QVariant* q_variant_new15(const char* bytearray);

/// q_variant_new16 constructs a new QVariant object.
///
/// @param datetime QDateTime*
QVariant* q_variant_new16(void* datetime);

/// q_variant_new17 constructs a new QVariant object.
///
/// @param hash libqt_map /* of const char* to QVariant* */
QVariant* q_variant_new17(libqt_map /* of const char* to QVariant* */ hash);

/// q_variant_new18 constructs a new QVariant object.
///
/// @param jsonArray QJsonArray*
QVariant* q_variant_new18(void* jsonArray);

/// q_variant_new19 constructs a new QVariant object.
///
/// @param jsonObject QJsonObject*
QVariant* q_variant_new19(void* jsonObject);

/// q_variant_new20 constructs a new QVariant object.
///
/// @param list libqt_list /* of QVariant* */
QVariant* q_variant_new20(libqt_list list);

/// q_variant_new21 constructs a new QVariant object.
///
/// @param locale QLocale*
QVariant* q_variant_new21(void* locale);

/// q_variant_new22 constructs a new QVariant object.
///
/// @param mapVal libqt_map /* of const char* to QVariant* */
QVariant* q_variant_new22(libqt_map /* of const char* to QVariant* */ mapVal);

/// q_variant_new23 constructs a new QVariant object.
///
/// @param re QRegularExpression*
QVariant* q_variant_new23(void* re);

/// q_variant_new24 constructs a new QVariant object.
///
/// @param stringVal const char*
QVariant* q_variant_new24(const char* stringVal);

/// q_variant_new25 constructs a new QVariant object.
///
/// @param stringlist const char**
QVariant* q_variant_new25(const char* stringlist[]);

/// q_variant_new26 constructs a new QVariant object.
///
/// @param url QUrl*
QVariant* q_variant_new26(void* url);

/// q_variant_new27 constructs a new QVariant object.
///
/// @param size QSize*
QVariant* q_variant_new27(void* size);

/// q_variant_new28 constructs a new QVariant object.
///
/// @param pt QPoint*
QVariant* q_variant_new28(void* pt);

/// q_variant_new29 constructs a new QVariant object.
///
/// @param type enum QVariant__Type
QVariant* q_variant_new29(int64_t type);

/// q_variant_new30 constructs a new QVariant object.
///
/// @param type QMetaType*
/// @param copyVal void*
QVariant* q_variant_new30(void* type, void* copyVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#operator-eq)
///
/// @param self QVariant*
/// @param other QVariant*
void q_variant_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#swap)
///
/// @param self QVariant*
/// @param other QVariant*
void q_variant_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#userType)
///
/// @param self QVariant*
int32_t q_variant_user_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeId)
///
/// @param self QVariant*
int32_t q_variant_type_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVariant*
const char* q_variant_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#metaType)
///
/// @param self QVariant*
QMetaType* q_variant_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// @param self QVariant*
/// @param targetType QMetaType*
bool q_variant_can_convert(void* self, void* targetType);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// @param self QVariant*
/// @param type QMetaType*
bool q_variant_convert(void* self, void* type);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canView)
///
/// @param self QVariant*
/// @param targetType QMetaType*
bool q_variant_can_view(void* self, void* targetType);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// @param self QVariant*
/// @param targetTypeId int
bool q_variant_can_convert2(void* self, int targetTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// @param self QVariant*
/// @param targetTypeId int
bool q_variant_convert2(void* self, int targetTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isValid)
///
/// @param self QVariant*
bool q_variant_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isNull)
///
/// @param self QVariant*
bool q_variant_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#clear)
///
/// @param self QVariant*
void q_variant_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#detach)
///
/// @param self QVariant*
void q_variant_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isDetached)
///
/// @param self QVariant*
bool q_variant_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// @param self QVariant*
int32_t q_variant_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// @param self QVariant*
uint32_t q_variant_to_u_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// @param self QVariant*
long long q_variant_to_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// @param self QVariant*
uint64_t q_variant_to_u_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBool)
///
/// @param self QVariant*
bool q_variant_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// @param self QVariant*
double q_variant_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// @param self QVariant*
float q_variant_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// @param self QVariant*
double q_variant_to_real(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVariant*
char* q_variant_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
///
/// @param self QVariant*
QBitArray* q_variant_to_bit_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVariant*
const char* q_variant_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toStringList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVariant*
const char** q_variant_to_string_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toChar)
///
/// @param self QVariant*
QChar* q_variant_to_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDate)
///
/// @param self QVariant*
QDate* q_variant_to_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toTime)
///
/// @param self QVariant*
QTime* q_variant_to_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
///
/// @param self QVariant*
QDateTime* q_variant_to_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toList)
///
/// @param self QVariant*
libqt_list /* of QVariant* */ q_variant_to_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toMap)
///
/// @param self QVariant*
libqt_map /* of const char* to QVariant* */ q_variant_to_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toHash)
///
/// @param self QVariant*
libqt_map /* of const char* to QVariant* */ q_variant_to_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPoint)
///
/// @param self QVariant*
QPoint* q_variant_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPointF)
///
/// @param self QVariant*
QPointF* q_variant_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRect)
///
/// @param self QVariant*
QRect* q_variant_to_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSize)
///
/// @param self QVariant*
QSize* q_variant_to_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
///
/// @param self QVariant*
QSizeF* q_variant_to_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLine)
///
/// @param self QVariant*
QLine* q_variant_to_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLineF)
///
/// @param self QVariant*
QLineF* q_variant_to_line_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRectF)
///
/// @param self QVariant*
QRectF* q_variant_to_rect_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLocale)
///
/// @param self QVariant*
QLocale* q_variant_to_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
///
/// @param self QVariant*
QRegularExpression* q_variant_to_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
///
/// @param self QVariant*
QEasingCurve* q_variant_to_easing_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUuid)
///
/// @param self QVariant*
QUuid* q_variant_to_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUrl)
///
/// @param self QVariant*
QUrl* q_variant_to_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
///
/// @param self QVariant*
QJsonValue* q_variant_to_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
///
/// @param self QVariant*
QJsonObject* q_variant_to_json_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
///
/// @param self QVariant*
QJsonArray* q_variant_to_json_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
///
/// @param self QVariant*
QJsonDocument* q_variant_to_json_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
///
/// @param self QVariant*
QModelIndex* q_variant_to_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
///
/// @param self QVariant*
QPersistentModelIndex* q_variant_to_persistent_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#load)
///
/// @param self QVariant*
/// @param ds QDataStream*
void q_variant_load(void* self, void* ds);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#save)
///
/// @param self QVariant*
/// @param ds QDataStream*
void q_variant_save(void* self, void* ds);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#type)
///
/// @param self QVariant*
///
/// @return enum QVariant__Type
int64_t q_variant_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeToName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param typeId int
const char* q_variant_type_to_name(int typeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#nameToType)
///
/// @param name const char*
///
/// @return enum QVariant__Type
int64_t q_variant_name_to_type(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// @param self QVariant*
void* q_variant_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#constData)
///
/// @param self QVariant*
const void* q_variant_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// @param self QVariant*
const void* q_variant_data2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#setValue)
///
/// @param self QVariant*
/// @param avalue QVariant*
void q_variant_set_value(void* self, void* avalue);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// @param type QMetaType*
QVariant* q_variant_from_meta_type(void* type);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#compare)
///
/// @param lhs QVariant*
/// @param rhs QVariant*
QPartialOrdering* q_variant_compare(void* lhs, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// @param self QVariant*
/// @param ok bool*
int32_t q_variant_to_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// @param self QVariant*
/// @param ok bool*
uint32_t q_variant_to_u_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// @param self QVariant*
/// @param ok bool*
long long q_variant_to_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// @param self QVariant*
/// @param ok bool*
uint64_t q_variant_to_u_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// @param self QVariant*
/// @param ok bool*
double q_variant_to_double1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// @param self QVariant*
/// @param ok bool*
float q_variant_to_float1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// @param self QVariant*
/// @param ok bool*
double q_variant_to_real1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// @param type QMetaType*
/// @param copyVal void*
QVariant* q_variant_from_meta_type2(void* type, void* copyVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
///
/// Delete this object from C++ memory.
///
/// @param self QVariant*
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
