#pragma once
#ifndef SRCQT6C_LIBQSTATICTEXT_H
#define SRCQT6C_LIBQSTATICTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include "libqsize.h"
#include <string.h>
#include "libqtextoption.h"
#include "libqtransform.h"

/// https://doc.qt.io/qt-6/qstatictext.html

/// q_statictext_new constructs a new QStaticText object.
///
///
QStaticText* q_statictext_new();

/// q_statictext_new2 constructs a new QStaticText object.
///
/// ``` const char* text ```
QStaticText* q_statictext_new2(const char* text);

/// q_statictext_new3 constructs a new QStaticText object.
///
/// ``` QStaticText* other ```
QStaticText* q_statictext_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator=)
///
/// ``` QStaticText* self, QStaticText* param1 ```
void q_statictext_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#swap)
///
/// ``` QStaticText* self, QStaticText* other ```
void q_statictext_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setText)
///
/// ``` QStaticText* self, const char* text ```
void q_statictext_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#text)
///
/// ``` QStaticText* self ```
const char* q_statictext_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
///
/// ``` QStaticText* self, enum Qt__TextFormat textFormat ```
void q_statictext_set_text_format(void* self, int64_t textFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textFormat)
///
/// ``` QStaticText* self ```
int64_t q_statictext_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
///
/// ``` QStaticText* self, double textWidth ```
void q_statictext_set_text_width(void* self, double textWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
///
/// ``` QStaticText* self ```
double q_statictext_text_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
///
/// ``` QStaticText* self, QTextOption* textOption ```
void q_statictext_set_text_option(void* self, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textOption)
///
/// ``` QStaticText* self ```
QTextOption* q_statictext_text_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#size)
///
/// ``` QStaticText* self ```
QSizeF* q_statictext_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// ``` QStaticText* self ```
void q_statictext_prepare(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
///
/// ``` QStaticText* self, enum QStaticText__PerformanceHint performanceHint ```
void q_statictext_set_performance_hint(void* self, int64_t performanceHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#performanceHint)
///
/// ``` QStaticText* self ```
int64_t q_statictext_performance_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator==)
///
/// ``` QStaticText* self, QStaticText* param1 ```
bool q_statictext_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator!=)
///
/// ``` QStaticText* self, QStaticText* param1 ```
bool q_statictext_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// ``` QStaticText* self, QTransform* matrix ```
void q_statictext_prepare1(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
///
/// ``` QStaticText* self, QTransform* matrix, QFont* font ```
void q_statictext_prepare2(void* self, void* matrix, void* font);

/// Delete this object from C++ memory.
///
/// ``` QStaticText* self ```
void q_statictext_delete(void* self);

/// https://doc.qt.io/qt-6/qstatictext.html#types

typedef enum {
    QSTATICTEXT_PERFORMANCEHINT_MODERATECACHING = 0,
    QSTATICTEXT_PERFORMANCEHINT_AGGRESSIVECACHING = 1
} QStaticText__PerformanceHint;

#endif
