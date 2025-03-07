#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqcolor.h"
#include "../libqfont.h"
#include <string.h>

QsciStyle* q_scistyle_new();
QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font);
QsciStyle* q_scistyle_new3(void* param1);
QsciStyle* q_scistyle_new4(int style);
QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill);
void q_scistyle_apply(void* self, void* sci);
void q_scistyle_set_style(void* self, int style);
int32_t q_scistyle_style(void* self);
void q_scistyle_set_description(void* self, const char* description);
const char* q_scistyle_description(void* self);
void q_scistyle_set_color(void* self, void* color);
QColor* q_scistyle_color(void* self);
void q_scistyle_set_paper(void* self, void* paper);
QColor* q_scistyle_paper(void* self);
void q_scistyle_set_font(void* self, void* font);
QFont* q_scistyle_font(void* self);
void q_scistyle_set_eol_fill(void* self, bool fill);
bool q_scistyle_eol_fill(void* self);
void q_scistyle_set_text_case(void* self, int64_t text_case);
int64_t q_scistyle_text_case(void* self);
void q_scistyle_set_visible(void* self, bool visible);
bool q_scistyle_visible(void* self);
void q_scistyle_set_changeable(void* self, bool changeable);
bool q_scistyle_changeable(void* self);
void q_scistyle_set_hotspot(void* self, bool hotspot);
bool q_scistyle_hotspot(void* self);
void q_scistyle_refresh(void* self);
void q_scistyle_delete(void* self);

/// https://doc.qt.io/qt-6/qscistyle.html#types

typedef enum {
    QSCISTYLE_TEXTCASE_ORIGINALCASE = 0,
    QSCISTYLE_TEXTCASE_UPPERCASE = 1,
    QSCISTYLE_TEXTCASE_LOWERCASE = 2
} QsciStyle__TextCase;

#endif
