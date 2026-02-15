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
#include "libqurl.hpp"
#include "libquuid.hpp"
#include "libqvariant.hpp"
#include "libqvariant.h"

QVariant* q_variant_new() {
    return QVariant_new();
}

QVariant* q_variant_new2(void* type) {
    return QVariant_new2((QMetaType*)type);
}

QVariant* q_variant_new3(void* other) {
    return QVariant_new3((QVariant*)other);
}

QVariant* q_variant_new4(int i) {
    return QVariant_new4(i);
}

QVariant* q_variant_new5(uint32_t ui) {
    return QVariant_new5(ui);
}

QVariant* q_variant_new6(long long ll) {
    return QVariant_new6(ll);
}

QVariant* q_variant_new7(uint64_t ull) {
    return QVariant_new7(ull);
}

QVariant* q_variant_new8(bool b) {
    return QVariant_new8(b);
}

QVariant* q_variant_new9(double d) {
    return QVariant_new9(d);
}

QVariant* q_variant_new10(float f) {
    return QVariant_new10(f);
}

QVariant* q_variant_new11(void* qchar) {
    return QVariant_new11((QChar*)qchar);
}

QVariant* q_variant_new12(void* date) {
    return QVariant_new12((QDate*)date);
}

QVariant* q_variant_new13(void* time) {
    return QVariant_new13((QTime*)time);
}

QVariant* q_variant_new14(void* bitarray) {
    return QVariant_new14((QBitArray*)bitarray);
}

QVariant* q_variant_new15(char* bytearray) {
    return QVariant_new15(qstring(bytearray));
}

QVariant* q_variant_new16(void* datetime) {
    return QVariant_new16((QDateTime*)datetime);
}

QVariant* q_variant_new17(libqt_map /* of const char* to QVariant* */ hash) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map hash_ret;
    hash_ret.len = hash.len;
    hash_ret.keys = (libqt_string*)malloc(hash_ret.len * sizeof(libqt_string));
    if (hash_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_variant_new17\n");
        abort();
    }
    hash_ret.values = (QVariant**)malloc(hash_ret.len * sizeof(QVariant*));
    if (hash_ret.values == NULL) {
        free(hash_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_variant_new17\n");
        abort();
    }
    const char** hash_karr = (const char**)hash.keys;
    libqt_string* hash_kdest = (libqt_string*)hash_ret.keys;
    QVariant** hash_varr = (QVariant**)hash.values;
    QVariant** hash_vdest = (QVariant**)hash_ret.values;
    for (size_t i = 0; i < hash_ret.len; ++i) {
        hash_kdest[i] = qstring(hash_karr[i]);
        hash_vdest[i] = hash_varr[i];
    }

    QVariant* _out = QVariant_new17(hash_ret);
    free(hash_ret.keys);
    free(hash_ret.values);
    return _out;
}

QVariant* q_variant_new18(void* jsonArray) {
    return QVariant_new18((QJsonArray*)jsonArray);
}

QVariant* q_variant_new19(void* jsonObject) {
    return QVariant_new19((QJsonObject*)jsonObject);
}

QVariant* q_variant_new20(libqt_list /* of QVariant* */ list) {
    return QVariant_new20(list);
}

QVariant* q_variant_new21(void* locale) {
    return QVariant_new21((QLocale*)locale);
}

QVariant* q_variant_new22(libqt_map /* of const char* to QVariant* */ mapVal) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map mapVal_ret;
    mapVal_ret.len = mapVal.len;
    mapVal_ret.keys = (libqt_string*)malloc(mapVal_ret.len * sizeof(libqt_string));
    if (mapVal_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_variant_new22\n");
        abort();
    }
    mapVal_ret.values = (QVariant**)malloc(mapVal_ret.len * sizeof(QVariant*));
    if (mapVal_ret.values == NULL) {
        free(mapVal_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_variant_new22\n");
        abort();
    }
    const char** mapVal_karr = (const char**)mapVal.keys;
    libqt_string* mapVal_kdest = (libqt_string*)mapVal_ret.keys;
    QVariant** mapVal_varr = (QVariant**)mapVal.values;
    QVariant** mapVal_vdest = (QVariant**)mapVal_ret.values;
    for (size_t i = 0; i < mapVal_ret.len; ++i) {
        mapVal_kdest[i] = qstring(mapVal_karr[i]);
        mapVal_vdest[i] = mapVal_varr[i];
    }

    QVariant* _out = QVariant_new22(mapVal_ret);
    free(mapVal_ret.keys);
    free(mapVal_ret.values);
    return _out;
}

QVariant* q_variant_new23(void* re) {
    return QVariant_new23((QRegularExpression*)re);
}

QVariant* q_variant_new24(const char* stringVal) {
    return QVariant_new24(qstring(stringVal));
}

QVariant* q_variant_new25(const char* stringlist[static 1]) {
    size_t stringlist_len = libqt_strv_length(stringlist);
    libqt_string* stringlist_qstr = (libqt_string*)malloc(stringlist_len * sizeof(libqt_string));
    if (stringlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_variant_new25\n");
        abort();
    }
    for (size_t i = 0; i < stringlist_len; ++i) {
        stringlist_qstr[i] = qstring(stringlist[i]);
    }
    libqt_list stringlist_list = qlist(stringlist_qstr, stringlist_len);

    QVariant* _out = QVariant_new25(stringlist_list);
    free(stringlist_qstr);
    return _out;
}

QVariant* q_variant_new26(void* url) {
    return QVariant_new26((QUrl*)url);
}

QVariant* q_variant_new27(void* jsonValue) {
    return QVariant_new27((QJsonValue*)jsonValue);
}

QVariant* q_variant_new28(void* modelIndex) {
    return QVariant_new28((QModelIndex*)modelIndex);
}

QVariant* q_variant_new29(void* uuid) {
    return QVariant_new29((QUuid*)uuid);
}

QVariant* q_variant_new30(void* size) {
    return QVariant_new30((QSize*)size);
}

QVariant* q_variant_new31(void* size) {
    return QVariant_new31((QSizeF*)size);
}

QVariant* q_variant_new32(void* pt) {
    return QVariant_new32((QPoint*)pt);
}

QVariant* q_variant_new33(void* pt) {
    return QVariant_new33((QPointF*)pt);
}

QVariant* q_variant_new34(void* line) {
    return QVariant_new34((QLine*)line);
}

QVariant* q_variant_new35(void* line) {
    return QVariant_new35((QLineF*)line);
}

QVariant* q_variant_new36(void* rect) {
    return QVariant_new36((QRect*)rect);
}

QVariant* q_variant_new37(void* rect) {
    return QVariant_new37((QRectF*)rect);
}

QVariant* q_variant_new38(void* easing) {
    return QVariant_new38((QEasingCurve*)easing);
}

QVariant* q_variant_new39(void* jsonDocument) {
    return QVariant_new39((QJsonDocument*)jsonDocument);
}

QVariant* q_variant_new40(void* modelIndex) {
    return QVariant_new40((QPersistentModelIndex*)modelIndex);
}

QVariant* q_variant_new41(const char* str) {
    return QVariant_new41(str);
}

QVariant* q_variant_new42(int32_t type) {
    return QVariant_new42(type);
}

QVariant* q_variant_new43(void* type, void* copyVal) {
    return QVariant_new43((QMetaType*)type, copyVal);
}

void q_variant_operator_assign(void* self, void* other) {
    QVariant_OperatorAssign((QVariant*)self, (QVariant*)other);
}

void q_variant_swap(void* self, void* other) {
    QVariant_Swap((QVariant*)self, (QVariant*)other);
}

int32_t q_variant_user_type(void* self) {
    return QVariant_UserType((QVariant*)self);
}

int32_t q_variant_type_id(void* self) {
    return QVariant_TypeId((QVariant*)self);
}

const char* q_variant_type_name(void* self) {
    return QVariant_TypeName((QVariant*)self);
}

QMetaType* q_variant_meta_type(void* self) {
    return QVariant_MetaType((QVariant*)self);
}

bool q_variant_can_convert(void* self, void* targetType) {
    return QVariant_CanConvert((QVariant*)self, (QMetaType*)targetType);
}

bool q_variant_convert(void* self, void* type) {
    return QVariant_Convert((QVariant*)self, (QMetaType*)type);
}

bool q_variant_can_view(void* self, void* targetType) {
    return QVariant_CanView((QVariant*)self, (QMetaType*)targetType);
}

bool q_variant_can_convert2(void* self, int targetTypeId) {
    return QVariant_CanConvert2((QVariant*)self, targetTypeId);
}

bool q_variant_convert2(void* self, int targetTypeId) {
    return QVariant_Convert2((QVariant*)self, targetTypeId);
}

bool q_variant_is_valid(void* self) {
    return QVariant_IsValid((QVariant*)self);
}

bool q_variant_is_null(void* self) {
    return QVariant_IsNull((QVariant*)self);
}

void q_variant_clear(void* self) {
    QVariant_Clear((QVariant*)self);
}

void q_variant_detach(void* self) {
    QVariant_Detach((QVariant*)self);
}

bool q_variant_is_detached(void* self) {
    return QVariant_IsDetached((QVariant*)self);
}

int32_t q_variant_to_int(void* self) {
    return QVariant_ToInt((QVariant*)self);
}

uint32_t q_variant_to_u_int(void* self) {
    return QVariant_ToUInt((QVariant*)self);
}

long long q_variant_to_long_long(void* self) {
    return QVariant_ToLongLong((QVariant*)self);
}

uint64_t q_variant_to_u_long_long(void* self) {
    return QVariant_ToULongLong((QVariant*)self);
}

bool q_variant_to_bool(void* self) {
    return QVariant_ToBool((QVariant*)self);
}

double q_variant_to_double(void* self) {
    return QVariant_ToDouble((QVariant*)self);
}

float q_variant_to_float(void* self) {
    return QVariant_ToFloat((QVariant*)self);
}

double q_variant_to_real(void* self) {
    return QVariant_ToReal((QVariant*)self);
}

char* q_variant_to_byte_array(void* self) {
    libqt_string _str = QVariant_ToByteArray((QVariant*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBitArray* q_variant_to_bit_array(void* self) {
    return QVariant_ToBitArray((QVariant*)self);
}

const char* q_variant_to_string(void* self) {
    libqt_string _str = QVariant_ToString((QVariant*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_variant_to_string_list(void* self) {
    libqt_list _arr = QVariant_ToStringList((QVariant*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_variant_to_string_list\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QChar* q_variant_to_char(void* self) {
    return QVariant_ToChar((QVariant*)self);
}

QDate* q_variant_to_date(void* self) {
    return QVariant_ToDate((QVariant*)self);
}

QTime* q_variant_to_time(void* self) {
    return QVariant_ToTime((QVariant*)self);
}

QDateTime* q_variant_to_date_time(void* self) {
    return QVariant_ToDateTime((QVariant*)self);
}

libqt_list /* of QVariant* */ q_variant_to_list(void* self) {
    libqt_list _arr = QVariant_ToList((QVariant*)self);
    return _arr;
}

libqt_map /* of const char* to QVariant* */ q_variant_to_map(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QVariant_ToMap((QVariant*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_variant_to_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_variant_to_map\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_variant_to_hash(void* self) {
    // Convert QHash<QString,QVariant> to libqt_map
    libqt_map _out = QVariant_ToHash((QVariant*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_variant_to_hash\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_variant_to_hash\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

QPoint* q_variant_to_point(void* self) {
    return QVariant_ToPoint((QVariant*)self);
}

QPointF* q_variant_to_point_f(void* self) {
    return QVariant_ToPointF((QVariant*)self);
}

QRect* q_variant_to_rect(void* self) {
    return QVariant_ToRect((QVariant*)self);
}

QSize* q_variant_to_size(void* self) {
    return QVariant_ToSize((QVariant*)self);
}

QSizeF* q_variant_to_size_f(void* self) {
    return QVariant_ToSizeF((QVariant*)self);
}

QLine* q_variant_to_line(void* self) {
    return QVariant_ToLine((QVariant*)self);
}

QLineF* q_variant_to_line_f(void* self) {
    return QVariant_ToLineF((QVariant*)self);
}

QRectF* q_variant_to_rect_f(void* self) {
    return QVariant_ToRectF((QVariant*)self);
}

QLocale* q_variant_to_locale(void* self) {
    return QVariant_ToLocale((QVariant*)self);
}

QRegularExpression* q_variant_to_regular_expression(void* self) {
    return QVariant_ToRegularExpression((QVariant*)self);
}

QEasingCurve* q_variant_to_easing_curve(void* self) {
    return QVariant_ToEasingCurve((QVariant*)self);
}

QUuid* q_variant_to_uuid(void* self) {
    return QVariant_ToUuid((QVariant*)self);
}

QUrl* q_variant_to_url(void* self) {
    return QVariant_ToUrl((QVariant*)self);
}

QJsonValue* q_variant_to_json_value(void* self) {
    return QVariant_ToJsonValue((QVariant*)self);
}

QJsonObject* q_variant_to_json_object(void* self) {
    return QVariant_ToJsonObject((QVariant*)self);
}

QJsonArray* q_variant_to_json_array(void* self) {
    return QVariant_ToJsonArray((QVariant*)self);
}

QJsonDocument* q_variant_to_json_document(void* self) {
    return QVariant_ToJsonDocument((QVariant*)self);
}

QModelIndex* q_variant_to_model_index(void* self) {
    return QVariant_ToModelIndex((QVariant*)self);
}

QPersistentModelIndex* q_variant_to_persistent_model_index(void* self) {
    return QVariant_ToPersistentModelIndex((QVariant*)self);
}

void q_variant_load(void* self, void* ds) {
    QVariant_Load((QVariant*)self, (QDataStream*)ds);
}

void q_variant_save(void* self, void* ds) {
    QVariant_Save((QVariant*)self, (QDataStream*)ds);
}

int32_t q_variant_type(void* self) {
    return QVariant_Type((QVariant*)self);
}

const char* q_variant_type_to_name(int typeId) {
    return QVariant_TypeToName(typeId);
}

int32_t q_variant_name_to_type(const char* name) {
    return QVariant_NameToType(name);
}

void* q_variant_data(void* self) {
    return QVariant_Data((QVariant*)self);
}

const void* q_variant_const_data(void* self) {
    return QVariant_ConstData((QVariant*)self);
}

const void* q_variant_data2(void* self) {
    return QVariant_Data2((QVariant*)self);
}

void q_variant_set_value(void* self, void* avalue) {
    QVariant_SetValue((QVariant*)self, (QVariant*)avalue);
}

QVariant* q_variant_from_meta_type(void* type) {
    return QVariant_FromMetaType((QMetaType*)type);
}

QPartialOrdering* q_variant_compare(void* lhs, void* rhs) {
    return QVariant_Compare((QVariant*)lhs, (QVariant*)rhs);
}

int32_t q_variant_to_int1(void* self, bool* ok) {
    return QVariant_ToInt1((QVariant*)self, (bool*)ok);
}

uint32_t q_variant_to_u_int1(void* self, bool* ok) {
    return QVariant_ToUInt1((QVariant*)self, (bool*)ok);
}

long long q_variant_to_long_long1(void* self, bool* ok) {
    return QVariant_ToLongLong1((QVariant*)self, (bool*)ok);
}

uint64_t q_variant_to_u_long_long1(void* self, bool* ok) {
    return QVariant_ToULongLong1((QVariant*)self, (bool*)ok);
}

double q_variant_to_double1(void* self, bool* ok) {
    return QVariant_ToDouble1((QVariant*)self, (bool*)ok);
}

float q_variant_to_float1(void* self, bool* ok) {
    return QVariant_ToFloat1((QVariant*)self, (bool*)ok);
}

double q_variant_to_real1(void* self, bool* ok) {
    return QVariant_ToReal1((QVariant*)self, (bool*)ok);
}

QVariant* q_variant_from_meta_type2(void* type, void* copyVal) {
    return QVariant_FromMetaType2((QMetaType*)type, copyVal);
}

void q_variant_delete(void* self) {
    QVariant_Delete((QVariant*)(self));
}

QVariantConstPointer* q_variantconstpointer_new(void* variant) {
    return QVariantConstPointer_new((QVariant*)variant);
}

QVariantConstPointer* q_variantconstpointer_new2(void* param1) {
    return QVariantConstPointer_new2((QVariantConstPointer*)param1);
}

QVariant* q_variantconstpointer_operator_multiply(void* self) {
    return QVariantConstPointer_OperatorMultiply((QVariantConstPointer*)self);
}

const QVariant* q_variantconstpointer_operator_minus_greater(void* self) {
    return QVariantConstPointer_OperatorMinusGreater((QVariantConstPointer*)self);
}

void q_variantconstpointer_operator_assign(void* self, void* param1) {
    QVariantConstPointer_OperatorAssign((QVariantConstPointer*)self, (QVariantConstPointer*)param1);
}

void q_variantconstpointer_delete(void* self) {
    QVariantConstPointer_Delete((QVariantConstPointer*)(self));
}
