#include "libqbitarray.hpp"
#include "libqchar.hpp"
#include "libqdatastream.hpp"
#include "libqdatetime.hpp"
#include "libqeasingcurve.hpp"
#include "libqjsonarray.hpp"
#include "libqjsondocument.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonvalue.hpp"
#include "libqline.hpp"
#include "libqlocale.hpp"
#include "libqmetatype.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqcompare.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libquuid.hpp"
#include "libqvariant.hpp"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qvariant.html

/// q_variant_new constructs a new QVariant object.
///
///
QVariant* q_variant_new() {
    return QVariant_new();
}

/// q_variant_new2 constructs a new QVariant object.
///
/// ``` QMetaType* typeVal ```
QVariant* q_variant_new2(void* typeVal) {
    return QVariant_new2((QMetaType*)typeVal);
}

/// q_variant_new3 constructs a new QVariant object.
///
/// ``` QVariant* other ```
QVariant* q_variant_new3(void* other) {
    return QVariant_new3((QVariant*)other);
}

/// q_variant_new4 constructs a new QVariant object.
///
/// ``` int i ```
QVariant* q_variant_new4(int i) {
    return QVariant_new4(i);
}

/// q_variant_new5 constructs a new QVariant object.
///
/// ``` uint32_t ui ```
QVariant* q_variant_new5(uint32_t ui) {
    return QVariant_new5(ui);
}

/// q_variant_new6 constructs a new QVariant object.
///
/// ``` long long ll ```
QVariant* q_variant_new6(long long ll) {
    return QVariant_new6(ll);
}

/// q_variant_new7 constructs a new QVariant object.
///
/// ``` uint64_t ull ```
QVariant* q_variant_new7(uint64_t ull) {
    return QVariant_new7(ull);
}

/// q_variant_new8 constructs a new QVariant object.
///
/// ``` bool b ```
QVariant* q_variant_new8(bool b) {
    return QVariant_new8(b);
}

/// q_variant_new9 constructs a new QVariant object.
///
/// ``` double d ```
QVariant* q_variant_new9(double d) {
    return QVariant_new9(d);
}

/// q_variant_new10 constructs a new QVariant object.
///
/// ``` float f ```
QVariant* q_variant_new10(float f) {
    return QVariant_new10(f);
}

/// q_variant_new11 constructs a new QVariant object.
///
/// ``` const char* str ```
QVariant* q_variant_new11(const char* str) {
    return QVariant_new11(str);
}

/// q_variant_new12 constructs a new QVariant object.
///
/// ``` const char* bytearray ```
QVariant* q_variant_new12(const char* bytearray) {
    return QVariant_new12(qstring(bytearray));
}

/// q_variant_new13 constructs a new QVariant object.
///
/// ``` QBitArray* bitarray ```
QVariant* q_variant_new13(void* bitarray) {
    return QVariant_new13((QBitArray*)bitarray);
}

/// q_variant_new14 constructs a new QVariant object.
///
/// ``` const char* stringVal ```
QVariant* q_variant_new14(const char* stringVal) {
    return QVariant_new14(qstring(stringVal));
}

/// q_variant_new15 constructs a new QVariant object.
///
/// ``` const char* stringlist[] ```
QVariant* q_variant_new15(const char* stringlist[]) {
    size_t stringlist_len = libqt_strv_length(stringlist);
    libqt_string* stringlist_qstr = malloc(stringlist_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < stringlist_len; ++_i) {
        stringlist_qstr[_i] = qstring(stringlist[_i]);
    }
    libqt_list stringlist_list = qstrlist(stringlist_qstr, stringlist_len);

    return QVariant_new15(stringlist_list);
}

/// q_variant_new16 constructs a new QVariant object.
///
/// ``` QChar* qchar ```
QVariant* q_variant_new16(void* qchar) {
    return QVariant_new16((QChar*)qchar);
}

/// q_variant_new17 constructs a new QVariant object.
///
/// ``` QDate* date ```
QVariant* q_variant_new17(void* date) {
    return QVariant_new17((QDate*)date);
}

/// q_variant_new18 constructs a new QVariant object.
///
/// ``` QTime* time ```
QVariant* q_variant_new18(void* time) {
    return QVariant_new18((QTime*)time);
}

/// q_variant_new19 constructs a new QVariant object.
///
/// ``` QDateTime* datetime ```
QVariant* q_variant_new19(void* datetime) {
    return QVariant_new19((QDateTime*)datetime);
}

/// q_variant_new20 constructs a new QVariant object.
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QVariant* q_variant_new20(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QVariant_new20(mapVal);
}

/// q_variant_new21 constructs a new QVariant object.
///
/// ``` libqt_map /* of const char* to QVariant* */ hash ```
QVariant* q_variant_new21(libqt_map /* of const char* to QVariant* */ hash) {
    return QVariant_new21(hash);
}

/// q_variant_new22 constructs a new QVariant object.
///
/// ``` QSize* size ```
QVariant* q_variant_new22(void* size) {
    return QVariant_new22((QSize*)size);
}

/// q_variant_new23 constructs a new QVariant object.
///
/// ``` QSizeF* size ```
QVariant* q_variant_new23(void* size) {
    return QVariant_new23((QSizeF*)size);
}

/// q_variant_new24 constructs a new QVariant object.
///
/// ``` QPoint* pt ```
QVariant* q_variant_new24(void* pt) {
    return QVariant_new24((QPoint*)pt);
}

/// q_variant_new25 constructs a new QVariant object.
///
/// ``` QPointF* pt ```
QVariant* q_variant_new25(void* pt) {
    return QVariant_new25((QPointF*)pt);
}

/// q_variant_new26 constructs a new QVariant object.
///
/// ``` QLine* line ```
QVariant* q_variant_new26(void* line) {
    return QVariant_new26((QLine*)line);
}

/// q_variant_new27 constructs a new QVariant object.
///
/// ``` QLineF* line ```
QVariant* q_variant_new27(void* line) {
    return QVariant_new27((QLineF*)line);
}

/// q_variant_new28 constructs a new QVariant object.
///
/// ``` QRect* rect ```
QVariant* q_variant_new28(void* rect) {
    return QVariant_new28((QRect*)rect);
}

/// q_variant_new29 constructs a new QVariant object.
///
/// ``` QRectF* rect ```
QVariant* q_variant_new29(void* rect) {
    return QVariant_new29((QRectF*)rect);
}

/// q_variant_new30 constructs a new QVariant object.
///
/// ``` QLocale* locale ```
QVariant* q_variant_new30(void* locale) {
    return QVariant_new30((QLocale*)locale);
}

/// q_variant_new31 constructs a new QVariant object.
///
/// ``` QRegularExpression* re ```
QVariant* q_variant_new31(void* re) {
    return QVariant_new31((QRegularExpression*)re);
}

/// q_variant_new32 constructs a new QVariant object.
///
/// ``` QEasingCurve* easing ```
QVariant* q_variant_new32(void* easing) {
    return QVariant_new32((QEasingCurve*)easing);
}

/// q_variant_new33 constructs a new QVariant object.
///
/// ``` QUuid* uuid ```
QVariant* q_variant_new33(void* uuid) {
    return QVariant_new33((QUuid*)uuid);
}

/// q_variant_new34 constructs a new QVariant object.
///
/// ``` QUrl* url ```
QVariant* q_variant_new34(void* url) {
    return QVariant_new34((QUrl*)url);
}

/// q_variant_new35 constructs a new QVariant object.
///
/// ``` QJsonValue* jsonValue ```
QVariant* q_variant_new35(void* jsonValue) {
    return QVariant_new35((QJsonValue*)jsonValue);
}

/// q_variant_new36 constructs a new QVariant object.
///
/// ``` QJsonObject* jsonObject ```
QVariant* q_variant_new36(void* jsonObject) {
    return QVariant_new36((QJsonObject*)jsonObject);
}

/// q_variant_new37 constructs a new QVariant object.
///
/// ``` QJsonArray* jsonArray ```
QVariant* q_variant_new37(void* jsonArray) {
    return QVariant_new37((QJsonArray*)jsonArray);
}

/// q_variant_new38 constructs a new QVariant object.
///
/// ``` QJsonDocument* jsonDocument ```
QVariant* q_variant_new38(void* jsonDocument) {
    return QVariant_new38((QJsonDocument*)jsonDocument);
}

/// q_variant_new39 constructs a new QVariant object.
///
/// ``` QModelIndex* modelIndex ```
QVariant* q_variant_new39(void* modelIndex) {
    return QVariant_new39((QModelIndex*)modelIndex);
}

/// q_variant_new40 constructs a new QVariant object.
///
/// ``` QPersistentModelIndex* modelIndex ```
QVariant* q_variant_new40(void* modelIndex) {
    return QVariant_new40((QPersistentModelIndex*)modelIndex);
}

/// q_variant_new41 constructs a new QVariant object.
///
/// ``` enum QVariant__Type typeVal ```
QVariant* q_variant_new41(int64_t typeVal) {
    return QVariant_new41(typeVal);
}

/// q_variant_new42 constructs a new QVariant object.
///
/// ``` QMetaType* typeVal, void* copyVal ```
QVariant* q_variant_new42(void* typeVal, void* copyVal) {
    return QVariant_new42((QMetaType*)typeVal, copyVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#operator=)
///
/// ``` QVariant* self, QVariant* other ```
void q_variant_operator_assign(void* self, void* other) {
    QVariant_OperatorAssign((QVariant*)self, (QVariant*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#swap)
///
/// ``` QVariant* self, QVariant* other ```
void q_variant_swap(void* self, void* other) {
    QVariant_Swap((QVariant*)self, (QVariant*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#userType)
///
/// ``` QVariant* self ```
int32_t q_variant_user_type(void* self) {
    return QVariant_UserType((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeId)
///
/// ``` QVariant* self ```
int32_t q_variant_type_id(void* self) {
    return QVariant_TypeId((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeName)
///
/// ``` QVariant* self ```
const char* q_variant_type_name(void* self) {
    return QVariant_TypeName((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#metaType)
///
/// ``` QVariant* self ```
QMetaType* q_variant_meta_type(void* self) {
    return QVariant_MetaType((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// ``` QVariant* self, QMetaType* targetType ```
bool q_variant_can_convert(void* self, void* targetType) {
    return QVariant_CanConvert((QVariant*)self, (QMetaType*)targetType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// ``` QVariant* self, QMetaType* typeVal ```
bool q_variant_convert(void* self, void* typeVal) {
    return QVariant_Convert((QVariant*)self, (QMetaType*)typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canView)
///
/// ``` QVariant* self, QMetaType* targetType ```
bool q_variant_can_view(void* self, void* targetType) {
    return QVariant_CanView((QVariant*)self, (QMetaType*)targetType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
///
/// ``` QVariant* self, int targetTypeId ```
bool q_variant_can_convert_with_target_type_id(void* self, int targetTypeId) {
    return QVariant_CanConvertWithTargetTypeId((QVariant*)self, targetTypeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
///
/// ``` QVariant* self, int targetTypeId ```
bool q_variant_convert_with_target_type_id(void* self, int targetTypeId) {
    return QVariant_ConvertWithTargetTypeId((QVariant*)self, targetTypeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isValid)
///
/// ``` QVariant* self ```
bool q_variant_is_valid(void* self) {
    return QVariant_IsValid((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isNull)
///
/// ``` QVariant* self ```
bool q_variant_is_null(void* self) {
    return QVariant_IsNull((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#clear)
///
/// ``` QVariant* self ```
void q_variant_clear(void* self) {
    QVariant_Clear((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#detach)
///
/// ``` QVariant* self ```
void q_variant_detach(void* self) {
    QVariant_Detach((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isDetached)
///
/// ``` QVariant* self ```
bool q_variant_is_detached(void* self) {
    return QVariant_IsDetached((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// ``` QVariant* self ```
int32_t q_variant_to_int(void* self) {
    return QVariant_ToInt((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// ``` QVariant* self ```
uint32_t q_variant_to_u_int(void* self) {
    return QVariant_ToUInt((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// ``` QVariant* self ```
long long q_variant_to_long_long(void* self) {
    return QVariant_ToLongLong((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// ``` QVariant* self ```
uint64_t q_variant_to_u_long_long(void* self) {
    return QVariant_ToULongLong((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBool)
///
/// ``` QVariant* self ```
bool q_variant_to_bool(void* self) {
    return QVariant_ToBool((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// ``` QVariant* self ```
double q_variant_to_double(void* self) {
    return QVariant_ToDouble((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// ``` QVariant* self ```
float q_variant_to_float(void* self) {
    return QVariant_ToFloat((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// ``` QVariant* self ```
double q_variant_to_real(void* self) {
    return QVariant_ToReal((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
///
/// ``` QVariant* self ```
char* q_variant_to_byte_array(void* self) {
    libqt_string _str = QVariant_ToByteArray((QVariant*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
///
/// ``` QVariant* self ```
QBitArray* q_variant_to_bit_array(void* self) {
    return QVariant_ToBitArray((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toString)
///
/// ``` QVariant* self ```
const char* q_variant_to_string(void* self) {
    libqt_string _str = QVariant_ToString((QVariant*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toStringList)
///
/// ``` QVariant* self ```
const char** q_variant_to_string_list(void* self) {
    libqt_list _arr = QVariant_ToStringList((QVariant*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toChar)
///
/// ``` QVariant* self ```
QChar* q_variant_to_char(void* self) {
    return QVariant_ToChar((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDate)
///
/// ``` QVariant* self ```
QDate* q_variant_to_date(void* self) {
    return QVariant_ToDate((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toTime)
///
/// ``` QVariant* self ```
QTime* q_variant_to_time(void* self) {
    return QVariant_ToTime((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
///
/// ``` QVariant* self ```
QDateTime* q_variant_to_date_time(void* self) {
    return QVariant_ToDateTime((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toMap)
///
/// ``` QVariant* self ```
libqt_map /* of const char* to QVariant* */ q_variant_to_map(void* self) {
    return QVariant_ToMap((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toHash)
///
/// ``` QVariant* self ```
libqt_map /* of const char* to QVariant* */ q_variant_to_hash(void* self) {
    return QVariant_ToHash((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPoint)
///
/// ``` QVariant* self ```
QPoint* q_variant_to_point(void* self) {
    return QVariant_ToPoint((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPointF)
///
/// ``` QVariant* self ```
QPointF* q_variant_to_point_f(void* self) {
    return QVariant_ToPointF((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRect)
///
/// ``` QVariant* self ```
QRect* q_variant_to_rect(void* self) {
    return QVariant_ToRect((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSize)
///
/// ``` QVariant* self ```
QSize* q_variant_to_size(void* self) {
    return QVariant_ToSize((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
///
/// ``` QVariant* self ```
QSizeF* q_variant_to_size_f(void* self) {
    return QVariant_ToSizeF((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLine)
///
/// ``` QVariant* self ```
QLine* q_variant_to_line(void* self) {
    return QVariant_ToLine((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLineF)
///
/// ``` QVariant* self ```
QLineF* q_variant_to_line_f(void* self) {
    return QVariant_ToLineF((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRectF)
///
/// ``` QVariant* self ```
QRectF* q_variant_to_rect_f(void* self) {
    return QVariant_ToRectF((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLocale)
///
/// ``` QVariant* self ```
QLocale* q_variant_to_locale(void* self) {
    return QVariant_ToLocale((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
///
/// ``` QVariant* self ```
QRegularExpression* q_variant_to_regular_expression(void* self) {
    return QVariant_ToRegularExpression((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
///
/// ``` QVariant* self ```
QEasingCurve* q_variant_to_easing_curve(void* self) {
    return QVariant_ToEasingCurve((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUuid)
///
/// ``` QVariant* self ```
QUuid* q_variant_to_uuid(void* self) {
    return QVariant_ToUuid((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUrl)
///
/// ``` QVariant* self ```
QUrl* q_variant_to_url(void* self) {
    return QVariant_ToUrl((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
///
/// ``` QVariant* self ```
QJsonValue* q_variant_to_json_value(void* self) {
    return QVariant_ToJsonValue((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
///
/// ``` QVariant* self ```
QJsonObject* q_variant_to_json_object(void* self) {
    return QVariant_ToJsonObject((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
///
/// ``` QVariant* self ```
QJsonArray* q_variant_to_json_array(void* self) {
    return QVariant_ToJsonArray((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
///
/// ``` QVariant* self ```
QJsonDocument* q_variant_to_json_document(void* self) {
    return QVariant_ToJsonDocument((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
///
/// ``` QVariant* self ```
QModelIndex* q_variant_to_model_index(void* self) {
    return QVariant_ToModelIndex((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
///
/// ``` QVariant* self ```
QPersistentModelIndex* q_variant_to_persistent_model_index(void* self) {
    return QVariant_ToPersistentModelIndex((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#load)
///
/// ``` QVariant* self, QDataStream* ds ```
void q_variant_load(void* self, void* ds) {
    QVariant_Load((QVariant*)self, (QDataStream*)ds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#save)
///
/// ``` QVariant* self, QDataStream* ds ```
void q_variant_save(void* self, void* ds) {
    QVariant_Save((QVariant*)self, (QDataStream*)ds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#type)
///
/// ``` QVariant* self ```
int64_t q_variant_type(void* self) {
    return QVariant_Type((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeToName)
///
/// ``` int typeId ```
const char* q_variant_type_to_name(int typeId) {
    return QVariant_TypeToName(typeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#nameToType)
///
/// ``` const char* name ```
int64_t q_variant_name_to_type(const char* name) {
    return QVariant_NameToType(name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// ``` QVariant* self ```
void* q_variant_data(void* self) {
    return QVariant_Data((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#constData)
///
/// ``` QVariant* self ```
void* q_variant_const_data(void* self) {
    return QVariant_ConstData((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
///
/// ``` QVariant* self ```
void* q_variant_data2(void* self) {
    return QVariant_Data2((QVariant*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#setValue)
///
/// ``` QVariant* self, QVariant* avalue ```
void q_variant_set_value(void* self, void* avalue) {
    QVariant_SetValue((QVariant*)self, (QVariant*)avalue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#compare)
///
/// ``` QVariant* lhs, QVariant* rhs ```
QPartialOrdering* q_variant_compare(void* lhs, void* rhs) {
    return QVariant_Compare((QVariant*)lhs, (QVariant*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
///
/// ``` QVariant* self, bool* ok ```
int32_t q_variant_to_int1(void* self, bool* ok) {
    return QVariant_ToInt1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
///
/// ``` QVariant* self, bool* ok ```
uint32_t q_variant_to_u_int1(void* self, bool* ok) {
    return QVariant_ToUInt1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
///
/// ``` QVariant* self, bool* ok ```
long long q_variant_to_long_long1(void* self, bool* ok) {
    return QVariant_ToLongLong1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
///
/// ``` QVariant* self, bool* ok ```
uint64_t q_variant_to_u_long_long1(void* self, bool* ok) {
    return QVariant_ToULongLong1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
///
/// ``` QVariant* self, bool* ok ```
double q_variant_to_double1(void* self, bool* ok) {
    return QVariant_ToDouble1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
///
/// ``` QVariant* self, bool* ok ```
float q_variant_to_float1(void* self, bool* ok) {
    return QVariant_ToFloat1((QVariant*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
///
/// ``` QVariant* self, bool* ok ```
double q_variant_to_real1(void* self, bool* ok) {
    return QVariant_ToReal1((QVariant*)self, (bool*)ok);
}

/// Delete this object from C++ memory.
///
/// ``` QVariant* self ```
void q_variant_delete(void* self) {
    QVariant_Delete((QVariant*)(self));
}

/// https://doc.qt.io/qt-6/qvariantconstpointer.html

/// q_variantconstpointer_new constructs a new QVariantConstPointer object.
///
/// ``` QVariant* variant ```
QVariantConstPointer* q_variantconstpointer_new(void* variant) {
    return QVariantConstPointer_new((QVariant*)variant);
}

/// q_variantconstpointer_new2 constructs a new QVariantConstPointer object.
///
/// ``` QVariantConstPointer* param1 ```
QVariantConstPointer* q_variantconstpointer_new2(void* param1) {
    return QVariantConstPointer_new2((QVariantConstPointer*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator*)
///
/// ``` QVariantConstPointer* self ```
QVariant* q_variantconstpointer_operator_multiply(void* self) {
    return QVariantConstPointer_OperatorMultiply((QVariantConstPointer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator->)
///
/// ``` QVariantConstPointer* self ```
QVariant* q_variantconstpointer_operator_minus_greater(void* self) {
    return QVariantConstPointer_OperatorMinusGreater((QVariantConstPointer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator=)
///
/// ``` QVariantConstPointer* self, QVariantConstPointer* param1 ```
void q_variantconstpointer_operator_assign(void* self, void* param1) {
    QVariantConstPointer_OperatorAssign((QVariantConstPointer*)self, (QVariantConstPointer*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QVariantConstPointer* self ```
void q_variantconstpointer_delete(void* self) {
    QVariantConstPointer_Delete((QVariantConstPointer*)(self));
}