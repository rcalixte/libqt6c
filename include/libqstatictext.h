#pragma once
#ifndef SRC_QT6C_LIBQSTATICTEXT_H
#define SRC_QT6C_LIBQSTATICTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)

/// q_statictext_new constructs a new QStaticText object.
///
QStaticText* q_statictext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)

/// q_statictext_new2 constructs a new QStaticText object.
///
/// @param text const char*
///
QStaticText* q_statictext_new2(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)

/// q_statictext_new3 constructs a new QStaticText object.
///
/// @param other QStaticText*
///
QStaticText* q_statictext_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq)
///
/// @param self QStaticText*
/// @param param1 QStaticText*
///
void q_statictext_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#swap)
///
/// @param self QStaticText*
/// @param other QStaticText*
///
void q_statictext_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setText)
///
/// @param self QStaticText*
/// @param text const char*
///
void q_statictext_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStaticText*
///
const char* q_statictext_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
///
/// @param self QStaticText*
/// @param textFormat enum Qt__TextFormat
///
void q_statictext_set_text_format(void* self, int32_t textFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textFormat)
///
/// @param self QStaticText*
///
/// @return enum Qt__TextFormat
///
int32_t q_statictext_text_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
///
/// @param self QStaticText*
/// @param textWidth double
///
void q_statictext_set_text_width(void* self, double textWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
///
/// @param self QStaticText*
///
double q_statictext_text_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
///
/// @param self QStaticText*
/// @param textOption QTextOption*
///
void q_statictext_set_text_option(void* self, void* textOption);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textOption)
///
/// @param self QStaticText*
///
QTextOption* q_statictext_text_option(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#size)
///
/// @param self QStaticText*
///
QSizeF* q_statictext_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// @param self QStaticText*
///
void q_statictext_prepare(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
///
/// @param self QStaticText*
/// @param performanceHint enum QStaticText__PerformanceHint
///
void q_statictext_set_performance_hint(void* self, int32_t performanceHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#performanceHint)
///
/// @param self QStaticText*
///
/// @return enum QStaticText__PerformanceHint
///
int32_t q_statictext_performance_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq-eq)
///
/// @param self QStaticText*
/// @param param1 QStaticText*
///
bool q_statictext_operator_equal(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-not-eq)
///
/// @param self QStaticText*
/// @param param1 QStaticText*
///
bool q_statictext_operator_not_equal(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// @param self QStaticText*
/// @param matrix QTransform*
///
void q_statictext_prepare1(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// @param self QStaticText*
/// @param matrix QTransform*
/// @param font QFont*
///
void q_statictext_prepare2(void* self, void* matrix, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#dtor.QStaticText)
///
/// Delete this object from C++ memory.
///
/// @param self QStaticText*
///
void q_statictext_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#public-types)

typedef enum {
    QSTATICTEXT_PERFORMANCEHINT_MODERATECACHING = 0,
    QSTATICTEXT_PERFORMANCEHINT_AGGRESSIVECACHING = 1
} QStaticText__PerformanceHint;

#endif
