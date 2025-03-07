#pragma once
#ifndef SRCQT6C_LIBQVARIANT_H
#define SRCQT6C_LIBQVARIANT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbitarray.h"
#include "libqchar.h"
#include "libqdatastream.h"
#include "libqdatetime.h"
#include "libqeasingcurve.h"
#include "libqjsonarray.h"
#include "libqjsondocument.h"
#include "libqjsonobject.h"
#include "libqjsonvalue.h"
#include "libqline.h"
#include "libqlocale.h"
#include "libqmetatype.h"
#include "libqabstractitemmodel.h"
#include "libqcompare.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregularexpression.h"
#include "libqsize.h"
#include <string.h>
#include "libqurl.h"
#include "libquuid.h"

QVariant* q_variant_new();
QVariant* q_variant_new2(void* typeVal);
QVariant* q_variant_new3(void* other);
QVariant* q_variant_new4(int i);
QVariant* q_variant_new5(uint32_t ui);
QVariant* q_variant_new6(long long ll);
QVariant* q_variant_new7(uint64_t ull);
QVariant* q_variant_new8(bool b);
QVariant* q_variant_new9(double d);
QVariant* q_variant_new10(float f);
QVariant* q_variant_new11(const char* str);
QVariant* q_variant_new12(const char* bytearray);
QVariant* q_variant_new13(void* bitarray);
QVariant* q_variant_new14(const char* stringVal);
QVariant* q_variant_new15(const char* stringlist[]);
QVariant* q_variant_new16(void* qchar);
QVariant* q_variant_new17(void* date);
QVariant* q_variant_new18(void* time);
QVariant* q_variant_new19(void* datetime);
QVariant* q_variant_new20(libqt_map /* of const char* to QVariant* */ mapVal);
QVariant* q_variant_new21(libqt_map /* of const char* to QVariant* */ hash);
QVariant* q_variant_new22(void* size);
QVariant* q_variant_new23(void* size);
QVariant* q_variant_new24(void* pt);
QVariant* q_variant_new25(void* pt);
QVariant* q_variant_new26(void* line);
QVariant* q_variant_new27(void* line);
QVariant* q_variant_new28(void* rect);
QVariant* q_variant_new29(void* rect);
QVariant* q_variant_new30(void* locale);
QVariant* q_variant_new31(void* re);
QVariant* q_variant_new32(void* easing);
QVariant* q_variant_new33(void* uuid);
QVariant* q_variant_new34(void* url);
QVariant* q_variant_new35(void* jsonValue);
QVariant* q_variant_new36(void* jsonObject);
QVariant* q_variant_new37(void* jsonArray);
QVariant* q_variant_new38(void* jsonDocument);
QVariant* q_variant_new39(void* modelIndex);
QVariant* q_variant_new40(void* modelIndex);
QVariant* q_variant_new41(int64_t typeVal);
QVariant* q_variant_new42(void* typeVal, void* copyVal);
void q_variant_operator_assign(void* self, void* other);
void q_variant_swap(void* self, void* other);
int32_t q_variant_user_type(void* self);
int32_t q_variant_type_id(void* self);
const char* q_variant_type_name(void* self);
QMetaType* q_variant_meta_type(void* self);
bool q_variant_can_convert(void* self, void* targetType);
bool q_variant_convert(void* self, void* typeVal);
bool q_variant_can_view(void* self, void* targetType);
bool q_variant_can_convert_with_target_type_id(void* self, int targetTypeId);
bool q_variant_convert_with_target_type_id(void* self, int targetTypeId);
bool q_variant_is_valid(void* self);
bool q_variant_is_null(void* self);
void q_variant_clear(void* self);
void q_variant_detach(void* self);
bool q_variant_is_detached(void* self);
int32_t q_variant_to_int(void* self);
uint32_t q_variant_to_u_int(void* self);
long long q_variant_to_long_long(void* self);
uint64_t q_variant_to_u_long_long(void* self);
bool q_variant_to_bool(void* self);
double q_variant_to_double(void* self);
float q_variant_to_float(void* self);
double q_variant_to_real(void* self);
char* q_variant_to_byte_array(void* self);
QBitArray* q_variant_to_bit_array(void* self);
const char* q_variant_to_string(void* self);
const char** q_variant_to_string_list(void* self);
QChar* q_variant_to_char(void* self);
QDate* q_variant_to_date(void* self);
QTime* q_variant_to_time(void* self);
QDateTime* q_variant_to_date_time(void* self);
libqt_map /* of const char* to QVariant* */ q_variant_to_map(void* self);
libqt_map /* of const char* to QVariant* */ q_variant_to_hash(void* self);
QPoint* q_variant_to_point(void* self);
QPointF* q_variant_to_point_f(void* self);
QRect* q_variant_to_rect(void* self);
QSize* q_variant_to_size(void* self);
QSizeF* q_variant_to_size_f(void* self);
QLine* q_variant_to_line(void* self);
QLineF* q_variant_to_line_f(void* self);
QRectF* q_variant_to_rect_f(void* self);
QLocale* q_variant_to_locale(void* self);
QRegularExpression* q_variant_to_regular_expression(void* self);
QEasingCurve* q_variant_to_easing_curve(void* self);
QUuid* q_variant_to_uuid(void* self);
QUrl* q_variant_to_url(void* self);
QJsonValue* q_variant_to_json_value(void* self);
QJsonObject* q_variant_to_json_object(void* self);
QJsonArray* q_variant_to_json_array(void* self);
QJsonDocument* q_variant_to_json_document(void* self);
QModelIndex* q_variant_to_model_index(void* self);
QPersistentModelIndex* q_variant_to_persistent_model_index(void* self);
void q_variant_load(void* self, void* ds);
void q_variant_save(void* self, void* ds);
int64_t q_variant_type(void* self);
const char* q_variant_type_to_name(int typeId);
int64_t q_variant_name_to_type(const char* name);
void* q_variant_data(void* self);
void* q_variant_const_data(void* self);
void* q_variant_data2(void* self);
void q_variant_set_value(void* self, void* avalue);
QPartialOrdering* q_variant_compare(void* lhs, void* rhs);
int32_t q_variant_to_int1(void* self, bool* ok);
uint32_t q_variant_to_u_int1(void* self, bool* ok);
long long q_variant_to_long_long1(void* self, bool* ok);
uint64_t q_variant_to_u_long_long1(void* self, bool* ok);
double q_variant_to_double1(void* self, bool* ok);
float q_variant_to_float1(void* self, bool* ok);
double q_variant_to_real1(void* self, bool* ok);
void q_variant_delete(void* self);

QVariantConstPointer* q_variantconstpointer_new(void* variant);
QVariantConstPointer* q_variantconstpointer_new2(void* param1);
QVariant* q_variantconstpointer_operator_multiply(void* self);
QVariant* q_variantconstpointer_operator_minus_greater(void* self);
void q_variantconstpointer_operator_assign(void* self, void* param1);
void q_variantconstpointer_delete(void* self);

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
    QVARIANT_TYPE_LASTCORETYPE = 58,
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
