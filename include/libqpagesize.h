#pragma once
#ifndef SRC_QT6C_LIBQPAGESIZE_H
#define SRC_QT6C_LIBQPAGESIZE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new constructs a new QPageSize object.
///
QPageSize* q_pagesize_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new2 constructs a new QPageSize object.
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
QPageSize* q_pagesize_new2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new3 constructs a new QPageSize object.
///
/// @param pointSize QSize*
///
QPageSize* q_pagesize_new3(void* pointSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new4 constructs a new QPageSize object.
///
/// @param size QSizeF*
/// @param units enum QPageSize__Unit
///
QPageSize* q_pagesize_new4(void* size, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new5 constructs a new QPageSize object.
///
/// @param other QPageSize*
///
QPageSize* q_pagesize_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new6 constructs a new QPageSize object.
///
/// @param pointSize QSize*
/// @param name const char*
///
QPageSize* q_pagesize_new6(void* pointSize, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new7 constructs a new QPageSize object.
///
/// @param pointSize QSize*
/// @param name const char*
/// @param matchPolicy enum QPageSize__SizeMatchPolicy
///
QPageSize* q_pagesize_new7(void* pointSize, const char* name, int32_t matchPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new8 constructs a new QPageSize object.
///
/// @param size QSizeF*
/// @param units enum QPageSize__Unit
/// @param name const char*
///
QPageSize* q_pagesize_new8(void* size, int32_t units, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)

/// q_pagesize_new9 constructs a new QPageSize object.
///
/// @param size QSizeF*
/// @param units enum QPageSize__Unit
/// @param name const char*
/// @param matchPolicy enum QPageSize__SizeMatchPolicy
///
QPageSize* q_pagesize_new9(void* size, int32_t units, const char* name, int32_t matchPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#operator-eq)
///
/// @param self QPageSize*
/// @param other QPageSize*
///
void q_pagesize_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#swap)
///
/// @param self QPageSize*
/// @param other QPageSize*
///
void q_pagesize_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#isEquivalentTo)
///
/// @param self QPageSize*
/// @param other QPageSize*
///
bool q_pagesize_is_equivalent_to(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#isValid)
///
/// @param self QPageSize*
///
bool q_pagesize_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPageSize*
///
const char* q_pagesize_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPageSize*
///
const char* q_pagesize_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param self QPageSize*
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// @param self QPageSize*
///
int32_t q_pagesize_windows_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// @param self QPageSize*
///
QSizeF* q_pagesize_definition_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// @param self QPageSize*
///
/// @return enum QPageSize__Unit
///
int32_t q_pagesize_definition_units(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// @param self QPageSize*
/// @param units enum QPageSize__Unit
///
QSizeF* q_pagesize_size(void* self, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// @param self QPageSize*
///
QSize* q_pagesize_size_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// @param self QPageSize*
/// @param resolution int
///
QSize* q_pagesize_size_pixels(void* self, int resolution);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rect)
///
/// @param self QPageSize*
/// @param units enum QPageSize__Unit
///
QRectF* q_pagesize_rect(void* self, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rectPoints)
///
/// @param self QPageSize*
///
QRect* q_pagesize_rect_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rectPixels)
///
/// @param self QPageSize*
/// @param resolution int
///
QRect* q_pagesize_rect_pixels(void* self, int resolution);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
const char* q_pagesize_key2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
const char* q_pagesize_name2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param pointSize QSize*
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id2(void* pointSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param size QSizeF*
/// @param units enum QPageSize__Unit
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id3(void* size, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param windowsId int
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id4(int windowsId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
int32_t q_pagesize_windows_id2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
QSizeF* q_pagesize_definition_size2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
/// @return enum QPageSize__Unit
///
int32_t q_pagesize_definition_units2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// @param pageSizeId enum QPageSize__PageSizeId
/// @param units enum QPageSize__Unit
///
QSizeF* q_pagesize_size2(int32_t pageSizeId, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// @param pageSizeId enum QPageSize__PageSizeId
///
QSize* q_pagesize_size_points2(int32_t pageSizeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// @param pageSizeId enum QPageSize__PageSizeId
/// @param resolution int
///
QSize* q_pagesize_size_pixels2(int32_t pageSizeId, int resolution);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param pointSize QSize*
/// @param matchPolicy enum QPageSize__SizeMatchPolicy
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id22(void* pointSize, int32_t matchPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// @param size QSizeF*
/// @param units enum QPageSize__Unit
/// @param matchPolicy enum QPageSize__SizeMatchPolicy
///
/// @return enum QPageSize__PageSizeId
///
int32_t q_pagesize_id32(void* size, int32_t units, int32_t matchPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#dtor.QPageSize)
///
/// Delete this object from C++ memory.
///
/// @param self QPageSize*
///
void q_pagesize_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#public-types)

typedef enum {
    QPAGESIZE_PAGESIZEID_LETTER = 0,
    QPAGESIZE_PAGESIZEID_LEGAL = 1,
    QPAGESIZE_PAGESIZEID_EXECUTIVE = 2,
    QPAGESIZE_PAGESIZEID_A0 = 3,
    QPAGESIZE_PAGESIZEID_A1 = 4,
    QPAGESIZE_PAGESIZEID_A2 = 5,
    QPAGESIZE_PAGESIZEID_A3 = 6,
    QPAGESIZE_PAGESIZEID_A4 = 7,
    QPAGESIZE_PAGESIZEID_A5 = 8,
    QPAGESIZE_PAGESIZEID_A6 = 9,
    QPAGESIZE_PAGESIZEID_A7 = 10,
    QPAGESIZE_PAGESIZEID_A8 = 11,
    QPAGESIZE_PAGESIZEID_A9 = 12,
    QPAGESIZE_PAGESIZEID_A10 = 13,
    QPAGESIZE_PAGESIZEID_B0 = 14,
    QPAGESIZE_PAGESIZEID_B1 = 15,
    QPAGESIZE_PAGESIZEID_B2 = 16,
    QPAGESIZE_PAGESIZEID_B3 = 17,
    QPAGESIZE_PAGESIZEID_B4 = 18,
    QPAGESIZE_PAGESIZEID_B5 = 19,
    QPAGESIZE_PAGESIZEID_B6 = 20,
    QPAGESIZE_PAGESIZEID_B7 = 21,
    QPAGESIZE_PAGESIZEID_B8 = 22,
    QPAGESIZE_PAGESIZEID_B9 = 23,
    QPAGESIZE_PAGESIZEID_B10 = 24,
    QPAGESIZE_PAGESIZEID_C5E = 25,
    QPAGESIZE_PAGESIZEID_COMM10E = 26,
    QPAGESIZE_PAGESIZEID_DLE = 27,
    QPAGESIZE_PAGESIZEID_FOLIO = 28,
    QPAGESIZE_PAGESIZEID_LEDGER = 29,
    QPAGESIZE_PAGESIZEID_TABLOID = 30,
    QPAGESIZE_PAGESIZEID_CUSTOM = 31,
    QPAGESIZE_PAGESIZEID_A3EXTRA = 32,
    QPAGESIZE_PAGESIZEID_A4EXTRA = 33,
    QPAGESIZE_PAGESIZEID_A4PLUS = 34,
    QPAGESIZE_PAGESIZEID_A4SMALL = 35,
    QPAGESIZE_PAGESIZEID_A5EXTRA = 36,
    QPAGESIZE_PAGESIZEID_B5EXTRA = 37,
    QPAGESIZE_PAGESIZEID_JISB0 = 38,
    QPAGESIZE_PAGESIZEID_JISB1 = 39,
    QPAGESIZE_PAGESIZEID_JISB2 = 40,
    QPAGESIZE_PAGESIZEID_JISB3 = 41,
    QPAGESIZE_PAGESIZEID_JISB4 = 42,
    QPAGESIZE_PAGESIZEID_JISB5 = 43,
    QPAGESIZE_PAGESIZEID_JISB6 = 44,
    QPAGESIZE_PAGESIZEID_JISB7 = 45,
    QPAGESIZE_PAGESIZEID_JISB8 = 46,
    QPAGESIZE_PAGESIZEID_JISB9 = 47,
    QPAGESIZE_PAGESIZEID_JISB10 = 48,
    QPAGESIZE_PAGESIZEID_ANSIC = 49,
    QPAGESIZE_PAGESIZEID_ANSID = 50,
    QPAGESIZE_PAGESIZEID_ANSIE = 51,
    QPAGESIZE_PAGESIZEID_LEGALEXTRA = 52,
    QPAGESIZE_PAGESIZEID_LETTEREXTRA = 53,
    QPAGESIZE_PAGESIZEID_LETTERPLUS = 54,
    QPAGESIZE_PAGESIZEID_LETTERSMALL = 55,
    QPAGESIZE_PAGESIZEID_TABLOIDEXTRA = 56,
    QPAGESIZE_PAGESIZEID_ARCHA = 57,
    QPAGESIZE_PAGESIZEID_ARCHB = 58,
    QPAGESIZE_PAGESIZEID_ARCHC = 59,
    QPAGESIZE_PAGESIZEID_ARCHD = 60,
    QPAGESIZE_PAGESIZEID_ARCHE = 61,
    QPAGESIZE_PAGESIZEID_IMPERIAL7X9 = 62,
    QPAGESIZE_PAGESIZEID_IMPERIAL8X10 = 63,
    QPAGESIZE_PAGESIZEID_IMPERIAL9X11 = 64,
    QPAGESIZE_PAGESIZEID_IMPERIAL9X12 = 65,
    QPAGESIZE_PAGESIZEID_IMPERIAL10X11 = 66,
    QPAGESIZE_PAGESIZEID_IMPERIAL10X13 = 67,
    QPAGESIZE_PAGESIZEID_IMPERIAL10X14 = 68,
    QPAGESIZE_PAGESIZEID_IMPERIAL12X11 = 69,
    QPAGESIZE_PAGESIZEID_IMPERIAL15X11 = 70,
    QPAGESIZE_PAGESIZEID_EXECUTIVESTANDARD = 71,
    QPAGESIZE_PAGESIZEID_NOTE = 72,
    QPAGESIZE_PAGESIZEID_QUARTO = 73,
    QPAGESIZE_PAGESIZEID_STATEMENT = 74,
    QPAGESIZE_PAGESIZEID_SUPERA = 75,
    QPAGESIZE_PAGESIZEID_SUPERB = 76,
    QPAGESIZE_PAGESIZEID_POSTCARD = 77,
    QPAGESIZE_PAGESIZEID_DOUBLEPOSTCARD = 78,
    QPAGESIZE_PAGESIZEID_PRC16K = 79,
    QPAGESIZE_PAGESIZEID_PRC32K = 80,
    QPAGESIZE_PAGESIZEID_PRC32KBIG = 81,
    QPAGESIZE_PAGESIZEID_FANFOLDUS = 82,
    QPAGESIZE_PAGESIZEID_FANFOLDGERMAN = 83,
    QPAGESIZE_PAGESIZEID_FANFOLDGERMANLEGAL = 84,
    QPAGESIZE_PAGESIZEID_ENVELOPEB4 = 85,
    QPAGESIZE_PAGESIZEID_ENVELOPEB5 = 86,
    QPAGESIZE_PAGESIZEID_ENVELOPEB6 = 87,
    QPAGESIZE_PAGESIZEID_ENVELOPEC0 = 88,
    QPAGESIZE_PAGESIZEID_ENVELOPEC1 = 89,
    QPAGESIZE_PAGESIZEID_ENVELOPEC2 = 90,
    QPAGESIZE_PAGESIZEID_ENVELOPEC3 = 91,
    QPAGESIZE_PAGESIZEID_ENVELOPEC4 = 92,
    QPAGESIZE_PAGESIZEID_ENVELOPEC6 = 93,
    QPAGESIZE_PAGESIZEID_ENVELOPEC65 = 94,
    QPAGESIZE_PAGESIZEID_ENVELOPEC7 = 95,
    QPAGESIZE_PAGESIZEID_ENVELOPE9 = 96,
    QPAGESIZE_PAGESIZEID_ENVELOPE11 = 97,
    QPAGESIZE_PAGESIZEID_ENVELOPE12 = 98,
    QPAGESIZE_PAGESIZEID_ENVELOPE14 = 99,
    QPAGESIZE_PAGESIZEID_ENVELOPEMONARCH = 100,
    QPAGESIZE_PAGESIZEID_ENVELOPEPERSONAL = 101,
    QPAGESIZE_PAGESIZEID_ENVELOPECHOU3 = 102,
    QPAGESIZE_PAGESIZEID_ENVELOPECHOU4 = 103,
    QPAGESIZE_PAGESIZEID_ENVELOPEINVITE = 104,
    QPAGESIZE_PAGESIZEID_ENVELOPEITALIAN = 105,
    QPAGESIZE_PAGESIZEID_ENVELOPEKAKU2 = 106,
    QPAGESIZE_PAGESIZEID_ENVELOPEKAKU3 = 107,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC1 = 108,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC2 = 109,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC3 = 110,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC4 = 111,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC5 = 112,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC6 = 113,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC7 = 114,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC8 = 115,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC9 = 116,
    QPAGESIZE_PAGESIZEID_ENVELOPEPRC10 = 117,
    QPAGESIZE_PAGESIZEID_ENVELOPEYOU4 = 118,
    QPAGESIZE_PAGESIZEID_LASTPAGESIZE = 118,
    QPAGESIZE_PAGESIZEID_ANSIA = 0,
    QPAGESIZE_PAGESIZEID_ANSIB = 29,
    QPAGESIZE_PAGESIZEID_ENVELOPEC5 = 25,
    QPAGESIZE_PAGESIZEID_ENVELOPEDL = 27,
    QPAGESIZE_PAGESIZEID_ENVELOPE10 = 26
} QPageSize__PageSizeId;

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#public-types)

typedef enum {
    QPAGESIZE_UNIT_MILLIMETER = 0,
    QPAGESIZE_UNIT_POINT = 1,
    QPAGESIZE_UNIT_INCH = 2,
    QPAGESIZE_UNIT_PICA = 3,
    QPAGESIZE_UNIT_DIDOT = 4,
    QPAGESIZE_UNIT_CICERO = 5
} QPageSize__Unit;

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#public-types)

typedef enum {
    QPAGESIZE_SIZEMATCHPOLICY_FUZZYMATCH = 0,
    QPAGESIZE_SIZEMATCHPOLICY_FUZZYORIENTATIONMATCH = 1,
    QPAGESIZE_SIZEMATCHPOLICY_EXACTMATCH = 2
} QPageSize__SizeMatchPolicy;

#endif
