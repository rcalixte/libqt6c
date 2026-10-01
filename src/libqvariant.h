#pragma once
#ifndef LIBQVARIANT_H
#define LIBQVARIANT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new constructs a new QVariant object.
///
QVariant* q_variant_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new2 constructs a new QVariant object.
///
/// @param type QMetaType*
///
QVariant* q_variant_new2(void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new3 constructs a new QVariant object.
///
/// @param other QVariant*
///
QVariant* q_variant_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new4 constructs a new QVariant object.
///
/// @param i int
///
QVariant* q_variant_new4(int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new5 constructs a new QVariant object.
///
/// @param ui uint32_t
///
QVariant* q_variant_new5(uint32_t ui);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new6 constructs a new QVariant object.
///
/// @param ll long long
///
QVariant* q_variant_new6(long long ll);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new7 constructs a new QVariant object.
///
/// @param ull uintptr_t
///
QVariant* q_variant_new7(uintptr_t ull);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new8 constructs a new QVariant object.
///
/// @param b bool
///
QVariant* q_variant_new8(bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new9 constructs a new QVariant object.
///
/// @param d double
///
QVariant* q_variant_new9(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new10 constructs a new QVariant object.
///
/// @param f float
///
QVariant* q_variant_new10(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new11 constructs a new QVariant object.
///
/// @param qchar QChar*
///
QVariant* q_variant_new11(void* qchar);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new12 constructs a new QVariant object.
///
/// @param date QDate*
///
QVariant* q_variant_new12(void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new13 constructs a new QVariant object.
///
/// @param time QTime*
///
QVariant* q_variant_new13(void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new14 constructs a new QVariant object.
///
/// @param bitarray QBitArray*
///
QVariant* q_variant_new14(const void* bitarray);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new15 constructs a new QVariant object.
///
/// @param bytearray char*
///
QVariant* q_variant_new15(char* bytearray);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new16 constructs a new QVariant object.
///
/// @param datetime QDateTime*
///
QVariant* q_variant_new16(const void* datetime);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new17 constructs a new QVariant object.
///
/// @param hash libqt_map of const char* to QVariant*
///
QVariant* q_variant_new17(libqt_map hash);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new18 constructs a new QVariant object.
///
/// @param jsonArray QJsonArray*
///
QVariant* q_variant_new18(const void* jsonArray);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new19 constructs a new QVariant object.
///
/// @param jsonObject QJsonObject*
///
QVariant* q_variant_new19(const void* jsonObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new20 constructs a new QVariant object.
///
/// @param list libqt_list of QVariant*
///
QVariant* q_variant_new20(libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new21 constructs a new QVariant object.
///
/// @param locale QLocale*
///
QVariant* q_variant_new21(const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new22 constructs a new QVariant object.
///
/// @param map libqt_map of const char* to QVariant*
///
QVariant* q_variant_new22(libqt_map map);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new23 constructs a new QVariant object.
///
/// @param re QRegularExpression*
///
QVariant* q_variant_new23(const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new24 constructs a new QVariant object.
///
/// @param string const char*
///
QVariant* q_variant_new24(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new25 constructs a new QVariant object.
///
/// @param stringlist const char**
///
QVariant* q_variant_new25(const char* stringlist[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new26 constructs a new QVariant object.
///
/// @param url QUrl*
///
QVariant* q_variant_new26(const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new27 constructs a new QVariant object.
///
/// @param jsonValue QJsonValue*
///
QVariant* q_variant_new27(const void* jsonValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new28 constructs a new QVariant object.
///
/// @param modelIndex QModelIndex*
///
QVariant* q_variant_new28(const void* modelIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new29 constructs a new QVariant object.
///
/// @param uuid QUuid*
///
QVariant* q_variant_new29(void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new30 constructs a new QVariant object.
///
/// @param size QSize*
///
QVariant* q_variant_new30(void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new31 constructs a new QVariant object.
///
/// @param size QSizeF*
///
QVariant* q_variant_new31(void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new32 constructs a new QVariant object.
///
/// @param pt QPoint*
///
QVariant* q_variant_new32(void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new33 constructs a new QVariant object.
///
/// @param pt QPointF*
///
QVariant* q_variant_new33(void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new34 constructs a new QVariant object.
///
/// @param line QLine*
///
QVariant* q_variant_new34(void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new35 constructs a new QVariant object.
///
/// @param line QLineF*
///
QVariant* q_variant_new35(void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new36 constructs a new QVariant object.
///
/// @param rect QRect*
///
QVariant* q_variant_new36(void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new37 constructs a new QVariant object.
///
/// @param rect QRectF*
///
QVariant* q_variant_new37(void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new38 constructs a new QVariant object.
///
/// @param easing QEasingCurve*
///
QVariant* q_variant_new38(const void* easing);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new39 constructs a new QVariant object.
///
/// @param jsonDocument QJsonDocument*
///
QVariant* q_variant_new39(const void* jsonDocument);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new40 constructs a new QVariant object.
///
/// @param modelIndex QPersistentModelIndex*
///
QVariant* q_variant_new40(const void* modelIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new41 constructs a new QVariant object.
///
/// @param str const char*
///
QVariant* q_variant_new41(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new42 constructs a new QVariant object.
///
/// @param string char*
///
QVariant* q_variant_new42(char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new43 constructs a new QVariant object.
///
/// @param type enum QVariant__Type
///
QVariant* q_variant_new43(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)

/// q_variant_new44 constructs a new QVariant object.
///
/// @param type QMetaType*
/// @param copy void*
///
QVariant* q_variant_new44(void* type, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#operator-eq)
///
/// @param self QVariant*
/// @param other QVariant*
///
void q_variant_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#swap)
///
/// @param self QVariant*
/// @param other QVariant*
///
void q_variant_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#userType)
///
/// @param self const QVariant*
///
int32_t q_variant_user_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeId)
///
/// @param self const QVariant*
///
int32_t q_variant_type_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVariant*
///
const char* q_variant_type_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#metaType)
///
/// @param self const QVariant*
///
QMetaType* q_variant_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// @param self const QVariant*
/// @param targetType QMetaType*
///
bool q_variant_can_convert(const void* self, void* targetType);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// @param self QVariant*
/// @param type QMetaType*
///
bool q_variant_convert(void* self, void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canView)
///
/// @param self const QVariant*
/// @param targetType QMetaType*
///
bool q_variant_can_view(const void* self, void* targetType);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// @param self const QVariant*
/// @param targetTypeId int
///
bool q_variant_can_convert2(const void* self, int targetTypeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// @param self QVariant*
/// @param targetTypeId int
///
bool q_variant_convert2(void* self, int targetTypeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isValid)
///
/// @param self const QVariant*
///
bool q_variant_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isNull)
///
/// @param self const QVariant*
///
bool q_variant_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#clear)
///
/// @param self QVariant*
///
void q_variant_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#detach)
///
/// @param self QVariant*
///
void q_variant_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isDetached)
///
/// @param self const QVariant*
///
bool q_variant_is_detached(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// @param self const QVariant*
///
int32_t q_variant_to_int(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// @param self const QVariant*
///
uint32_t q_variant_to_u_int(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// @param self const QVariant*
///
long long q_variant_to_long_long(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// @param self const QVariant*
///
uintptr_t q_variant_to_u_long_long(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBool)
///
/// @param self const QVariant*
///
bool q_variant_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// @param self const QVariant*
///
double q_variant_to_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// @param self const QVariant*
///
float q_variant_to_float(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// @param self const QVariant*
///
double q_variant_to_real(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVariant*
///
char* q_variant_to_byte_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
///
/// @param self const QVariant*
///
QBitArray* q_variant_to_bit_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVariant*
///
const char* q_variant_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toStringList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVariant*
///
const char** q_variant_to_string_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toChar)
///
/// @param self const QVariant*
///
QChar* q_variant_to_char(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDate)
///
/// @param self const QVariant*
///
QDate* q_variant_to_date(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toTime)
///
/// @param self const QVariant*
///
QTime* q_variant_to_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
///
/// @param self const QVariant*
///
QDateTime* q_variant_to_date_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toList)
///
/// @param self const QVariant*
///
/// @return libqt_list of QVariant*
///
libqt_list q_variant_to_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QVariant*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_variant_to_map(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toHash)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QVariant*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_variant_to_hash(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPoint)
///
/// @param self const QVariant*
///
QPoint* q_variant_to_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPointF)
///
/// @param self const QVariant*
///
QPointF* q_variant_to_point_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRect)
///
/// @param self const QVariant*
///
QRect* q_variant_to_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSize)
///
/// @param self const QVariant*
///
QSize* q_variant_to_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
///
/// @param self const QVariant*
///
QSizeF* q_variant_to_size_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLine)
///
/// @param self const QVariant*
///
QLine* q_variant_to_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLineF)
///
/// @param self const QVariant*
///
QLineF* q_variant_to_line_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRectF)
///
/// @param self const QVariant*
///
QRectF* q_variant_to_rect_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLocale)
///
/// @param self const QVariant*
///
QLocale* q_variant_to_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
///
/// @param self const QVariant*
///
QRegularExpression* q_variant_to_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
///
/// @param self const QVariant*
///
QEasingCurve* q_variant_to_easing_curve(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUuid)
///
/// @param self const QVariant*
///
QUuid* q_variant_to_uuid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUrl)
///
/// @param self const QVariant*
///
QUrl* q_variant_to_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
///
/// @param self const QVariant*
///
QJsonValue* q_variant_to_json_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
///
/// @param self const QVariant*
///
QJsonObject* q_variant_to_json_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
///
/// @param self const QVariant*
///
QJsonArray* q_variant_to_json_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
///
/// @param self const QVariant*
///
QJsonDocument* q_variant_to_json_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
///
/// @param self const QVariant*
///
QModelIndex* q_variant_to_model_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
///
/// @param self const QVariant*
///
QPersistentModelIndex* q_variant_to_persistent_model_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#load)
///
/// @param self QVariant*
/// @param ds QDataStream*
///
void q_variant_load(void* self, void* ds);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#save)
///
/// @param self const QVariant*
/// @param ds QDataStream*
///
void q_variant_save(const void* self, void* ds);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#type)
///
/// @param self const QVariant*
///
/// @return enum QVariant__Type
///
int32_t q_variant_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeToName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param typeId int
///
const char* q_variant_type_to_name(int typeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#nameToType)
///
/// @param name const char*
///
/// @return enum QVariant__Type
///
int32_t q_variant_name_to_type(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// @param self QVariant*
///
void* q_variant_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#constData)
///
/// @param self const QVariant*
///
const void* q_variant_const_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// @param self const QVariant*
///
const void* q_variant_data2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#setValue)
///
/// @param self QVariant*
/// @param avalue QVariant*
///
void q_variant_set_value(void* self, const void* avalue);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// @param type QMetaType*
///
QVariant* q_variant_from_meta_type(void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#compare)
///
/// @param lhs QVariant*
/// @param rhs QVariant*
///
QPartialOrdering* q_variant_compare(const void* lhs, const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// @param self const QVariant*
/// @param ok bool*
///
int32_t q_variant_to_int1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// @param self const QVariant*
/// @param ok bool*
///
uint32_t q_variant_to_u_int1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// @param self const QVariant*
/// @param ok bool*
///
long long q_variant_to_long_long1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// @param self const QVariant*
/// @param ok bool*
///
uintptr_t q_variant_to_u_long_long1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// @param self const QVariant*
/// @param ok bool*
///
double q_variant_to_double1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// @param self const QVariant*
/// @param ok bool*
///
float q_variant_to_float1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// @param self const QVariant*
/// @param ok bool*
///
double q_variant_to_real1(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
///
/// @param type QMetaType*
/// @param copy void*
///
QVariant* q_variant_from_meta_type2(void* type, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
///
/// Delete this object from C++ memory.
///
/// @param self QVariant*
///
void q_variant_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#public-types)

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
    QVARIANT_TYPE_LASTTYPE = -1
} QVariant__Type;

#endif
