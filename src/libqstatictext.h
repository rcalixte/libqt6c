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

QStaticText* q_statictext_new();
QStaticText* q_statictext_new2(const char* text);
QStaticText* q_statictext_new3(void* other);
void q_statictext_operator_assign(void* self, void* param1);
void q_statictext_swap(void* self, void* other);
void q_statictext_set_text(void* self, const char* text);
const char* q_statictext_text(void* self);
void q_statictext_set_text_format(void* self, int64_t textFormat);
int64_t q_statictext_text_format(void* self);
void q_statictext_set_text_width(void* self, double textWidth);
double q_statictext_text_width(void* self);
void q_statictext_set_text_option(void* self, void* textOption);
QTextOption* q_statictext_text_option(void* self);
QSizeF* q_statictext_size(void* self);
void q_statictext_prepare(void* self);
void q_statictext_set_performance_hint(void* self, int64_t performanceHint);
int64_t q_statictext_performance_hint(void* self);
bool q_statictext_operator_equal(void* self, void* param1);
bool q_statictext_operator_not_equal(void* self, void* param1);
void q_statictext_prepare1(void* self, void* matrix);
void q_statictext_prepare2(void* self, void* matrix, void* font);
void q_statictext_delete(void* self);

/// https://doc.qt.io/qt-6/qstatictext.html#types

typedef enum {
    QSTATICTEXT_PERFORMANCEHINT_MODERATECACHING = 0,
    QSTATICTEXT_PERFORMANCEHINT_AGGRESSIVECACHING = 1
} QStaticText__PerformanceHint;

#endif
