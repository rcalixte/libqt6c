#pragma once
#ifndef SRCQT6C_LIBQPAGESIZE_H
#define SRCQT6C_LIBQPAGESIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqrect.h"
#include "libqsize.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpagesize.html

/// q_pagesize_new constructs a new QPageSize object.
///
///
QPageSize* q_pagesize_new();

/// q_pagesize_new2 constructs a new QPageSize object.
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QPageSize* q_pagesize_new2(int64_t pageSizeId);

/// q_pagesize_new3 constructs a new QPageSize object.
///
/// ``` QSize* pointSize ```
QPageSize* q_pagesize_new3(void* pointSize);

/// q_pagesize_new4 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units ```
QPageSize* q_pagesize_new4(void* size, int64_t units);

/// q_pagesize_new5 constructs a new QPageSize object.
///
/// ``` QPageSize* other ```
QPageSize* q_pagesize_new5(void* other);

/// q_pagesize_new6 constructs a new QPageSize object.
///
/// ``` QSize* pointSize, const char* name ```
QPageSize* q_pagesize_new6(void* pointSize, const char* name);

/// q_pagesize_new7 constructs a new QPageSize object.
///
/// ``` QSize* pointSize, const char* name, enum QPageSize__SizeMatchPolicy matchPolicy ```
QPageSize* q_pagesize_new7(void* pointSize, const char* name, int64_t matchPolicy);

/// q_pagesize_new8 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units, const char* name ```
QPageSize* q_pagesize_new8(void* size, int64_t units, const char* name);

/// q_pagesize_new9 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units, const char* name, enum QPageSize__SizeMatchPolicy matchPolicy ```
QPageSize* q_pagesize_new9(void* size, int64_t units, const char* name, int64_t matchPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#operator=)
///
/// ``` QPageSize* self, QPageSize* other ```
void q_pagesize_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#swap)
///
/// ``` QPageSize* self, QPageSize* other ```
void q_pagesize_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isEquivalentTo)
///
/// ``` QPageSize* self, QPageSize* other ```
bool q_pagesize_is_equivalent_to(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isValid)
///
/// ``` QPageSize* self ```
bool q_pagesize_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// ``` QPageSize* self ```
const char* q_pagesize_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// ``` QPageSize* self ```
const char* q_pagesize_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QPageSize* self ```
int64_t q_pagesize_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// ``` QPageSize* self ```
int32_t q_pagesize_windows_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// ``` QPageSize* self ```
QSizeF* q_pagesize_definition_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// ``` QPageSize* self ```
int64_t q_pagesize_definition_units(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// ``` QPageSize* self, enum QPageSize__Unit units ```
QSizeF* q_pagesize_size(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// ``` QPageSize* self ```
QSize* q_pagesize_size_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// ``` QPageSize* self, int resolution ```
QSize* q_pagesize_size_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rect)
///
/// ``` QPageSize* self, enum QPageSize__Unit units ```
QRectF* q_pagesize_rect(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPoints)
///
/// ``` QPageSize* self ```
QRect* q_pagesize_rect_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPixels)
///
/// ``` QPageSize* self, int resolution ```
QRect* q_pagesize_rect_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
const char* q_pagesize_key_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
const char* q_pagesize_name_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSize* pointSize ```
int64_t q_pagesize_id_with_point_size(void* pointSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSizeF* size, enum QPageSize__Unit units ```
int64_t q_pagesize_id2(void* size, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` int windowsId ```
int64_t q_pagesize_id_with_windows_id(int windowsId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
int32_t q_pagesize_windows_id_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QSizeF* q_pagesize_definition_size_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
int64_t q_pagesize_definition_units_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// ``` enum QPageSize__PageSizeId pageSizeId, enum QPageSize__Unit units ```
QSizeF* q_pagesize_size2(int64_t pageSizeId, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QSize* q_pagesize_size_points_with_page_size_id(int64_t pageSizeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// ``` enum QPageSize__PageSizeId pageSizeId, int resolution ```
QSize* q_pagesize_size_pixels2(int64_t pageSizeId, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSize* pointSize, enum QPageSize__SizeMatchPolicy matchPolicy ```
int64_t q_pagesize_id22(void* pointSize, int64_t matchPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSizeF* size, enum QPageSize__Unit units, enum QPageSize__SizeMatchPolicy matchPolicy ```
int64_t q_pagesize_id3(void* size, int64_t units, int64_t matchPolicy);

/// Delete this object from C++ memory.
///
/// ``` QPageSize* self ```
void q_pagesize_delete(void* self);

/// https://doc.qt.io/qt-6/qpagesize.html#types

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

typedef enum {
    QPAGESIZE_UNIT_MILLIMETER = 0,
    QPAGESIZE_UNIT_POINT = 1,
    QPAGESIZE_UNIT_INCH = 2,
    QPAGESIZE_UNIT_PICA = 3,
    QPAGESIZE_UNIT_DIDOT = 4,
    QPAGESIZE_UNIT_CICERO = 5
} QPageSize__Unit;

typedef enum {
    QPAGESIZE_SIZEMATCHPOLICY_FUZZYMATCH = 0,
    QPAGESIZE_SIZEMATCHPOLICY_FUZZYORIENTATIONMATCH = 1,
    QPAGESIZE_SIZEMATCHPOLICY_EXACTMATCH = 2
} QPageSize__SizeMatchPolicy;

#endif
