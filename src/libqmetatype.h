#pragma once
#ifndef SRCQT6C_LIBQMETATYPE_H
#define SRCQT6C_LIBQMETATYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqdatastream.h"
#include "libqdebug.h"
#include "libqmetaobject.h"
#include "libqcompare.h"

QMetaType* q_metatype_new(void* other);
QMetaType* q_metatype_new2(void* other);
QMetaType* q_metatype_new3(int typeVal);
QMetaType* q_metatype_new4();
QMetaType* q_metatype_new5(void* param1);
void q_metatype_copy_assign(void* self, void* other);
void q_metatype_move_assign(void* self, void* other);
void q_metatype_register_normalized_typedef(const char* normalizedTypeName, void* typeVal);
int32_t q_metatype_type(const char* typeName);
int32_t q_metatype_type_with_type_name(const char* typeName);
const char* q_metatype_type_name(int typeVal);
int32_t q_metatype_size_of(int typeVal);
int64_t q_metatype_type_flags(int typeVal);
QMetaObject* q_metatype_meta_object_for_type(int typeVal);
void* q_metatype_create(int typeVal);
void q_metatype_destroy(int typeVal, void* data);
void* q_metatype_construct(int typeVal, void* where, void* copyVal);
void q_metatype_destruct(int typeVal, void* where);
bool q_metatype_is_registered(int typeVal);
bool q_metatype_is_valid(void* self);
bool q_metatype_is_registered2(void* self);
int32_t q_metatype_id(void* self);
int64_t q_metatype_size_of2(void* self);
int64_t q_metatype_align_of(void* self);
int64_t q_metatype_flags(void* self);
QMetaObject* q_metatype_meta_object(void* self);
const char* q_metatype_name(void* self);
void* q_metatype_create2(void* self);
void q_metatype_destroy_with_data(void* self, void* data);
void* q_metatype_construct_with_where(void* self, void* where);
void q_metatype_destruct_with_data(void* self, void* data);
QPartialOrdering* q_metatype_compare(void* self, void* lhs, void* rhs);
bool q_metatype_equals(void* self, void* lhs, void* rhs);
bool q_metatype_is_equality_comparable(void* self);
bool q_metatype_is_ordered(void* self);
bool q_metatype_save(void* self, void* stream, void* data);
bool q_metatype_load(void* self, void* stream, void* data);
bool q_metatype_has_registered_data_stream_operators(void* self);
bool q_metatype_save2(void* stream, int typeVal, void* data);
bool q_metatype_load2(void* stream, int typeVal, void* data);
QMetaType* q_metatype_from_name(const char* name);
bool q_metatype_debug_stream(void* self, void* dbg, void* rhs);
bool q_metatype_has_registered_debug_stream_operator(void* self);
bool q_metatype_debug_stream2(void* dbg, void* rhs, int typeId);
bool q_metatype_has_registered_debug_stream_operator_with_type_id(int typeId);
bool q_metatype_convert(void* fromType, void* from, void* toType, void* to);
bool q_metatype_can_convert(void* fromType, void* toType);
bool q_metatype_view(void* fromType, void* from, void* toType, void* to);
bool q_metatype_can_view(void* fromType, void* toType);
bool q_metatype_convert2(void* from, int fromTypeId, void* to, int toTypeId);
bool q_metatype_compare2(void* lhs, void* rhs, int typeId, int* result);
bool q_metatype_equals2(void* lhs, void* rhs, int typeId, int* result);
bool q_metatype_has_registered_converter_function(void* fromType, void* toType);
bool q_metatype_has_registered_mutable_view_function(void* fromType, void* toType);
void q_metatype_unregister_converter_function(void* from, void* to);
void q_metatype_unregister_mutable_view_function(void* from, void* to);
void q_metatype_unregister_meta_type(void* typeVal);
void* q_metatype_create22(int typeVal, void* copyVal);
int32_t q_metatype_id1(void* self, int param1);
void* q_metatype_create1(void* self, void* copyVal);
void* q_metatype_construct2(void* self, void* where, void* copyVal);
void q_metatype_delete(void* self);

/// https://doc.qt.io/qt-6/qmetatype.html#types

typedef enum {
    QCborSimpleType_dummy = 0
} QMETATYPE_QCborSimpleType__;

typedef enum {
    QMETATYPE_TYPE_BOOL = 1,
    QMETATYPE_TYPE_INT = 2,
    QMETATYPE_TYPE_UINT = 3,
    QMETATYPE_TYPE_LONGLONG = 4,
    QMETATYPE_TYPE_ULONGLONG = 5,
    QMETATYPE_TYPE_DOUBLE = 6,
    QMETATYPE_TYPE_LONG = 32,
    QMETATYPE_TYPE_SHORT = 33,
    QMETATYPE_TYPE_CHAR = 34,
    QMETATYPE_TYPE_CHAR16 = 56,
    QMETATYPE_TYPE_CHAR32 = 57,
    QMETATYPE_TYPE_ULONG = 35,
    QMETATYPE_TYPE_USHORT = 36,
    QMETATYPE_TYPE_UCHAR = 37,
    QMETATYPE_TYPE_FLOAT = 38,
    QMETATYPE_TYPE_SCHAR = 40,
    QMETATYPE_TYPE_NULLPTR = 51,
    QMETATYPE_TYPE_QCBORSIMPLETYPE = 52,
    QMETATYPE_TYPE_VOID = 43,
    QMETATYPE_TYPE_VOIDSTAR = 31,
    QMETATYPE_TYPE_QCHAR = 7,
    QMETATYPE_TYPE_QSTRING = 10,
    QMETATYPE_TYPE_QBYTEARRAY = 12,
    QMETATYPE_TYPE_QBITARRAY = 13,
    QMETATYPE_TYPE_QDATE = 14,
    QMETATYPE_TYPE_QTIME = 15,
    QMETATYPE_TYPE_QDATETIME = 16,
    QMETATYPE_TYPE_QURL = 17,
    QMETATYPE_TYPE_QLOCALE = 18,
    QMETATYPE_TYPE_QRECT = 19,
    QMETATYPE_TYPE_QRECTF = 20,
    QMETATYPE_TYPE_QSIZE = 21,
    QMETATYPE_TYPE_QSIZEF = 22,
    QMETATYPE_TYPE_QLINE = 23,
    QMETATYPE_TYPE_QLINEF = 24,
    QMETATYPE_TYPE_QPOINT = 25,
    QMETATYPE_TYPE_QPOINTF = 26,
    QMETATYPE_TYPE_QEASINGCURVE = 29,
    QMETATYPE_TYPE_QUUID = 30,
    QMETATYPE_TYPE_QVARIANT = 41,
    QMETATYPE_TYPE_QREGULAREXPRESSION = 44,
    QMETATYPE_TYPE_QJSONVALUE = 45,
    QMETATYPE_TYPE_QJSONOBJECT = 46,
    QMETATYPE_TYPE_QJSONARRAY = 47,
    QMETATYPE_TYPE_QJSONDOCUMENT = 48,
    QMETATYPE_TYPE_QCBORVALUE = 53,
    QMETATYPE_TYPE_QCBORARRAY = 54,
    QMETATYPE_TYPE_QCBORMAP = 55,
    QMETATYPE_TYPE_QMODELINDEX = 42,
    QMETATYPE_TYPE_QPERSISTENTMODELINDEX = 50,
    QMETATYPE_TYPE_QOBJECTSTAR = 39,
    QMETATYPE_TYPE_QVARIANTMAP = 8,
    QMETATYPE_TYPE_QVARIANTLIST = 9,
    QMETATYPE_TYPE_QVARIANTHASH = 28,
    QMETATYPE_TYPE_QVARIANTPAIR = 58,
    QMETATYPE_TYPE_QBYTEARRAYLIST = 49,
    QMETATYPE_TYPE_QSTRINGLIST = 11,
    QMETATYPE_TYPE_QFONT = 4096,
    QMETATYPE_TYPE_QPIXMAP = 4097,
    QMETATYPE_TYPE_QBRUSH = 4098,
    QMETATYPE_TYPE_QCOLOR = 4099,
    QMETATYPE_TYPE_QPALETTE = 4100,
    QMETATYPE_TYPE_QICON = 4101,
    QMETATYPE_TYPE_QIMAGE = 4102,
    QMETATYPE_TYPE_QPOLYGON = 4103,
    QMETATYPE_TYPE_QREGION = 4104,
    QMETATYPE_TYPE_QBITMAP = 4105,
    QMETATYPE_TYPE_QCURSOR = 4106,
    QMETATYPE_TYPE_QKEYSEQUENCE = 4107,
    QMETATYPE_TYPE_QPEN = 4108,
    QMETATYPE_TYPE_QTEXTLENGTH = 4109,
    QMETATYPE_TYPE_QTEXTFORMAT = 4110,
    QMETATYPE_TYPE_QTRANSFORM = 4112,
    QMETATYPE_TYPE_QMATRIX4X4 = 4113,
    QMETATYPE_TYPE_QVECTOR2D = 4114,
    QMETATYPE_TYPE_QVECTOR3D = 4115,
    QMETATYPE_TYPE_QVECTOR4D = 4116,
    QMETATYPE_TYPE_QQUATERNION = 4117,
    QMETATYPE_TYPE_QPOLYGONF = 4118,
    QMETATYPE_TYPE_QCOLORSPACE = 4119,
    QMETATYPE_TYPE_QSIZEPOLICY = 8192,
    QMETATYPE_TYPE_FIRSTCORETYPE = 1,
    QMETATYPE_TYPE_LASTCORETYPE = 58,
    QMETATYPE_TYPE_FIRSTGUITYPE = 4096,
    QMETATYPE_TYPE_LASTGUITYPE = 4119,
    QMETATYPE_TYPE_FIRSTWIDGETSTYPE = 8192,
    QMETATYPE_TYPE_LASTWIDGETSTYPE = 8192,
    QMETATYPE_TYPE_HIGHESTINTERNALID = 8192,
    QMETATYPE_TYPE_QREAL = 6,
    QMETATYPE_TYPE_UNKNOWNTYPE = 0,
    QMETATYPE_TYPE_USER = 65536
} QMetaType__Type;

typedef enum {
    QMETATYPE_TYPEFLAG_NEEDSCONSTRUCTION = 1,
    QMETATYPE_TYPEFLAG_NEEDSDESTRUCTION = 2,
    QMETATYPE_TYPEFLAG_RELOCATABLETYPE = 4,
    QMETATYPE_TYPEFLAG_MOVABLETYPE = 4,
    QMETATYPE_TYPEFLAG_POINTERTOQOBJECT = 8,
    QMETATYPE_TYPEFLAG_ISENUMERATION = 16,
    QMETATYPE_TYPEFLAG_SHAREDPOINTERTOQOBJECT = 32,
    QMETATYPE_TYPEFLAG_WEAKPOINTERTOQOBJECT = 64,
    QMETATYPE_TYPEFLAG_TRACKINGPOINTERTOQOBJECT = 128,
    QMETATYPE_TYPEFLAG_ISUNSIGNEDENUMERATION = 256,
    QMETATYPE_TYPEFLAG_ISGADGET = 512,
    QMETATYPE_TYPEFLAG_POINTERTOGADGET = 1024,
    QMETATYPE_TYPEFLAG_ISPOINTER = 2048,
    QMETATYPE_TYPEFLAG_ISQMLLIST = 4096,
    QMETATYPE_TYPEFLAG_ISCONST = 8192
} QMetaType__TypeFlag;

#endif
