#pragma once
#ifndef LIBQMETATYPE_H
#define LIBQMETATYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// q_metatype_new constructs a new QMetaType object.
///
QMetaType* q_metatype_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// q_metatype_new2 constructs a new QMetaType object.
///
/// @param other QMetaType*
///
QMetaType* q_metatype_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// q_metatype_new3 constructs a new QMetaType object and invalidates the source QMetaType object.
///
/// @param other QMetaType*
///
QMetaType* q_metatype_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// q_metatype_new4 constructs a new QMetaType object.
///
/// @param type int
///
QMetaType* q_metatype_new4(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// q_metatype_new5 constructs a new QMetaType object.
///
/// @param param1 QMetaType*
///
QMetaType* q_metatype_new5(const void* param1);

/// q_metatype_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaType*
/// @param other QMetaType*
///
void q_metatype_copy_assign(void* self, void* other);

/// q_metatype_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaType*
/// @param other QMetaType*
///
void q_metatype_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerNormalizedTypedef)
///
/// @param normalizedTypeName const char*
/// @param type QMetaType*
///
void q_metatype_register_normalized_typedef(const char* normalizedTypeName, void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#type)
///
/// @param typeName const char*
///
int32_t q_metatype_type(const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#type)
///
/// @param typeName const char*
///
int32_t q_metatype_type2(const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#typeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type int
///
const char* q_metatype_type_name(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
///
/// @param type int
///
int32_t q_metatype_size_of(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#typeFlags)
///
/// @param type int
///
/// @return flag of enum QMetaType__TypeFlag
///
int32_t q_metatype_type_flags(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#metaObjectForType)
///
/// @param type int
///
const QMetaObject* q_metatype_meta_object_for_type(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// @param type int
///
void* q_metatype_create(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destroy)
///
/// @param type int
/// @param data void*
///
void q_metatype_destroy(int type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// @param type int
/// @param where void*
/// @param copy void*
///
void* q_metatype_construct(int type, void* where, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destruct)
///
/// @param type int
/// @param where void*
///
void q_metatype_destruct(int type, void* where);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
///
/// @param type int
///
bool q_metatype_is_registered(int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isValid)
///
/// @param self const QMetaType*
///
bool q_metatype_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
///
/// @param self const QMetaType*
///
bool q_metatype_is_registered2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerType)
///
/// @param self const QMetaType*
///
void q_metatype_register_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#id)
///
/// @param self const QMetaType*
///
int32_t q_metatype_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
///
/// @param self const QMetaType*
///
intptr_t q_metatype_size_of2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#alignOf)
///
/// @param self const QMetaType*
///
intptr_t q_metatype_align_of(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#flags)
///
/// @param self const QMetaType*
///
/// @return flag of enum QMetaType__TypeFlag
///
int32_t q_metatype_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QMetaType*
///
const QMetaObject* q_metatype_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaType*
///
const char* q_metatype_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// @param self const QMetaType*
///
void* q_metatype_create2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destroy)
///
/// @param self const QMetaType*
/// @param data void*
///
void q_metatype_destroy2(const void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// @param self const QMetaType*
/// @param where void*
///
void* q_metatype_construct2(const void* self, void* where);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destruct)
///
/// @param self const QMetaType*
/// @param data void*
///
void q_metatype_destruct2(const void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#compare)
///
/// @param self const QMetaType*
/// @param lhs void*
/// @param rhs void*
///
QPartialOrdering* q_metatype_compare(const void* self, void* lhs, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#equals)
///
/// @param self const QMetaType*
/// @param lhs void*
/// @param rhs void*
///
bool q_metatype_equals(const void* self, void* lhs, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isDefaultConstructible)
///
/// @param self const QMetaType*
///
bool q_metatype_is_default_constructible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isCopyConstructible)
///
/// @param self const QMetaType*
///
bool q_metatype_is_copy_constructible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isMoveConstructible)
///
/// @param self const QMetaType*
///
bool q_metatype_is_move_constructible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isDestructible)
///
/// @param self const QMetaType*
///
bool q_metatype_is_destructible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isEqualityComparable)
///
/// @param self const QMetaType*
///
bool q_metatype_is_equality_comparable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isOrdered)
///
/// @param self const QMetaType*
///
bool q_metatype_is_ordered(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#save)
///
/// @param self const QMetaType*
/// @param stream QDataStream*
/// @param data void*
///
bool q_metatype_save(const void* self, void* stream, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#load)
///
/// @param self const QMetaType*
/// @param stream QDataStream*
/// @param data void*
///
bool q_metatype_load(const void* self, void* stream, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDataStreamOperators)
///
/// @param self const QMetaType*
///
bool q_metatype_has_registered_data_stream_operators(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#save)
///
/// @param stream QDataStream*
/// @param type int
/// @param data void*
///
bool q_metatype_save2(void* stream, int type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#load)
///
/// @param stream QDataStream*
/// @param type int
/// @param data void*
///
bool q_metatype_load2(void* stream, int type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#underlyingType)
///
/// @param self const QMetaType*
///
QMetaType* q_metatype_underlying_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#fromName)
///
/// @param name const char*
///
QMetaType* q_metatype_from_name(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
///
/// @param self QMetaType*
/// @param dbg QDebug*
/// @param rhs void*
///
bool q_metatype_debug_stream(void* self, void* dbg, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
///
/// @param self const QMetaType*
///
bool q_metatype_has_registered_debug_stream_operator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
///
/// @param dbg QDebug*
/// @param rhs void*
/// @param typeId int
///
bool q_metatype_debug_stream2(void* dbg, void* rhs, int typeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
///
/// @param typeId int
///
bool q_metatype_has_registered_debug_stream_operator2(int typeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#convert)
///
/// @param fromType QMetaType*
/// @param from void*
/// @param toType QMetaType*
/// @param to void*
///
bool q_metatype_convert(void* fromType, void* from, void* toType, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#canConvert)
///
/// @param fromType QMetaType*
/// @param toType QMetaType*
///
bool q_metatype_can_convert(void* fromType, void* toType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#view)
///
/// @param fromType QMetaType*
/// @param from void*
/// @param toType QMetaType*
/// @param to void*
///
bool q_metatype_view(void* fromType, void* from, void* toType, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#canView)
///
/// @param fromType QMetaType*
/// @param toType QMetaType*
///
bool q_metatype_can_view(void* fromType, void* toType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#convert)
///
/// @param from void*
/// @param fromTypeId int
/// @param to void*
/// @param toTypeId int
///
bool q_metatype_convert2(void* from, int fromTypeId, void* to, int toTypeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#compare)
///
/// @param lhs void*
/// @param rhs void*
/// @param typeId int
/// @param result int*
///
bool q_metatype_compare2(void* lhs, void* rhs, int typeId, int* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#equals)
///
/// @param lhs void*
/// @param rhs void*
/// @param typeId int
/// @param result int*
///
bool q_metatype_equals2(void* lhs, void* rhs, int typeId, int* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredConverterFunction)
///
/// @param fromType QMetaType*
/// @param toType QMetaType*
///
bool q_metatype_has_registered_converter_function(void* fromType, void* toType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredMutableViewFunction)
///
/// @param fromType QMetaType*
/// @param toType QMetaType*
///
bool q_metatype_has_registered_mutable_view_function(void* fromType, void* toType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerConverterFunction)
///
/// @param f bool func(void* param1, void* param2)
/// @param from QMetaType*
/// @param to QMetaType*
///
bool q_metatype_register_converter_function(bool (*f)(void* funcparam1, void* funcparam2), void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterConverterFunction)
///
/// @param from QMetaType*
/// @param to QMetaType*
///
void q_metatype_unregister_converter_function(void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerMutableViewFunction)
///
/// @param f bool func(void* param1, void* param2)
/// @param from QMetaType*
/// @param to QMetaType*
///
bool q_metatype_register_mutable_view_function(bool (*f)(void* funcparam1, void* funcparam2), void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterMutableViewFunction)
///
/// @param from QMetaType*
/// @param to QMetaType*
///
void q_metatype_unregister_mutable_view_function(void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterMetaType)
///
/// @param type QMetaType*
///
void q_metatype_unregister_meta_type(void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// @param type int
/// @param copy void*
///
void* q_metatype_create22(int type, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#id)
///
/// @param self const QMetaType*
/// @param param1 int
///
int32_t q_metatype_id1(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// @param self const QMetaType*
/// @param copy void*
///
void* q_metatype_create1(const void* self, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// @param self const QMetaType*
/// @param where void*
/// @param copy void*
///
void* q_metatype_construct22(const void* self, void* where, void* copy);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#dtor.QMetaType)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaType*
///
void q_metatype_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#qRegisterMetaType)
///
/// @param meta QMetaType*
///
int32_t q_qmetatype_q_register_meta_type(void* meta);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#qHash)
///
/// @param type QMetaType*
/// @param seed size_t
///
size_t q_qmetatype_q_hash(void* type, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#public-types)

typedef enum {
    QCborSimpleType_dummy = 0
} QMETATYPE_QCborSimpleType__;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#public-types)

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
    QMETATYPE_TYPE_FLOAT16 = 63,
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
    QMETATYPE_TYPE_LASTCORETYPE = 63,
    QMETATYPE_TYPE_FIRSTGUITYPE = 4096,
    QMETATYPE_TYPE_LASTGUITYPE = 4119,
    QMETATYPE_TYPE_FIRSTWIDGETSTYPE = 8192,
    QMETATYPE_TYPE_LASTWIDGETSTYPE = 8192,
    QMETATYPE_TYPE_HIGHESTINTERNALID = 8192,
    QMETATYPE_TYPE_QREAL = 6,
    QMETATYPE_TYPE_UNKNOWNTYPE = 0,
    QMETATYPE_TYPE_USER = 65536
} QMetaType__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#public-types)

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
    QMETATYPE_TYPEFLAG_ISCONST = 8192,
    QMETATYPE_TYPEFLAG_NEEDSCOPYCONSTRUCTION = 16384,
    QMETATYPE_TYPEFLAG_NEEDSMOVECONSTRUCTION = 32768
} QMetaType__TypeFlag;

#endif
